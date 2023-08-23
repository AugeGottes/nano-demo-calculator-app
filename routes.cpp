#include "crow_all.h"
#include<bits/stdc++.h>
crow::response greet()
{
    return crow::response{"Hello World!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);    
    int num1,num2;
    num1=input["num1"].i();
    num2=input["num2"].i();
    int result=num1+num2;
    return crow::response{result};
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int num1,num2;
    num1=input["num1"].i();
    num2=input["num2"].i();
    int result=num1-num2;
    return crow::response{std::to_string(result)};
}