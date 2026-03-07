__int64 __fastcall sub_140050BEC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _WORD *v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int16 v13; // dx
  _WORD *v14; // r10

  v2 = *(_QWORD *)a2;
  *(_QWORD *)a1 = &off_1400D41D0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 8) = 0;
  v4 = v2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = 0LL;
  if ( v2 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    do
    {
      v9 = v7;
      v4 /= v8;
      ++v7;
    }
    while ( v4 );
    if ( v2 >= 0 )
      v7 = v9;
    sub_140001CD8((_QWORD *)a1, v7 + 1);
    v10 = v7;
    v11 = -v2;
    if ( v2 > 0 )
      v11 = v2;
    do
    {
      v12 = v11 % v8;
      if ( (unsigned __int16)(v11 % v8) >= 0xAu )
        v13 = v12 - *(_WORD *)(a2 + 16) + 65;
      else
        v13 = v12 + 48;
      if ( v10 >= *(_QWORD *)(a1 + 32) )
        v14 = v3;
      else
        v14 = (_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v10);
      *v14 = v13;
      --v10;
      v11 /= v8;
    }
    while ( v11 );
    if ( v2 < 0 )
    {
      if ( v10 < *(_QWORD *)(a1 + 32) )
        v3 = (_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v10);
      *v3 = 45;
    }
  }
  else
  {
    sub_140001CD8((_QWORD *)a1, 1uLL);
    if ( *(_QWORD *)(a1 + 32) )
      v3 = *(_WORD **)(a1 + 16);
    *v3 = 48;
  }
  return a1;
}
