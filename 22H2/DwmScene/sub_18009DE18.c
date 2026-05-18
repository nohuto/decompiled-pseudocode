/*
 * XREFs of sub_18009DE18 @ 0x18009DE18
 * Callers:
 *     sub_1800A0D94 @ 0x1800A0D94 (sub_1800A0D94.c)
 *     sub_1800A3AB0 @ 0x1800A3AB0 (sub_1800A3AB0.c)
 *     sub_1800CF2C8 @ 0x1800CF2C8 (sub_1800CF2C8.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_18009CD60 @ 0x18009CD60 (sub_18009CD60.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18009DE18(__int64 *a1, __int64 a2, char a3, const void **a4, char a5)
{
  __int64 *v7; // rax
  __int64 *v8; // r13
  __int64 v9; // rbx
  char v10; // r14
  const void **v11; // rax
  const void *v12; // rdx
  const void *v13; // rcx
  size_t v14; // r12
  size_t v15; // r8
  int v16; // r14d
  const void *v17; // rdx
  const void *v18; // rcx
  size_t v19; // r12
  size_t v20; // r14
  size_t v21; // r8
  int v22; // eax
  __int64 *v23; // rbx
  __int64 result; // rax
  const void *v25; // rdx
  const void *v26; // rcx
  const void *v27; // r13
  size_t v28; // r12
  size_t v29; // r8
  int v30; // eax
  char v31; // [rsp+30h] [rbp-68h]
  __int64 *v32; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v33; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v34; // [rsp+48h] [rbp-50h] BYREF

  v31 = a3;
  v34 = a1;
  v7 = (__int64 *)*a1;
  v32 = v7;
  v8 = v7;
  v33 = v7;
  v9 = v7[1];
  v10 = 1;
  if ( !*(_BYTE *)(v9 + 25) )
  {
    do
    {
      v8 = (__int64 *)v9;
      v33 = (__int64 *)v9;
      v11 = (const void **)(v9 + 32);
      if ( a3 )
      {
        v12 = a4;
        if ( (unsigned __int64)a4[3] >= 0x10 )
          v12 = *a4;
        v13 = (const void *)(v9 + 32);
        if ( *(_QWORD *)(v9 + 56) >= 0x10uLL )
          v13 = *v11;
        v14 = *(_QWORD *)(v9 + 48);
        v15 = v14;
        if ( (unsigned __int64)a4[2] < v14 )
          v15 = (size_t)a4[2];
        v16 = memcmp(v13, v12, v15);
        if ( !v16 )
        {
          if ( v14 >= (unsigned __int64)a4[2] )
            v16 = v14 > (unsigned __int64)a4[2];
          else
            v16 = -1;
        }
        v10 = v16 >= 0;
      }
      else
      {
        v17 = (const void *)(v9 + 32);
        if ( *(_QWORD *)(v9 + 56) >= 0x10uLL )
          v17 = *v11;
        v18 = a4;
        if ( (unsigned __int64)a4[3] >= 0x10 )
          v18 = *a4;
        v19 = *(_QWORD *)(v9 + 48);
        v20 = (size_t)a4[2];
        v21 = v20;
        if ( v19 < v20 )
          v21 = *(_QWORD *)(v9 + 48);
        v22 = memcmp(v18, v17, v21);
        if ( !v22 )
        {
          if ( v20 >= v19 )
            v22 = v20 > v19;
          else
            v22 = -1;
        }
        v10 = v22 < 0;
      }
      if ( v10 )
        v9 = *(_QWORD *)v9;
      else
        v9 = *(_QWORD *)(v9 + 16);
      a3 = v31;
    }
    while ( !*(_BYTE *)(v9 + 25) );
    v7 = v32;
    a1 = v34;
  }
  try
  {
    v23 = v8;
    v32 = v8;
    if ( v10 )
    {
      if ( v8 == (__int64 *)*v7 )
      {
        *(_QWORD *)a2 = *sub_18009CD60(a1, &v34, 1, v8, (__int64)a4);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      sub_180022400(&v32);
      v23 = v32;
    }
    v25 = a4;
    if ( (unsigned __int64)a4[3] >= 0x10 )
      v25 = *a4;
    v26 = v23 + 4;
    if ( (unsigned __int64)v23[7] >= 0x10 )
      v26 = (const void *)v23[4];
    v27 = a4[2];
    v28 = v23[6];
    v29 = v28;
    if ( (unsigned __int64)v27 < v28 )
      v29 = (size_t)a4[2];
    v30 = memcmp(v26, v25, v29);
    if ( !v30 )
    {
      if ( v28 >= (unsigned __int64)v27 )
        v30 = v28 > (unsigned __int64)v27;
      else
        v30 = -1;
    }
    if ( v30 >= 0 )
    {
      *(_QWORD *)a2 = v23;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_18009CD60(v34, &v33, v10, v33, (__int64)a4);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
