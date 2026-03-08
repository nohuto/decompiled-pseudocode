/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x140379F10
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x140377960 (HalpTimerInitializeProfiling.c)
 *     HalpTimerClockActivate @ 0x140378000 (HalpTimerClockActivate.c)
 *     HalpConnectThermalInterrupt @ 0x140378B60 (HalpConnectThermalInterrupt.c)
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClockPn @ 0x140379D5C (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x140379DFC (HalpInitializeInterruptsPn.c)
 *     HalpTimerInitializeClock @ 0x1403AC5D0 (HalpTimerInitializeClock.c)
 *     HalpTimerTestHypervisorTimer @ 0x140508908 (HalpTimerTestHypervisorTimer.c)
 *     HalpIommuInitInterrupts @ 0x140A8701C (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140B3D448 (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140B8F474 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x140379F48 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
