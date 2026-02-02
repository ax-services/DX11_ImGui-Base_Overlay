#pragma once
#include "../ext/imgui.h"
#include "../ext/imgui_impl_win32.h"
#include "../ext/imgui_impl_dx11.h"

void menu_test() {
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.2f, 0.2f, 0.2f, 0.7f));

    ImGui::Begin("Test Window", nullptr, ImGuiWindowFlags_MenuBar | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    ImGui::Text("This is a test window.");
    ImGui::Text("You can add more UI elements here.");

    ImGui::End();
    ImGui::PopStyleColor();
}