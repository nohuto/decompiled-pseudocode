/*
 * XREFs of sub_180100F48 @ 0x180100F48
 * Callers:
 *     sub_1801020AC @ 0x1801020AC (sub_1801020AC.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 *     sub_1800317CC @ 0x1800317CC (sub_1800317CC.c)
 */

unsigned __int64 __fastcall sub_180100F48(__int64 *a1, char *a2, _DWORD *a3, __int64 *a4)
{
  char *v6; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  _QWORD *v14; // r10
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  char *v17; // rcx
  char *v18; // rax
  _OWORD *v19; // rdx
  signed __int64 v20; // rax

  v6 = a2;
  v8 = (unsigned __int64)&a2[-*a1];
  v9 = (a1[1] - *a1) >> 4;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v10 = v9 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 )
      v13 = v10;
  }
  else
  {
    v13 = v10;
  }
  v14 = sub_180010B0C((__int64)a1, v13);
  v15 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = *a4;
  *(_DWORD *)((char *)v14 + v15) = *a3;
  *(_QWORD *)((char *)v14 + v15 + 8) = v16;
  v17 = (char *)a1[1];
  v18 = (char *)*a1;
  v19 = v14;
  if ( v6 == v17 )
  {
    while ( v18 != v17 )
    {
      *v19++ = *(_OWORD *)v18;
      v18 += 16;
    }
  }
  else
  {
    if ( v18 != v6 )
    {
      do
      {
        *v19++ = *(_OWORD *)v18;
        v18 += 16;
      }
      while ( v18 != v6 );
      v17 = (char *)a1[1];
    }
    if ( v6 != v17 )
    {
      v20 = (char *)v14 + v15 + 16 - v6;
      do
      {
        *(_OWORD *)&v6[v20] = *(_OWORD *)v6;
        v6 += 16;
      }
      while ( v6 != v17 );
    }
  }
  sub_1800317CC(a1, (__int64)v14, v10, v13);
  return v15 + *a1;
}
