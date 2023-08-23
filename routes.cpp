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
    cout<<num1<<" "<<num2<<endl;
    num1=input["first"].i();
    num2=input["second"].i();
    int result=num1+num2;
    crow::json::wvalue response;
    response["result"] = result;

    return crow::response{response};
}
crow::response subtract(const crow::request &req)
{
    crow::json::rvalue input = crow::json::load(req.body);
    int num1,num2;
    num1=input["first"].i();
    num2=input["second"].i();
    int result=num1-num2;
    crow::json::wvalue response;
    response["result"] = result;

    return crow::response{response};
}