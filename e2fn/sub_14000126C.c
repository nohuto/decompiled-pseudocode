__int64 __fastcall sub_14000126C(__int64 a1, __int16 *a2)
{
  __int16 v2; // bp
  _WORD *v3; // rdi
  int v4; // eax
  unsigned __int64 v7; // rsi
  int v8; // r15d
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  int v11; // eax
  int v12; // r10d
  unsigned __int16 v13; // dx
  __int16 v14; // dx
  _WORD *v15; // r9

  v2 = *a2;
  *(_QWORD *)a1 = &off_1400D41D0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 8) = 0;
  LOWORD(v4) = v2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = 0LL;
  if ( v2 )
  {
    v8 = a2[1];
    do
    {
      v9 = v7++;
      v4 = (__int16)v4 / v8;
    }
    while ( (_WORD)v4 );
    if ( v2 >= 0 )
      v7 = v9;
    sub_140001CD8(a1, v7 + 1);
    v10 = v7;
    LOWORD(v11) = -v2;
    if ( v2 > 0 )
      LOWORD(v11) = v2;
    do
    {
      v12 = (__int16)v11;
      v13 = (__int16)v11 % v8;
      if ( v13 >= 0xAu )
        v14 = v13 - a2[2] + 65;
      else
        v14 = v13 + 48;
      if ( v10 >= *(_QWORD *)(a1 + 32) )
        v15 = v3;
      else
        v15 = (_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v10);
      *v15 = v14;
      --v10;
      v11 = (__int16)v11 / v8;
    }
    while ( (unsigned __int16)(v12 / v8) );
    if ( v2 < 0 )
    {
      if ( v10 < *(_QWORD *)(a1 + 32) )
        v3 = (_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v10);
      *v3 = 45;
    }
  }
  else
  {
    sub_140001CD8(a1, 1LL);
    if ( *(_QWORD *)(a1 + 32) )
      v3 = *(_WORD **)(a1 + 16);
    *v3 = 48;
  }
  return a1;
}
