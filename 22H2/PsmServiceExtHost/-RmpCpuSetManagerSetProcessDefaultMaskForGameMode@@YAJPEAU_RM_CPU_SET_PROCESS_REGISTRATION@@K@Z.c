/*
 * XREFs of ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006E10C
 * Callers:
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180070010 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180040CCC (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpCpuSetManagerSetProcessDefaultMaskForGameMode(
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a1,
        char a2)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  _QWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  _OWORD ProcessInformation[10]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = *((_QWORD *)a1 + 8);
  if ( !v2 )
    return -1073741738;
  ProcessInformation[0] = *(_OWORD *)(v2 + 104);
  ProcessInformation[1] = *(_OWORD *)(v2 + 120);
  ProcessInformation[2] = *(_OWORD *)(v2 + 136);
  ProcessInformation[3] = *(_OWORD *)(v2 + 152);
  ProcessInformation[4] = *(_OWORD *)(v2 + 168);
  ProcessInformation[5] = *(_OWORD *)(v2 + 184);
  ProcessInformation[6] = *(_OWORD *)(v2 + 200);
  ProcessInformation[7] = *(_OWORD *)(v2 + 216);
  ProcessInformation[8] = *(_OWORD *)(v2 + 232);
  ProcessInformation[9] = *(_OWORD *)(v2 + 248);
  if ( (a2 & 1) != 0 )
  {
    v5 = ProcessInformation;
    v6 = 20LL;
    v7 = **((_QWORD **)a1 + 6) - (_QWORD)ProcessInformation;
    do
    {
      *v5 |= *(_QWORD *)((char *)v5 + v7 + 248);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  result = RmpSystemSetProcessDefaultCpuSets(*(HANDLE *)(*((_QWORD *)a1 + 7) + 16LL), ProcessInformation);
  if ( result >= 0 )
    return 0;
  return result;
}
