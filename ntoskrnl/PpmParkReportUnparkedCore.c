/*
 * XREFs of PpmParkReportUnparkedCore @ 0x14045B1CC
 * Callers:
 *     PpmPerfAction @ 0x140236430 (PpmPerfAction.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1402DA1D0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x14057B3EC (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x1405979BC (PpmEventCoreParkingStateChange.c)
 */

_BYTE *__fastcall PpmParkReportUnparkedCore(__int64 a1)
{
  int v2; // edx
  _BYTE *result; // rax

  KeTransitionProcessorParkState(a1, 0LL);
  v2 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 34060) = 0;
  KeInterlockedClearProcessorAffinityEx((__int64)PpmPerfCoreParkingMask, v2);
  if ( *(_BYTE *)(a1 + 33659) )
  {
    KeInterlockedClearProcessorAffinityEx((__int64)PpmParkSoftParkingMask, *(_DWORD *)(a1 + 36));
    *(_BYTE *)(a1 + 33659) = 0;
  }
  PpmEventCoreParkingStateChange(a1);
  result = *(_BYTE **)(a1 + 33600);
  if ( result )
  {
    if ( *result == 1 )
      *(_BYTE *)(a1 + 33669) = 1;
  }
  return result;
}
