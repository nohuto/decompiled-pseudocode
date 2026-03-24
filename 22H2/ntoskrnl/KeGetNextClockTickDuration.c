/*
 * XREFs of KeGetNextClockTickDuration @ 0x140513C20
 * Callers:
 *     HalpTimerClockPowerChange @ 0x1404BF450 (HalpTimerClockPowerChange.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 */

unsigned __int64 KeGetNextClockTickDuration()
{
  __int64 v0; // rbx
  unsigned __int64 InterruptTimePrecise; // rax
  LARGE_INTEGER v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v3);
  if ( KiClockTimerNextTickTime > InterruptTimePrecise )
    return KiClockTimerNextTickTime - InterruptTimePrecise;
  return v0;
}
