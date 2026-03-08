/*
 * XREFs of VmCheckLargePageInswap @ 0x1409D90D4
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmCheckLargePageInswap(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 2288);
  if ( result )
    return *(_WORD *)(result + 104) & 1;
  return result;
}
