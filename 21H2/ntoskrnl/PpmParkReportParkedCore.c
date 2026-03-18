/*
 * XREFs of PpmParkReportParkedCore @ 0x1405DD1A8
 * Callers:
 *     PpmPerfAction @ 0x140343B00 (PpmPerfAction.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x1405D9724 (PpmEventCoreParkingStateChangeEx.c)
 */

char __fastcall PpmParkReportParkedCore(__int64 a1)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  __int16 v6; // [rsp+20h] [rbp-8h]

  v2 = KeCheckProcessorAffinityEx((unsigned __int16 *)&PpmParkNewSoftParkingMask, *(_DWORD *)(a1 + 36));
  KeTransitionProcessorParkState(a1, (v2 != 0) + 1);
  v3 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 34060) = 1;
  KeInterlockedSetProcessorAffinityEx((__int64)PpmPerfCoreParkingMask, v3);
  _disable();
  v4 = *(_DWORD *)(a1 + 33088);
  *(_DWORD *)(a1 + 11684) = 0;
  *(_DWORD *)(a1 + 11680) = v4;
  if ( (v6 & 0x200) != 0 )
    _enable();
  if ( v2 )
  {
    KeInterlockedSetProcessorAffinityEx((__int64)PpmParkSoftParkingMask, *(_DWORD *)(a1 + 36));
    *(_BYTE *)(a1 + 33659) = 1;
  }
  return PpmEventCoreParkingStateChangeEx(a1, v2 != 0);
}
