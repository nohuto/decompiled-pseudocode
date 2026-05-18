/*
 * XREFs of sub_1801075B4 @ 0x1801075B4
 * Callers:
 *     sub_180107934 @ 0x180107934 (sub_180107934.c)
 *     sub_18010B52C @ 0x18010B52C (sub_18010B52C.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     sub_18010B470 @ 0x18010B470 (sub_18010B470.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801075B4(_QWORD *a1, __int64 a2, size_t *a3, __int64 a4)
{
  size_t *v5; // r15
  size_t v8; // r9
  __int64 v9; // rdx
  size_t i; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  const void *v15; // rdx
  const void *v16; // rcx
  bool v17; // zf
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v31; // [rsp+28h] [rbp-50h] BYREF
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF

  v5 = a3;
  v8 = a3[2];
  if ( a3[3] >= 0x10 )
    a3 = (size_t *)*a3;
  v9 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < v8; ++i )
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v9);
  v11 = v9 & a1[6];
  v12 = (_QWORD *)a1[1];
  v13 = 2 * v11;
  v14 = a1[3];
  if ( v12 != *(_QWORD **)(v14 + 16 * v11) )
  {
    v12 = **(_QWORD ***)(v14 + 16 * (v9 & a1[6]) + 8);
    while ( v12 != *(_QWORD **)(v14 + 16 * v11) )
    {
      v12 = (_QWORD *)v12[1];
      v15 = v12 + 2;
      if ( v12[5] >= 0x10uLL )
        v15 = (const void *)v12[2];
      v16 = v5;
      if ( v5[3] >= 0x10 )
        v16 = (const void *)*v5;
      v14 = a1[3];
      if ( v8 == v12[4] )
      {
        v17 = memcmp(v16, v15, v8) == 0;
        v8 = v5[2];
        v14 = a1[3];
        if ( v17 )
        {
          **(_QWORD **)(a4 + 8) = *(_QWORD *)a4;
          *(_QWORD *)(*(_QWORD *)a4 + 8LL) = *(_QWORD *)(a4 + 8);
          --a1[2];
          sub_180065AF4((__int64 *)(a4 + 16), 0);
          j_j__o_free(a4);
          *(_QWORD *)a2 = v12;
          *(_BYTE *)(a2 + 8) = 0;
          result = a2;
          goto LABEL_30;
        }
      }
    }
  }
  v19 = *(_QWORD *)a4;
  if ( v12 != *(_QWORD **)a4 )
  {
    **(_QWORD **)(a4 + 8) = v19;
    **(_QWORD **)(v19 + 8) = v12;
    *(_QWORD *)v12[1] = a4;
    v20 = v12[1];
    v12[1] = *(_QWORD *)(v19 + 8);
    *(_QWORD *)(v19 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v20;
  }
  v21 = a1[3];
  v22 = *(_QWORD **)(v21 + 16 * v11);
  v23 = 2 * v11;
  if ( v22 == (_QWORD *)a1[1] )
  {
    *(_QWORD *)(v21 + 8 * v23) = a4;
    v24 = a1[3];
    *(_QWORD *)(v24 + 8 * v23 + 8) = a4;
  }
  else if ( v22 == v12 )
  {
    *(_QWORD *)(v21 + 8 * v23) = a4;
  }
  else
  {
    v25 = *(__int64 **)(v21 + 8 * v23 + 8);
    v26 = *v25;
    *(_QWORD *)(v21 + 8 * v23 + 8) = *v25;
    if ( v26 != a4 )
    {
      v27 = a1[3];
      v28 = *(_QWORD *)(v27 + 8 * v13 + 8);
      *(_QWORD *)(v27 + 8 * v13 + 8) = *(_QWORD *)(v28 + 8);
    }
  }
  try
  {
    sub_18010B470(a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v29 = sub_180089BB4((__int64)a1, &v31, a4);
    sub_1801078A4(a1, &v32, *v29);
    throw;
  }
LABEL_30:
  try
  {
  }
  catch ( ... )
  {
    sub_18010B4EC(a1, a4);
    throw;
  }
  return result;
}
