#include <ros/ros.h>
#include "bumperbot_examples/AddTwoInts.h"


bool addCallback(bumperbot_examples::AddTwoInts::Request  &req,
                 bumperbot_examples::AddTwoInts::Response &res)
{
    // Function that is called each time the service receives a request
    // The request message is passed as input to this function
    ROS_INFO("Ready to sum %d and %d", (int)req.a, (int)req.b);
    res.sum = req.a + req.b;
    return true;
}


int main(int argc, char **argv)
{
    // Inizialize a ROS node called simple_service
    ros::init(argc, argv, "simple_service_server_cpp");
    ros::NodeHandle nh;

    // Initialize a service named add_two_ints that uses the AddTwoInts
    // for the Request/Response communication interface
    // Define the function that is called each time the service receives a request
    ros::ServiceServer service = nh.advertiseService("add_two_ints", addCallback);
    ROS_INFO("The service is ready to add two ints.");

    // keeps the node up and running
    ros::spin();
    return 0;
}