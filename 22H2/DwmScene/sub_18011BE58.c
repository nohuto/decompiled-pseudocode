/*
 * XREFs of sub_18011BE58 @ 0x18011BE58
 * Callers:
 *     sub_18011A520 @ 0x18011A520 (sub_18011A520.c)
 *     sub_18011C9F8 @ 0x18011C9F8 (sub_18011C9F8.c)
 *     sub_18011CCD8 @ 0x18011CCD8 (sub_18011CCD8.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18011BE58(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rdi
  _QWORD *v6; // r10
  unsigned __int64 v7; // rcx
  __int64 i; // r9
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r15
  _QWORD *j; // rax
  _QWORD *v14; // rcx
  char *v15; // rcx
  unsigned __int64 v16; // rbp
  char *v17; // r10
  __int64 v18; // r9
  signed __int64 v19; // r10
  unsigned __int16 v20; // dx
  int v21; // ecx
  _QWORD *v22; // rcx
  signed __int64 v23; // r8
  unsigned __int16 v24; // dx
  int v25; // ecx

  v4 = a3[2];
  v6 = a3;
  if ( a3[3] >= 8uLL )
    v6 = (_QWORD *)*a3;
  v7 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v7 < 2 * v4; i = 0x100000001B3LL * (v9 ^ i) )
    v9 = *((unsigned __int8 *)v6 + v7++);
  v10 = a1[3];
  v11 = a1[1];
  v12 = 2 * (i & a1[6]);
  for ( j = *(_QWORD **)(v10 + 16 * (i & a1[6])); ; j = (_QWORD *)*j )
  {
    if ( *(_QWORD *)(v10 + 8 * v12) == v11 )
      v14 = (_QWORD *)a1[1];
    else
      v14 = **(_QWORD ***)(v10 + 8 * v12 + 8);
    if ( j == v14 )
    {
      *a2 = v11;
      return a2;
    }
    v15 = (char *)a3;
    if ( a3[3] >= 8uLL )
      v15 = (char *)*a3;
    v16 = j[5];
    v17 = (char *)(j + 2);
    if ( v16 >= 8 )
      v17 = (char *)j[2];
    v18 = j[4];
    if ( v18 == v4 )
    {
      if ( v18 )
      {
        v19 = v17 - v15;
        while ( 1 )
        {
          v20 = *(_WORD *)&v15[v19];
          if ( v20 != *(_WORD *)v15 )
            break;
          v15 += 2;
          if ( !--v18 )
            goto LABEL_19;
        }
        v21 = v20 < *(_WORD *)v15 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v21 = 0;
      }
      if ( !v21 )
        break;
    }
  }
  v22 = j + 2;
  if ( v16 >= 8 )
    v22 = (_QWORD *)*v22;
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  if ( v4 )
  {
    v23 = (char *)a3 - (char *)v22;
    while ( 1 )
    {
      v24 = *(_WORD *)((char *)v22 + v23);
      if ( v24 != *(_WORD *)v22 )
        break;
      v22 = (_QWORD *)((char *)v22 + 2);
      if ( !--v4 )
        goto LABEL_31;
    }
    v25 = v24 < *(_WORD *)v22 ? -1 : 1;
  }
  else
  {
LABEL_31:
    v25 = 0;
  }
  if ( v25 )
    j = (_QWORD *)a1[1];
  *a2 = j;
  return a2;
}
