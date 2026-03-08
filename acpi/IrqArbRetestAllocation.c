/*
 * XREFs of IrqArbRetestAllocation @ 0x1C009D890
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009E4D0 (IrqArbpPrepareForTestOrConflict.c)
 *     ArbRetestAllocation @ 0x1C00A2730 (ArbRetestAllocation.c)
 */

__int64 __fastcall IrqArbRetestAllocation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbRetestAllocation(a1, a2);
  return result;
}
