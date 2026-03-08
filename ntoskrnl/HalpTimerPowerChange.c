/*
 * XREFs of HalpTimerPowerChange @ 0x1405071C0
 * Callers:
 *     HalpTimerPowerCriticalTransitionCallback @ 0x140507280 (HalpTimerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpTimerClockPowerChange @ 0x140506414 (HalpTimerClockPowerChange.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140506BD0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerStallCounterPowerChange @ 0x140507408 (HalpTimerStallCounterPowerChange.c)
 *     HalpTimerProfilePowerChange @ 0x140508488 (HalpTimerProfilePowerChange.c)
 */

__int64 __fastcall HalpTimerPowerChange(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  char v2; // di
  __int64 result; // rax

  v2 = a2;
  if ( (_BYTE)a2 )
  {
    *(_DWORD *)(BugCheckParameter3 + 184) &= ~0x80u;
  }
  else if ( (*(_DWORD *)(BugCheckParameter3 + 224) & 0x8000) != 0 )
  {
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x20uLL, BugCheckParameter3, 0LL);
  }
  if ( BugCheckParameter3 == HalpClockTimer )
    result = HalpTimerClockPowerChange(BugCheckParameter3, a2);
  if ( BugCheckParameter3 == HalpPerformanceCounter || BugCheckParameter3 == HalpTimerSavedPerformanceCounter )
    result = (__int64)HalpTimerPerformanceCounterPowerChange(BugCheckParameter3, v2);
  if ( BugCheckParameter3 == HalpStallCounter || BugCheckParameter3 == HalpSavedStallCounter )
    result = HalpTimerStallCounterPowerChange(BugCheckParameter3);
  if ( BugCheckParameter3 == HalpProfileTimer )
  {
    LOBYTE(a2) = v2;
    result = HalpTimerProfilePowerChange(BugCheckParameter3, a2);
  }
  if ( !v2 )
    *(_DWORD *)(BugCheckParameter3 + 184) |= 0x80u;
  return result;
}
