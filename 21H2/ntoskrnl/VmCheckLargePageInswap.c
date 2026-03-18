/*
 * XREFs of VmCheckLargePageInswap @ 0x1409D8CD4
 * Callers:
 *     MmInSwapWorkingSet @ 0x14025F4D4 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmCheckLargePageInswap(__int64 a1)
{
  __int64 v1; // rax
  char v2; // cl
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 2288);
  if ( !v1 )
    return 0LL;
  v2 = *(_BYTE *)(v1 + 104);
  result = 1LL;
  if ( (v2 & 1) == 0 )
    return 0LL;
  return result;
}
