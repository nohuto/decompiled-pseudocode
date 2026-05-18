/*
 * XREFs of sub_18000F8D8 @ 0x18000F8D8
 * Callers:
 *     sub_18000F7C8 @ 0x18000F7C8 (sub_18000F7C8.c)
 *     sub_180017524 @ 0x180017524 (sub_180017524.c)
 *     sub_180017634 @ 0x180017634 (sub_180017634.c)
 *     sub_180017744 @ 0x180017744 (sub_180017744.c)
 *     sub_18001EE70 @ 0x18001EE70 (sub_18001EE70.c)
 *     sub_180026F5C @ 0x180026F5C (sub_180026F5C.c)
 *     sub_180068D9C @ 0x180068D9C (sub_180068D9C.c)
 *     sub_180090BD0 @ 0x180090BD0 (sub_180090BD0.c)
 *     sub_180090CE0 @ 0x180090CE0 (sub_180090CE0.c)
 *     sub_18009BD94 @ 0x18009BD94 (sub_18009BD94.c)
 *     sub_18009BEA4 @ 0x18009BEA4 (sub_18009BEA4.c)
 *     sub_18009BFB4 @ 0x18009BFB4 (sub_18009BFB4.c)
 *     sub_18009C0C4 @ 0x18009C0C4 (sub_18009C0C4.c)
 *     sub_18009C1D4 @ 0x18009C1D4 (sub_18009C1D4.c)
 *     sub_1800A1DFC @ 0x1800A1DFC (sub_1800A1DFC.c)
 *     sub_1800AF398 @ 0x1800AF398 (sub_1800AF398.c)
 *     sub_1800EE11C @ 0x1800EE11C (sub_1800EE11C.c)
 *     sub_1800F0CF4 @ 0x1800F0CF4 (sub_1800F0CF4.c)
 * Callees:
 *     sub_180010930 @ 0x180010930 (sub_180010930.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 */

unsigned __int64 __fastcall sub_18000F8D8(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // r10
  unsigned __int64 v13; // r14
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // r9
  unsigned __int64 v20; // rbx
  __int64 v22; // [rsp+20h] [rbp-58h]

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
  v12 = sub_180010B0C(a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)(v13 + v12);
  v15 = (_QWORD *)(v13 + v12 + 16);
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v22 = v13 + v12;
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == v16 )
  {
    v18 = (_QWORD *)v12;
    while ( v17 != v16 )
    {
      *v18 = 0LL;
      v18[1] = 0LL;
      *v18 = *v17;
      v18[1] = v17[1];
      *v17 = 0LL;
      v17[1] = 0LL;
      v18 += 2;
      v17 += 2;
    }
  }
  else
  {
    v19 = (_QWORD *)v12;
    if ( v17 != a2 )
    {
      do
      {
        *v19 = 0LL;
        v19[1] = 0LL;
        *v19 = *v17;
        v19[1] = v17[1];
        *v17 = 0LL;
        v17[1] = 0LL;
        v19 += 2;
        v17 += 2;
      }
      while ( v17 != a2 );
      v16 = (_QWORD *)a1[1];
    }
    v22 = v12;
    if ( a2 != v16 )
    {
      v20 = (unsigned __int64)a2 - v13 - v12;
      do
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        *v15 = *(_QWORD *)((char *)v15 + v20 - 16);
        v15[1] = *(_QWORD *)((char *)v15 + v20 - 8);
        *(_QWORD *)((char *)v15 + v20 - 16) = 0LL;
        *(_QWORD *)((char *)v15 + v20 - 8) = 0LL;
        v15 += 2;
      }
      while ( (_QWORD *)((char *)v15 + v20 - 16) != v16 );
    }
  }
  sub_180010930(a1, v12, v8, v11, v22);
  return v13 + *a1;
}
