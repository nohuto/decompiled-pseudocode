/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x1404F1740
 * Callers:
 *     KeAccumulateTicks @ 0x1402243D0 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlInvokeHypervisorDebugger(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpRootFlags, (HvlpRootFlags & 1) != 0) )
  {
    if ( HvlHypervisorConnected )
      return HvcallInitiateHypercall(65546, a1, a2, a4);
  }
  return result;
}
