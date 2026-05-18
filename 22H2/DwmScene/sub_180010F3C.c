/*
 * XREFs of sub_180010F3C @ 0x180010F3C
 * Callers:
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_18003EFE0 @ 0x18003EFE0 (sub_18003EFE0.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_180073ED4 @ 0x180073ED4 (sub_180073ED4.c)
 *     sub_18007EAF8 @ 0x18007EAF8 (sub_18007EAF8.c)
 *     sub_18007EC44 @ 0x18007EC44 (sub_18007EC44.c)
 *     sub_1800AEF5C @ 0x1800AEF5C (sub_1800AEF5C.c)
 *     sub_1800BE380 @ 0x1800BE380 (sub_1800BE380.c)
 *     sub_1800C5F70 @ 0x1800C5F70 (sub_1800C5F70.c)
 *     sub_1800D52B4 @ 0x1800D52B4 (sub_1800D52B4.c)
 *     sub_1800D6470 @ 0x1800D6470 (sub_1800D6470.c)
 *     sub_1800D816C @ 0x1800D816C (sub_1800D816C.c)
 *     sub_1800E66C0 @ 0x1800E66C0 (sub_1800E66C0.c)
 *     sub_1800F6930 @ 0x1800F6930 (sub_1800F6930.c)
 *     sub_1801057E4 @ 0x1801057E4 (sub_1801057E4.c)
 *     sub_1801059D4 @ 0x1801059D4 (sub_1801059D4.c)
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 *     sub_18010DF40 @ 0x18010DF40 (sub_18010DF40.c)
 *     sub_180116FB0 @ 0x180116FB0 (sub_180116FB0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 *     sub_1800125E4 @ 0x1800125E4 (sub_1800125E4.c)
 */

unsigned __int64 __fastcall sub_180010F3C(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r10
  unsigned __int64 v13; // r14
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // r8
  unsigned __int64 v21; // rbx
  char *v23; // [rsp+20h] [rbp-58h]

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_180010B0C((__int64)a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)((char *)v12 + v13);
  v15 = (_QWORD *)((char *)v12 + v13 + 16);
  *v14 = 0LL;
  v14[1] = 0LL;
  v16 = a3[1];
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  *v14 = *a3;
  v14[1] = a3[1];
  v23 = (char *)v12 + v13;
  v17 = (_QWORD *)a1[1];
  v18 = (_QWORD *)*a1;
  if ( a2 == v17 )
  {
    v19 = v12;
    while ( v18 != v17 )
    {
      *v19 = 0LL;
      v19[1] = 0LL;
      *v19 = *v18;
      v19[1] = v18[1];
      *v18 = 0LL;
      v18[1] = 0LL;
      v19 += 2;
      v18 += 2;
    }
  }
  else
  {
    v20 = v12;
    if ( v18 != a2 )
    {
      do
      {
        *v20 = 0LL;
        v20[1] = 0LL;
        *v20 = *v18;
        v20[1] = v18[1];
        *v18 = 0LL;
        v18[1] = 0LL;
        v20 += 2;
        v18 += 2;
      }
      while ( v18 != a2 );
      v17 = (_QWORD *)a1[1];
    }
    v23 = (char *)v12;
    if ( a2 != v17 )
    {
      v21 = (char *)a2 - v13 - (char *)v12;
      do
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        *v15 = *(_QWORD *)((char *)v15 + v21 - 16);
        v15[1] = *(_QWORD *)((char *)v15 + v21 - 8);
        *(_QWORD *)((char *)v15 + v21 - 16) = 0LL;
        *(_QWORD *)((char *)v15 + v21 - 8) = 0LL;
        v15 += 2;
      }
      while ( (_QWORD *)((char *)v15 + v21 - 16) != v17 );
    }
  }
  sub_1800125E4(a1, v12, v8, v11, v23, v11, a1, (char *)v12 + v13 + 16, v12);
  return v13 + *a1;
}
