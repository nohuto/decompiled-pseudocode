/*
 * XREFs of ViDeadlockCheckDuplicatesAmongRoots @ 0x140AD5C54
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 * Callees:
 *     ViDeadlockMergeNodes @ 0x140AD65B4 (ViDeadlockMergeNodes.c)
 *     ViDeadlockSimilarNodes @ 0x140AD6EE0 (ViDeadlockSimilarNodes.c)
 */

_UNKNOWN **__fastcall ViDeadlockCheckDuplicatesAmongRoots(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  int v3; // esi
  _QWORD **v4; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0;
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 56) + 24LL);
  v7 = *v4;
  while ( v7 != v4 )
  {
    v8 = v7 - 5;
    v7 = (_QWORD *)*v7;
    if ( !*v8 )
    {
      result = (_UNKNOWN **)ViDeadlockSimilarNodes(v8, a1);
      if ( (_DWORD)result )
      {
        if ( v3 )
          result = (_UNKNOWN **)ViDeadlockMergeNodes(a1, v9, a2);
        else
          v3 = 1;
      }
    }
  }
  return result;
}
