#pragma once
#include <string>
#include "imgui\imgui.h"
#include "Player.h"
#include "Tracker.h"
#include "BuffIds.h"

class AppChart
{
public:
	uintptr_t active_player, last_active_player;
	int8_t active_column, last_active_column;
	ImVec4 active_bar_color = ImVec4(1, 1, 1, 70);
	
	AppChart();
	~AppChart();

	void Draw(const char* title, bool* p_open, Tracker* tracker, ImGuiWindowFlags flags = ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_MenuBar);

	void buffProgressBar(BoonDef* current_buff, float current_boon_uptime, uintptr_t current_player);
};

bool bShowTotal(Tracker* tracker);