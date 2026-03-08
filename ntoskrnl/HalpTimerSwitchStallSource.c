/*
 * XREFs of HalpTimerSwitchStallSource @ 0x1404FCBCC
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A93820 (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerSwitchStallSource(char a1)
{
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v3; // rdx

  if ( a1 )
  {
    HalpSavedStallCounter = HalpStallCounter;
    result = HalpOriginalStallTimer;
  }
  else
  {
    if ( HalpSavedStallCounter != HalpPerformanceCounter )
    {
      InternalData = HalpTimerGetInternalData(HalpSavedStallCounter);
      (*(void (__fastcall **)(__int64))(v3 + 104))(InternalData);
    }
    result = HalpSavedStallCounter;
    HalpSavedStallCounter = 0LL;
  }
  HalpStallCounter = result;
  return result;
}
