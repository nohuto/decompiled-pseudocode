/*
 * XREFs of HalpTimerMeasureAllProcessorFrequencies @ 0x14050A60C
 * Callers:
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140396D40 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

ULONG_PTR HalpTimerMeasureAllProcessorFrequencies()
{
  ULONG_PTR Context[2]; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  Context[0] = KeQueryActiveProcessorCountEx(0xFFFFu);
  Context[1] = 0LL;
  v2 = 5;
  return KeIpiGenericCall(HalpTimerMeasureProcessorsWorker, (ULONG_PTR)Context);
}
