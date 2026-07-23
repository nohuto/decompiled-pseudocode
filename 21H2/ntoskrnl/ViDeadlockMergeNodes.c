/*
 * XREFs of ViDeadlockMergeNodes @ 0x1409E0614
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x1409E00A0 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x1409E0120 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x1409E0F14 (ViDeadlockUpdateChildrenCount.c)
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
  __int64 v12; // r10
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
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
    ViDeadlockUpdateChildrenCount(v5, (unsigned int)~*((_DWORD *)v9 + 19));
    *v9 = v12;
    v13 = *(_QWORD **)(v12 + 16);
    if ( *v13 != v12 + 8 )
      goto LABEL_18;
    v10[1] = v13;
    *v10 = v12 + 8;
    *v13 = v10;
    *(_QWORD *)(v12 + 16) = v10;
    ViDeadlockUpdateChildrenCount(v12, (unsigned int)(*((_DWORD *)v9 + 19) + 1));
  }
  if ( *v5 )
  {
    v14 = v5[3];
    if ( *(_QWORD **)(v14 + 8) != v5 + 3 || (v15 = (_QWORD *)v5[4], (_QWORD *)*v15 != v5 + 3) )
LABEL_18:
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    ViDeadlockUpdateChildrenCount(*v5, 0xFFFFFFFFLL);
  }
  --*(_WORD *)(v5[7] + 4LL);
  v16 = v5[5];
  if ( *(_QWORD **)(v16 + 8) != v5 + 5 )
    goto LABEL_18;
  v17 = (_QWORD *)v5[6];
  if ( (_QWORD *)*v17 != v5 + 5 )
    goto LABEL_18;
  result = *a3;
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  *a3 = (__int64)v5;
  *v5 = result;
  return result;
}
