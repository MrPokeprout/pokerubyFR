LilycoveCity_DepartmentStore_3F_EventObjects:: @ 838A38C
	object_event 1, EVENT_OBJ_GFX_RUNNING_TRIATHLETE_M, 0, 0, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LilycoveCity_DepartmentStore_3F_EventScript_159FE2, 0
	object_event 2, EVENT_OBJ_GFX_MAN_3, 0, 7, 7, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LilycoveCity_DepartmentStore_3F_EventScript_159FEB, 0
	object_event 3, EVENT_OBJ_GFX_WOMAN_7, 0, 13, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, LilycoveCity_DepartmentStore_3F_EventScript_159FF4, 0
	object_event 4, EVENT_OBJ_GFX_WOMAN_4, 0, 8, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, LilycoveCity_DepartmentStore_3F_EventScript_159F91, 0
	object_event 5, EVENT_OBJ_GFX_WOMAN_4, 0, 10, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, 0, 0, LilycoveCity_DepartmentStore_3F_EventScript_159FB8, 0

LilycoveCity_DepartmentStore_3F_MapWarps:: @ 838A404
	warp_def 13, 1, 0, 1, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_2F
	warp_def 16, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_4F
	warp_def 2, 1, 0, 0, MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR

LilycoveCity_DepartmentStore_3F_MapEvents:: @ 838A41C
	map_events LilycoveCity_DepartmentStore_3F_EventObjects, LilycoveCity_DepartmentStore_3F_MapWarps, 0x0, 0x0
