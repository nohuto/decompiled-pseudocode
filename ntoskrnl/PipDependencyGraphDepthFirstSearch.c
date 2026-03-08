/*
 * XREFs of PipDependencyGraphDepthFirstSearch @ 0x1403ADFC4
 * Callers:
 *     PipFindDependencyNodePath @ 0x1403ADF2C (PipFindDependencyNodePath.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x1403ADFC4 (PipDependencyGraphDepthFirstSearch.c)
 * Callees:
 *     PipDependencyGraphDepthFirstSearch @ 0x1403ADFC4 (PipDependencyGraphDepthFirstSearch.c)
 */

char __fastcall PipDependencyGraphDepthFirstSearch(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  int v10; // eax
  _QWORD *v11; // rbp
  __int64 v12; // rcx

  *a3 = 0;
  *a4 = 0;
  if ( a1 != a2 )
  {
    v7 = (_QWORD *)(a1 + 16);
    v8 = *(_QWORD **)(a1 + 16);
    do
    {
      if ( v8 == v7 )
        return 0;
      v11 = v8;
      v12 = v8[4];
      v8 = (_QWORD *)*v8;
    }
    while ( !(unsigned __int8)PipDependencyGraphDepthFirstSearch(v12, a2, a3, a4) );
    v10 = *((_DWORD *)v11 + 12);
    ++*a3;
    *a4 = v10;
  }
  return 1;
}
