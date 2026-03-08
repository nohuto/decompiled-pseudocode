/*
 * XREFs of DefaultOverflowHandler @ 0x14050A950
 * Callers:
 *     HalpTimerProfileInterrupt @ 0x14051C690 (HalpTimerProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KeProfileInterruptWithSource @ 0x140571A20 (KeProfileInterruptWithSource.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1)
{
  if ( HalpTimerProfilingCallback )
    return HalpTimerProfilingCallback();
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
