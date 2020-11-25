#define _CRT_SECURE_NO_DEPRECATE
#define FAST_OBJ_IMPLEMENTATION
#include <fast_obj/fast_obj.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(int argc, const char* argv[])
{
    fastObjMesh* m = fast_obj_read("C:/Users/pandy/Documents/OpenGL/3D Models/Beagle/13041_Beagle_v1_L1.obj");

    cout << "group count        : " << m->group_count << endl;
    cout << "face count         : " << m->face_count << endl;
    cout << "textcoord count    : " << m->texcoord_count << endl;
    cout << " " << endl;

    const fastObjGroup& grp = m->groups[0];

    cout << "group-0" << endl;
    cout << "group face count   : " << grp.face_count << endl;
    cout << "face face offset   : " << grp.face_offset << endl;
    cout << " " << endl;

    cout << "face vertices" << endl;
    cout << "[0]                : " << m->face_vertices[0] << endl;
    cout << "[1]                : " << m->face_vertices[1] << endl;
    cout << "[2]                : " << m->face_vertices[2] << endl;
}