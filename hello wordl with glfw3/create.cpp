#include <GLFW/glfw3.h>




using namespace std;

int main()
{

glfwInit();	
GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);

//while(!glfwWindowShouldClose(window))
//{
//glClear(GL_COLOR_BUFFER_BIT);
//glfwSwapBuffers(window);
//	
////glfwPoolEvents();
//
//}
glfwShowWindow(window);
while (!glfwWindowShouldClose(window))
{
    //render(window);
 
    glfwSwapBuffers(window);
    glfwPollEvents();
}







//glfwTerminate(window);
glfwDestroyWindow(window);
return 0;
}







