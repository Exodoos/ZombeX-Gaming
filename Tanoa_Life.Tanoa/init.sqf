/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "initialization\briefing.sqf"; //Load Briefing
[] execVM "initialization\KRON_Strings.sqf";
[] execVM "scripts\removesnakes.sqf";
[] execVM "core\scripts\fn_statusBar.sqf";

StartProgress = true;