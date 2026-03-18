/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x14037D8C0
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x14037B310 (HalpTimerInitializeProfiling.c)
 *     HalpTimerClockActivate @ 0x14037B9B0 (HalpTimerClockActivate.c)
 *     HalpConnectThermalInterrupt @ 0x14037C510 (HalpConnectThermalInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x14037D5E4 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClockPn @ 0x14037D70C (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x14037D7AC (HalpInitializeInterruptsPn.c)
 *     HalpTimerInitializeClock @ 0x1403B1320 (HalpTimerInitializeClock.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050A9E8 (HalpTimerTestHypervisorTimer.c)
 *     HalpIommuInitInterrupts @ 0x140A8A62C (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140B4BA90 (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140B93694 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x14037D8F8 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
