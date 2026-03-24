/*
 * XREFs of VmCheckLargePageInswap @ 0x14092E854
 * Callers:
 *     MmInSwapWorkingSet @ 0x140350CF4 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmCheckLargePageInswap(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 2288);
  if ( !v1 )
    return 0LL;
  v2 = *(_DWORD *)(v1 + 88);
  result = 1LL;
  if ( (v2 & 1) == 0 )
    return 0LL;
  return result;
}
