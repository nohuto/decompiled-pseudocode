/*
 * XREFs of HalpTimerClockInitialize @ 0x1403509B0
 * Callers:
 *     HalpTimerClockPowerChange @ 0x1405084F4 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4540 (HalpTimerGetInternalData.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpTimerSetProblemEx @ 0x140509444 (HalpTimerSetProblemEx.c)
 */

__int64 HalpTimerClockInitialize()
{
  ULONG_PTR v0; // rbx
  __int64 InternalData; // rax
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // r8

  v0 = HalpClockTimer;
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  result = (*(__int64 (__fastcall **)(__int64))(v0 + 104))(InternalData);
  if ( (int)result < 0 )
  {
    HalpTimerSetProblemEx(v0, 15, result, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\clockint.c", 1489);
    KeBugCheckEx(0x5Cu, 0x110uLL, v0, HalpTimerLastProblem, BugCheckParameter4);
  }
  return result;
}
