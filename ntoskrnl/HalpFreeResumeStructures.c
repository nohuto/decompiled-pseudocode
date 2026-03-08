/*
 * XREFs of HalpFreeResumeStructures @ 0x140A92EF4
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14050B1D4 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpFreeResumeStructures(__int64 a1)
{
  __int64 result; // rax

  if ( HalpHiberProcState )
  {
    result = HalpMmAllocCtxFree(a1, HalpHiberProcState);
    HalpHiberProcState = 0LL;
  }
  return result;
}
