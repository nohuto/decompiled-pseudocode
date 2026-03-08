/*
 * XREFs of PpmParkReportSoftParkChange @ 0x14059AD7C
 * Callers:
 *     PpmPerfAction @ 0x140236430 (PpmPerfAction.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1402DA1D0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1402DE1C0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x14057B3EC (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x14059789C (PpmEventCoreParkingSoftParkedStateChange.c)
 */

char __fastcall PpmParkReportSoftParkChange(__int64 a1)
{
  int v2; // ebx
  char v3; // si
  int v4; // edx

  v2 = KeCheckProcessorAffinityEx((unsigned __int16 *)&PpmParkNewSoftParkingMask, *(_DWORD *)(a1 + 36));
  v3 = v2 != 0;
  KeTransitionProcessorParkState(a1, (v2 != 0) + 1);
  v4 = *(_DWORD *)(a1 + 36);
  if ( v2 )
    KeInterlockedSetProcessorAffinityEx((__int64)PpmParkSoftParkingMask, v4);
  else
    KeInterlockedClearProcessorAffinityEx((__int64)PpmParkSoftParkingMask, v4);
  *(_BYTE *)(a1 + 33659) = v3;
  return PpmEventCoreParkingSoftParkedStateChange(a1, v3);
}
