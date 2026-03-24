/*
 * XREFs of DefaultEnableMonitoring @ 0x1404BE630
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerStartProfileInterrupt @ 0x1404C1988 (HalpTimerStartProfileInterrupt.c)
 */

__int64 __fastcall DefaultEnableMonitoring(int a1, int a2)
{
  if ( a1 || a2 )
    return 3221225659LL;
  else
    return HalpTimerStartProfileInterrupt();
}
