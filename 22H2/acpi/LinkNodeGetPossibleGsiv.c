/*
 * XREFs of LinkNodeGetPossibleGsiv @ 0x1C00994A4
 * Callers:
 *     IrqArbAddAllocation @ 0x1C009C4C0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009E1B4 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009E8A0 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeGetPossibleGsiv(__int64 a1, _DWORD *a2)
{
  if ( !*(_DWORD *)(a1 + 28) )
    return 3221226021LL;
  if ( a2 )
    *a2 = *(_DWORD *)(a1 + 36);
  return 0LL;
}
