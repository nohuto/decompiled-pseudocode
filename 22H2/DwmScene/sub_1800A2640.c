/*
 * XREFs of sub_1800A2640 @ 0x1800A2640
 * Callers:
 *     sub_1800A2C50 @ 0x1800A2C50 (sub_1800A2C50.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A2640(_QWORD *a1, _QWORD *a2, char a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r10
  _QWORD *v15; // rcx
  _QWORD *v16; // r11
  __int64 *v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax

  if ( a1[1] >= 0x555555555555554uLL )
    std::_Xlength_error("map/set<T> too long");
  v9 = *a1;
  v10 = operator new(0x30uLL);
  v11 = v10;
  v10[4] = 0LL;
  v10[5] = 0LL;
  v10[4] = *a5;
  v10[5] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  *v10 = v9;
  v10[1] = v9;
  v10[2] = v9;
  *((_WORD *)v10 + 12) = 0;
  ++a1[1];
  v10[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
    *(_QWORD *)*a1 = v10;
    v12 = *a1;
LABEL_8:
    *(_QWORD *)(v12 + 16) = v11;
    goto LABEL_9;
  }
  if ( !a3 )
  {
    a4[2] = v10;
    v12 = *a1;
    if ( a4 != *(_QWORD **)(*a1 + 16LL) )
      goto LABEL_9;
    goto LABEL_8;
  }
  *a4 = v10;
  if ( a4 == *(_QWORD **)*a1 )
    *(_QWORD *)*a1 = v10;
LABEL_9:
  v13 = v11;
  while ( !*(_BYTE *)(v13[1] + 24LL) )
  {
    v14 = v13 + 1;
    v15 = (_QWORD *)v13[1];
    v16 = v15 + 1;
    v17 = (__int64 *)v15[1];
    v18 = (_QWORD *)*v17;
    if ( v15 == (_QWORD *)*v17 )
    {
      v18 = (_QWORD *)v17[2];
      if ( *((_BYTE *)v18 + 24) )
      {
        v19 = (_QWORD *)v15[2];
        if ( v13 == v19 )
        {
          v13 = (_QWORD *)v13[1];
          v15[2] = *v19;
          if ( !*(_BYTE *)(*v19 + 25LL) )
            *(_QWORD *)(*v19 + 8LL) = v15;
          v19[1] = *v16;
          if ( v15 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v19;
          }
          else
          {
            v20 = (_QWORD *)*v16;
            if ( v15 == *(_QWORD **)*v16 )
              *v20 = v19;
            else
              v20[2] = v19;
          }
          *v19 = v15;
          *v16 = v19;
          v14 = v15 + 1;
        }
        else
        {
          v19 = (_QWORD *)v13[1];
        }
        *((_BYTE *)v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*v14 + 8LL) + 24LL) = 0;
        v21 = *(_QWORD **)(*v14 + 8LL);
        v22 = (_QWORD *)*v21;
        *v21 = *(_QWORD *)(*v21 + 16LL);
        v23 = v22[2];
        if ( !*(_BYTE *)(v23 + 25) )
          *(_QWORD *)(v23 + 8) = v21;
        v22[1] = v21[1];
        if ( v21 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v22;
        }
        else
        {
          v24 = (_QWORD *)v21[1];
          if ( v21 == (_QWORD *)v24[2] )
            v24[2] = v22;
          else
            *v24 = v22;
        }
        v22[2] = v21;
LABEL_49:
        v21[1] = v22;
        continue;
      }
    }
    else if ( *((_BYTE *)v18 + 24) )
    {
      v25 = (_QWORD *)*v15;
      if ( v13 == (_QWORD *)*v15 )
      {
        v13 = (_QWORD *)v13[1];
        v15 = (_QWORD *)*v15;
        *v13 = v25[2];
        v26 = v25[2];
        if ( !*(_BYTE *)(v26 + 25) )
          *(_QWORD *)(v26 + 8) = v13;
        v15[1] = *v16;
        if ( v13 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v15;
        }
        else
        {
          v27 = (_QWORD *)*v16;
          if ( v13 == *(_QWORD **)(*v16 + 16LL) )
            v27[2] = v15;
          else
            *v27 = v15;
        }
        v15[2] = v13;
        *v16 = v15;
        v14 = v16;
      }
      *((_BYTE *)v15 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*v14 + 8LL) + 24LL) = 0;
      v21 = *(_QWORD **)(*v14 + 8LL);
      v22 = (_QWORD *)v21[2];
      v21[2] = *v22;
      if ( !*(_BYTE *)(*v22 + 25LL) )
        *(_QWORD *)(*v22 + 8LL) = v21;
      v22[1] = v21[1];
      if ( v21 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v22;
      }
      else
      {
        v28 = (_QWORD *)v21[1];
        if ( v21 == (_QWORD *)*v28 )
          *v28 = v22;
        else
          v28[2] = v22;
      }
      *v22 = v21;
      goto LABEL_49;
    }
    *((_BYTE *)v15 + 24) = 1;
    *((_BYTE *)v18 + 24) = 1;
    *(_BYTE *)(*(_QWORD *)(*v14 + 8LL) + 24LL) = 0;
    v13 = *(_QWORD **)(*v14 + 8LL);
  }
  *(_BYTE *)(*(_QWORD *)(*a1 + 8LL) + 24LL) = 1;
  *a2 = v11;
  return a2;
}
