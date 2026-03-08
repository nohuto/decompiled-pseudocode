/*
 * XREFs of ViDeadlockMergeNodes @ 0x140AD65B4
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x140AD5BD4 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140AD5C54 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x140AD6F60 (ViDeadlockUpdateChildrenCount.c)
 */

__int64 __fastcall ViDeadlockMergeNodes(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rdi
  _QWORD *v7; // r11
  __int64 v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 64);
  v5 = (_QWORD *)a2;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 64) = v3;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  }
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72) & 1 | *(_DWORD *)(a1 + 72) & 0xFFFFFFFE;
  v6 = (_QWORD *)(a2 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  while ( v7 != v6 )
  {
    v8 = *v7;
    v9 = v7 - 3;
    v10 = v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_18;
    v11 = (_QWORD *)v7[1];
    if ( (_QWORD *)*v11 != v7 )
      goto LABEL_18;
    *v11 = v8;
    *(_QWORD *)(v8 + 8) = v11;
    ViDeadlockUpdateChildrenCount(v5, (unsigned int)~*((_DWORD *)v9 + 19), a3, v5);
    *v9 = v14;
    v15 = *(_QWORD **)(v14 + 16);
    if ( *v15 != v14 + 8 )
      goto LABEL_18;
    v10[1] = v15;
    *v10 = v14 + 8;
    *v15 = v10;
    *(_QWORD *)(v14 + 16) = v10;
    ViDeadlockUpdateChildrenCount(v14, (unsigned int)(*((_DWORD *)v9 + 19) + 1), v12, v13);
  }
  if ( *v5 )
  {
    v16 = v5[3];
    if ( *(_QWORD **)(v16 + 8) != v5 + 3 || (v17 = (_QWORD *)v5[4], (_QWORD *)*v17 != v5 + 3) )
LABEL_18:
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    ViDeadlockUpdateChildrenCount(*v5, 0xFFFFFFFFLL, a3, v5);
  }
  --*(_WORD *)(v5[7] + 4LL);
  v18 = v5[5];
  if ( *(_QWORD **)(v18 + 8) != v5 + 5 )
    goto LABEL_18;
  v19 = (_QWORD *)v5[6];
  if ( (_QWORD *)*v19 != v5 + 5 )
    goto LABEL_18;
  result = *a3;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  *a3 = (__int64)v5;
  *v5 = result;
  return result;
}
