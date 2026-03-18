/*
 * XREFs of IrqArbTestAllocation @ 0x1C009D910
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009E4E0 (IrqArbpPrepareForTestOrConflict.c)
 *     ArbTestAllocation @ 0x1C00A2BF0 (ArbTestAllocation.c)
 */

__int64 __fastcall IrqArbTestAllocation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbTestAllocation(a1, a2);
  return result;
}
