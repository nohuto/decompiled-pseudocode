/*
 * XREFs of sub_1800BA5C8 @ 0x1800BA5C8
 * Callers:
 *     sub_1800464D0 @ 0x1800464D0 (sub_1800464D0.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800BA78C @ 0x1800BA78C (sub_1800BA78C.c)
 *     sub_1800BA84C @ 0x1800BA84C (sub_1800BA84C.c)
 */

__int64 __fastcall sub_1800BA5C8(_WORD *a1, unsigned __int64 a2, _QWORD *a3, unsigned __int64 *a4, int a5, _WORD *a6)
{
  int v9; // ebx
  _WORD *v10; // r13
  unsigned __int64 v11; // r14
  _WORD *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  _WORD *v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v9 = -2147024809;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v9 = -2147024809;
  }
  if ( v9 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v16 = a1;
    v10 = a1;
    v17[0] = a2;
    v11 = a2;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = &unk_18015C744;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v9 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v9 = -2147024809;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v17[0] = 0LL;
      v13 = sub_1800BA84C(a1, a2, v17);
      v14 = v17[0];
      v9 = v13;
      v11 = a2 - v17[0];
      v17[0] = a2 - v17[0];
      v10 = &a1[v14];
      v16 = v10;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)a5, 2 * v11 - 2);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_22:
        if ( a3 )
          *a3 = v10;
        if ( a4 )
          *a4 = v11;
        return (unsigned int)v9;
      }
      v9 = a1 != 0LL ? -2147024774 : -2147024809;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      sub_1800BA78C(a1, 2 * a2, a3, &v16, v17, a5);
      v10 = v16;
      v11 = v17[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147024774 )
      goto LABEL_22;
  }
  return (unsigned int)v9;
}
