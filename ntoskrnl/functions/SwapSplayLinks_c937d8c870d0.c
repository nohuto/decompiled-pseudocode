_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD **v8; // r11
  _QWORD *v9; // r9
  __int64 v10; // rcx
  _QWORD **v11; // rbx
  _QWORD *v12; // r10
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *result; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax

  v2 = a1;
  v3 = (_QWORD *)*a1;
  if ( v3 == v2 || (v4 = (_QWORD *)*a2, v5 = v3, (_QWORD *)*a2 == v2) )
  {
    v5 = (_QWORD *)*a2;
    v26 = v2;
    v2 = a2;
    v4 = v3;
    a2 = v26;
  }
  if ( v5 == a2 )
  {
    if ( v4 == a2 )
    {
      v22 = v2;
    }
    else
    {
      v21 = 1LL;
      if ( (_QWORD *)v4[1] != a2 )
        v21 = 2LL;
      v4[v21] = v2;
      v22 = (_QWORD *)*a2;
    }
    *v2 = v22;
    v9 = v2 + 1;
    v23 = v2[1];
    v8 = (_QWORD **)(a2 + 1);
    v11 = (_QWORD **)(a2 + 2);
    v2[1] = a2[1];
    v12 = v2 + 2;
    v24 = a2[2];
    a2[1] = v23;
    v25 = v2[2];
    v2[2] = v24;
    a2[2] = v25;
    if ( (_QWORD *)v2[1] == v2 )
      *v9 = a2;
    else
      *v12 = a2;
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
      v16 = (_QWORD *)v4[1];
      v17 = 1LL;
      v18 = v16;
      if ( v6 != v2 )
        v17 = 2LL;
      if ( v16 != a2 )
        v18 = (_QWORD *)v4[2];
      v19 = v5[v17];
      if ( v16 != a2 )
        v7 = 2LL;
      v5[v17] = v18;
      v4[v7] = v19;
      v20 = *v2;
      *v2 = *a2;
      *a2 = v20;
    }
    v8 = (_QWORD **)(a2 + 1);
    v9 = v2 + 1;
    v10 = v2[1];
    v11 = (_QWORD **)(a2 + 2);
    v2[1] = a2[1];
    v12 = v2 + 2;
    v13 = a2[2];
    a2[1] = v10;
    v14 = v2[2];
    v2[2] = v13;
    a2[2] = v14;
  }
  if ( *v9 )
    *(_QWORD *)*v9 = v2;
  if ( *v12 )
    *(_QWORD *)*v12 = v2;
  if ( *v8 )
    **v8 = a2;
  result = *v11;
  if ( *v11 )
    *result = a2;
  return result;
}
