_UNKNOWN **__fastcall ViDeadlockCheckDuplicatesAmongChildren(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // rdi
  _QWORD *v6; // rbx
  int v8; // esi
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = (_QWORD *)(a1 + 8);
  v6 = *(_QWORD **)(a1 + 8);
  v8 = 0;
  while ( v6 != v4 )
  {
    v9 = v6 - 3;
    v6 = (_QWORD *)*v6;
    result = (_UNKNOWN **)ViDeadlockSimilarNodes(v9, a2);
    if ( (_DWORD)result )
    {
      if ( v8 )
        result = (_UNKNOWN **)ViDeadlockMergeNodes(a2, v10, a3);
      else
        v8 = 1;
    }
  }
  return result;
}
