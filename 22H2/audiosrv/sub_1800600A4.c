/*
 * XREFs of sub_1800600A4 @ 0x1800600A4
 * Callers:
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 * Callees:
 *     sub_180060188 @ 0x180060188 (sub_180060188.c)
 *     sub_1801347D0 @ 0x1801347D0 (sub_1801347D0.c)
 *     sub_180138028 @ 0x180138028 (sub_180138028.c)
 */

__int64 __fastcall sub_1800600A4(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v5; // r15
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  char v21; // al
  __int64 v22; // rdx
  __int64 **v23; // r11
  __int64 **v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  v5 = a3;
  v8 = a3[2];
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  v9 = 0xCBF29CE484222325uLL;
  v10 = 0LL;
  v11 = 2 * v8;
  if ( v11 )
  {
    do
      v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v10++) ^ (unsigned __int64)v9);
    while ( v10 < v11 );
  }
  v12 = v9 & a1[6];
  v13 = a1[1];
  v14 = 2 * v12;
  v15 = a1[3];
  v16 = *(_QWORD *)(v15 + 16 * v12);
  v26 = v16;
  if ( v13 != v16 )
  {
    v13 = **(_QWORD **)(v15 + 16 * v12 + 8);
    while ( v13 != v16 )
    {
      v13 = *(_QWORD *)(v13 + 8);
      v21 = sub_1801347D0(v16, v5, v13 + 16, v11);
      v16 = v26;
      if ( !v21 )
      {
        sub_180138028(a1 + 1, &v26, a4);
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v17 = *a4;
  if ( v13 != *a4 )
  {
    *(_QWORD *)a4[1] = v17;
    **(_QWORD **)(v17 + 8) = v13;
    **(_QWORD **)(v13 + 8) = a4;
    v22 = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(v17 + 8);
    *(_QWORD *)(v17 + 8) = a4[1];
    a4[1] = v22;
  }
  v18 = a1[3];
  v19 = *(_QWORD *)(v18 + 8 * v14);
  if ( v19 == a1[1] )
  {
    *(_QWORD *)(v18 + 16 * v12) = a4;
    *(_QWORD *)(a1[3] + 8 * v14 + 8) = a4;
  }
  else
  {
    v23 = (__int64 **)(v18 + 16 * v12);
    if ( v19 == v13 )
    {
      *v23 = a4;
    }
    else
    {
      v24 = (__int64 **)v23[1];
      v25 = *v24;
      v23[1] = *v24;
      if ( v25 != a4 )
      {
        v19 = a1[3];
        *(_QWORD *)(v19 + 8 * v14 + 8) = *(_QWORD *)(*(_QWORD *)(v19 + 8 * v14 + 8) + 8LL);
      }
    }
  }
  sub_180060188(a1, v19, a3, v11);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
