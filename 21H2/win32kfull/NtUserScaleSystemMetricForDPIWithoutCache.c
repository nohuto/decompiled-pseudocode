/*
 * XREFs of NtUserScaleSystemMetricForDPIWithoutCache @ 0x1C01FC360
 * Callers:
 *     <none>
 * Callees:
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall NtUserScaleSystemMetricForDPIWithoutCache(unsigned int a1, unsigned int a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rcx

  EnterCrit(0LL, 0LL);
  v5 = ScaleSystemMetricForDPIWithoutCache(a1, a2, v4);
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
