/*
 * XREFs of ?RmpGameModeUnapplyCpuSetAllocation@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180070790
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180040CCC (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006E030 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x1800789D4 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 */

void __fastcall RmpGameModeUnapplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = *((_DWORD *)a2 + 35);
  if ( (v2 & 0x10) != 0 )
  {
    RmpSystemSetProcessConstrainedCpuSets(*((HANDLE *)a2 + 5), 0);
    v2 = *((_DWORD *)a2 + 35);
  }
  if ( (v2 & 4) != 0 )
    RmpSystemSetProcessDefaultCpuSets(*((HANDLE *)a2 + 5), 0LL);
  RmpAcquireGlobalLock();
  RmpCpuSetManagerReleaseProcessRegistrationEx(
    (struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)a1 + 680LL),
    *((struct _RM_CPU_SET_PROCESS_REGISTRATION **)a2 + 19),
    1);
  RmpReleaseGlobalLock();
  *((_QWORD *)a2 + 19) = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v6 = *((_DWORD *)a2 + 27);
      v11 = 0;
      v7 = v6;
      v10 = 4;
      v9 = &v7;
      tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_18009C953, 0LL, 0LL, 3u, &v8);
    }
  }
}
