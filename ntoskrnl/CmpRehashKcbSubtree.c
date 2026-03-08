/*
 * XREFs of CmpRehashKcbSubtree @ 0x140A14998
 * Callers:
 *     CmpSearchAndRehashWorker @ 0x140A14A70 (CmpSearchAndRehashWorker.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x14074BBF8 (CmpRemoveKeyHash.c)
 *     CmpInsertKeyHash @ 0x140A147E0 (CmpInsertKeyHash.c)
 */

char __fastcall CmpRehashKcbSubtree(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // cl
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // ebx

  v2 = 0LL;
  v4 = a2;
  if ( a1 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 72);
      *(_QWORD *)(v4 + 72) = v2;
      v2 = v4;
      v4 = v5;
    }
    while ( v2 != a1 );
  }
  v6 = 0;
  if ( v2 )
  {
    do
    {
      v7 = *(_QWORD *)(v2 + 72);
      v8 = *(_QWORD *)(v2 + 80);
      *(_QWORD *)(v2 + 72) = v4;
      if ( v4 )
        v9 = *(_DWORD *)(v8 + 8) + 37 * *(_DWORD *)(v4 + 16);
      else
        v9 = *(_DWORD *)(v8 + 8);
      if ( v9 != *(_DWORD *)(v2 + 16) )
      {
        CmpRemoveKeyHash(*(_QWORD *)(a2 + 32), (_DWORD *)(v2 + 16));
        *(_DWORD *)(v2 + 16) = v9;
        CmpInsertKeyHash(*(_QWORD *)(a2 + 32), (_DWORD *)(v2 + 16));
        v6 = 1;
      }
      v4 = v2;
      v2 = v7;
    }
    while ( v7 );
  }
  return v6;
}
