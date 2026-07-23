/*
 * XREFs of ViDeadlockSimilarNode @ 0x1409E0E68
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViDeadlockSimilarNode(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 != *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8LL) )
    return 0LL;
  result = 1LL;
  if ( a2 != ((*(_DWORD *)(a3 + 72) >> 1) & 1) )
    return 0LL;
  return result;
}
