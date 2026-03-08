/*
 * XREFs of DefaultDisableMonitoring @ 0x14050A8B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerStopProfileInterrupt @ 0x1405086E8 (HalpTimerStopProfileInterrupt.c)
 */

void __fastcall DefaultDisableMonitoring(int a1)
{
  if ( !a1 )
    HalpTimerStopProfileInterrupt();
}
