/*
 * XREFs of SwapSplayLinks @ 0x14021D614
 * Callers:
 *     RtlDeleteNoSplay @ 0x14021D540 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x1403646B0 (RtlDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *result; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rsi
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax

  v2 = a1;
  v3 = (_QWORD *)*a1;
  if ( v3 == v2 || (v4 = (_QWORD *)*a2, v5 = v3, (_QWORD *)*a2 == v2) )
  {
    v5 = (_QWORD *)*a2;
    v25 = v2;
    v2 = a2;
    v4 = v3;
    a2 = v25;
  }
  if ( v5 == a2 )
  {
    if ( v4 == a2 )
    {
      v15 = v2;
    }
    else
    {
      v24 = 1LL;
      if ( (_QWORD *)v4[1] != a2 )
        v24 = 2LL;
      v4[v24] = v2;
      v15 = (_QWORD *)*a2;
    }
    *v2 = v15;
    v16 = v2[1];
    v2[1] = a2[1];
    v17 = a2[2];
    a2[1] = v16;
    v18 = v2[2];
    v2[2] = v17;
    a2[2] = v18;
    v11 = (_QWORD *)v2[1];
    if ( v11 == v2 )
    {
      v2[1] = a2;
      v11 = a2;
    }
    else
    {
      v2[2] = a2;
    }
  }
  else
  {
    v6 = (_QWORD *)v5[1];
    v7 = 1LL;
    if ( v4 == a2 )
    {
      if ( v6 != v2 )
        v7 = 2LL;
      v5[v7] = a2;
      *a2 = *v2;
      *v2 = v2;
    }
    else
    {
      v19 = (_QWORD *)v4[1];
      v20 = 1LL;
      v21 = v19;
      if ( v6 != v2 )
        v20 = 2LL;
      if ( v19 != a2 )
        v21 = (_QWORD *)v4[2];
      v22 = v5[v20];
      if ( v19 != a2 )
        v7 = 2LL;
      v5[v20] = v21;
      v4[v7] = v22;
      v23 = *v2;
      *v2 = *a2;
      *a2 = v23;
    }
    v8 = v2[1];
    v2[1] = a2[1];
    v9 = a2[2];
    a2[1] = v8;
    v10 = v2[2];
    v2[2] = v9;
    a2[2] = v10;
    v11 = (_QWORD *)v2[1];
  }
  if ( v11 )
    *v11 = v2;
  v12 = (_QWORD *)v2[2];
  if ( v12 )
    *v12 = v2;
  v13 = (_QWORD *)a2[1];
  if ( v13 )
    *v13 = a2;
  result = (_QWORD *)a2[2];
  if ( result )
    *result = a2;
  return result;
}
