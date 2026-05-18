/*
 * XREFs of sub_180116B3C @ 0x180116B3C
 * Callers:
 *     sub_180116FB0 @ 0x180116FB0 (sub_180116FB0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     sub_1800125E4 @ 0x1800125E4 (sub_1800125E4.c)
 */

void __fastcall sub_180116B3C(__int64 *a1, __int64 *a2, char *a3, char *a4)
{
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 *v10; // rsi
  __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 *v16; // r10
  __int64 v17; // r15
  __int64 *v18; // rdx
  char *v19; // rcx
  char *v20; // r8
  __int64 *v21; // rcx
  __int64 *v22; // r8
  __int64 *v23; // rdx
  __int64 *v24; // r8
  __int64 *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 *v28; // r15
  _QWORD *v29; // rcx
  __int64 i; // rsi
  char *v31; // rcx
  char *v32; // rbx
  __int64 *v33; // rcx
  __int64 v34; // r15
  _QWORD *v35; // rcx
  signed __int64 v36; // r14
  __int64 v37; // rax
  char v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+40h] [rbp-58h]
  char *v40; // [rsp+48h] [rbp-50h]

  v40 = a4;
  v7 = (a4 - a3) >> 4;
  v8 = ((__int64)a2 - *a1) >> 4;
  if ( v7 == 1 && a2 == (__int64 *)a1[1] )
  {
    v38 = 1;
  }
  else
  {
    v38 = 0;
    if ( !v7 )
      return;
  }
  v9 = a1[2];
  v10 = (__int64 *)a1[1];
  if ( v7 <= (v9 - (__int64)v10) >> 4 )
  {
    v27 = 16 * v7;
    if ( v7 >= ((char *)v10 - (char *)a2) >> 4 )
    {
      v33 = &a2[(unsigned __int64)v27 / 8];
      if ( a2 != v10 )
      {
        do
        {
          *v33 = 0LL;
          v33[1] = 0LL;
          *v33 = v33[-2 * v7];
          v33[1] = v33[v27 / 0xFFFFFFFFFFFFFFF8uLL + 1];
          v33[-2 * v7] = 0LL;
          v33[v27 / 0xFFFFFFFFFFFFFFF8uLL + 1] = 0LL;
          v33 += 2;
        }
        while ( &v33[v27 / 0xFFFFFFFFFFFFFFF8uLL] != v10 );
      }
      a1[1] = (__int64)v33;
      v34 = (__int64)a2;
      if ( a2 != v10 )
      {
        do
        {
          unknown_libname_100(v34, 0);
          v34 += 16LL;
        }
        while ( (__int64 *)v34 != v10 );
        a4 = v40;
      }
      if ( a3 != a4 )
      {
        v35 = a2 + 1;
        v36 = a3 - (char *)a2;
        do
        {
          *(v35 - 1) = 0LL;
          *v35 = 0LL;
          v37 = *(_QWORD *)((char *)v35 + v36);
          if ( v37 )
            _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
          *(v35 - 1) = *(_QWORD *)((char *)v35 + v36 - 8);
          *v35 = *(_QWORD *)((char *)v35 + v36);
          v35 += 2;
        }
        while ( (char *)v35 + v36 - 8 != a4 );
      }
    }
    else
    {
      v28 = &v10[v27 / 0xFFFFFFFFFFFFFFF8uLL];
      v29 = (_QWORD *)a1[1];
      if ( &v10[v27 / 0xFFFFFFFFFFFFFFF8uLL] != v10 )
      {
        do
        {
          *v29 = 0LL;
          v29[1] = 0LL;
          *v29 = v29[v27 / 0xFFFFFFFFFFFFFFF8uLL];
          v29[1] = v29[v27 / 0xFFFFFFFFFFFFFFF8uLL + 1];
          v29[v27 / 0xFFFFFFFFFFFFFFF8uLL] = 0LL;
          v29[v27 / 0xFFFFFFFFFFFFFFF8uLL + 1] = 0LL;
          v29 += 2;
        }
        while ( &v29[v27 / 0xFFFFFFFFFFFFFFF8uLL] != v10 );
      }
      a1[1] = (__int64)v29;
      while ( v28 != a2 )
      {
        v28 -= 2;
        std::shared_ptr<__ExceptionPtr>::operator=(&v28[(unsigned __int64)v27 / 8], v28);
      }
      for ( i = (__int64)a2; (__int64 *)i != &a2[(unsigned __int64)v27 / 8]; i += 16LL )
        unknown_libname_100(i, 0);
      if ( a3 != v40 )
      {
        v31 = a3 + 8;
        v32 = (char *)((char *)a2 - a3);
        do
        {
          *(_QWORD *)&v31[(_QWORD)v32 - 8] = 0LL;
          *(_QWORD *)&v32[(_QWORD)v31] = 0LL;
          if ( *(_QWORD *)v31 )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v31 + 8LL));
          *(_QWORD *)&v31[(_QWORD)v32 - 8] = *((_QWORD *)v31 - 1);
          *(_QWORD *)&v32[(_QWORD)v31] = *(_QWORD *)v31;
          v31 += 16;
        }
        while ( v31 - 8 != v40 );
      }
    }
  }
  else
  {
    v11 = ((__int64)v10 - *a1) >> 4;
    if ( v7 > 0xFFFFFFFFFFFFFFFLL - v11 )
      std::vector<void *>::_Xlen();
    v12 = v11 + v7;
    v39 = v11 + v7;
    v13 = (v9 - *a1) >> 4;
    v14 = v13 >> 1;
    if ( v13 <= 0xFFFFFFFFFFFFFFFLL - (v13 >> 1) )
    {
      v15 = v14 + v13;
      if ( v14 + v13 < v12 )
        v15 = v12;
    }
    else
    {
      v15 = v11 + v7;
    }
    v16 = sub_180010B0C((__int64)a1, v15);
    v17 = 16 * (v8 + v7);
    v18 = &v16[(unsigned __int64)v17 / 8];
    if ( a3 != v40 )
    {
      v19 = a3 + 8;
      v20 = (char *)((char *)&v16[2 * v8] - a3);
      do
      {
        *(_QWORD *)&v19[(_QWORD)v20 - 8] = 0LL;
        *(_QWORD *)&v20[(_QWORD)v19] = 0LL;
        if ( *(_QWORD *)v19 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v19 + 8LL));
        *(_QWORD *)&v19[(_QWORD)v20 - 8] = *((_QWORD *)v19 - 1);
        *(_QWORD *)&v20[(_QWORD)v19] = *(_QWORD *)v19;
        v19 += 16;
      }
      while ( v19 - 8 != v40 );
    }
    v21 = (__int64 *)*a1;
    if ( v38 )
    {
      v22 = (__int64 *)a1[1];
      v23 = v16;
      while ( v21 != v22 )
      {
        *v23 = 0LL;
        v23[1] = 0LL;
        *v23 = *v21;
        v23[1] = v21[1];
        *v21 = 0LL;
        v21[1] = 0LL;
        v23 += 2;
        v21 += 2;
      }
    }
    else
    {
      v24 = v16;
      while ( v21 != a2 )
      {
        *v24 = 0LL;
        v24[1] = 0LL;
        *v24 = *v21;
        v24[1] = v21[1];
        *v21 = 0LL;
        v21[1] = 0LL;
        v24 += 2;
        v21 += 2;
      }
      v25 = (__int64 *)a1[1];
      if ( a2 != v25 )
      {
        v26 = (char *)&a2[v17 / 0xFFFFFFFFFFFFFFF8uLL] - (char *)v16;
        do
        {
          *v18 = 0LL;
          v18[1] = 0LL;
          *v18 = *(__int64 *)((char *)v18 + v26);
          v18[1] = *(__int64 *)((char *)v18 + v26 + 8);
          *(__int64 *)((char *)v18 + v26) = 0LL;
          *(__int64 *)((char *)v18 + v26 + 8) = 0LL;
          v18 += 2;
        }
        while ( (__int64 *)((char *)v18 + v26) != v25 );
      }
    }
    sub_1800125E4(a1, (__int64)v16, v39, v15);
  }
}
