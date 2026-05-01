/*
 * XREFs of ?RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@KK_K@Z @ 0x18006D564
 * Callers:
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18006F450 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x18006CE74 (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z.c)
 */

bool __fastcall RmpCpuSetManagerIsGameModeRequestSatisfiable(
        struct _RM_CPU_SET_MANAGER *a1,
        char a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  RmpAcquireGlobalLock();
  RmpCpuSetManagerGetGameModeRequestLimits(a1, a2, &v10, v9);
  RmpReleaseGlobalLock();
  return a3 <= v10 && (~v9[0] & a4) == 0;
}
