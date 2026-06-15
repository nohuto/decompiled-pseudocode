/*
 * XREFs of sub_18006729C @ 0x18006729C
 * Callers:
 *     sub_180068150 @ 0x180068150 (sub_180068150.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall sub_18006729C(__int64 **a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  signed __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rcx
  __int64 *v13; // rsi
  unsigned __int64 v14; // r14
  char *v15; // r13
  __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // r8
  __int64 *v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 *v26; // r14
  __int64 v27; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (char *)a2 - (char *)*a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 8 * v11;
  v27 = v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = sub_180008EAC(v12);
  v14 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = (char *)v13 + v14;
  v16 = *a3;
  *(__int64 *)((char *)v13 + v14) = *a3;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = a1[1];
  v18 = *a1;
  v19 = v13;
  if ( v4 == v17 )
  {
    while ( v18 != v17 )
    {
      v22 = *v18;
      *v18 = 0LL;
      *v19++ = v22;
      ++v18;
    }
  }
  else
  {
    if ( v18 != v4 )
    {
      do
      {
        v23 = *v18;
        *v18 = 0LL;
        *v19++ = v23;
        ++v18;
      }
      while ( v18 != v4 );
      v17 = a1[1];
    }
    if ( v4 != v17 )
    {
      v24 = v14 - (_QWORD)v4;
      do
      {
        v25 = *v4;
        *v4 = 0LL;
        *(__int64 *)((char *)v13 + v24 + (_QWORD)v4++ + 8) = v25;
      }
      while ( v4 != v17 );
    }
  }
  v20 = *a1;
  if ( *a1 )
  {
    v26 = a1[1];
    if ( v20 != v26 )
    {
      do
        sub_18000F708(v20++);
      while ( v20 != v26 );
      v20 = *a1;
    }
    sub_1800472E0((__int64)v20, ((char *)a1[2] - (char *)v20) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = &v13[v8];
  a1[2] = &v13[v27];
  return v15;
}
