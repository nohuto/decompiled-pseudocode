/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x1403A1FAC
 * Callers:
 *     HalpTimerClockActivate @ 0x1403A1D70 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1E84 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403AF5E4 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403AF9E0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403AFBA0 (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x1403B0348 (HalpInitializeInterruptsPn.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404C1A6C (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x1404D14F0 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x14099ED28 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140A44BFC (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140A8D764 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x1403A1FE4 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
