__int64 __fastcall sub_140077130(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // si
  _WORD *v3; // rdi
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  unsigned int v8; // r15d
  unsigned __int64 v9; // rbp
  unsigned int v10; // edx
  __int16 v11; // dx
  _WORD *v12; // r8

  v2 = *a2;
  *(_QWORD *)a1 = &off_1400D41D0;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_WORD *)(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  LOWORD(v5) = v2;
  *(_WORD *)(a1 + 8) = 0;
  v6 = 0LL;
  if ( v2 )
  {
    v8 = a2[1];
    do
    {
      v5 = (unsigned __int16)v5 / v8;
      v9 = v6++;
    }
    while ( (_WORD)v5 );
    sub_140001CD8((_QWORD *)a1, v6);
    do
    {
      v10 = v2 % v8;
      if ( (unsigned __int16)v10 >= 0xAu )
        v11 = v10 - a2[2] + 65;
      else
        v11 = v10 + 48;
      if ( v9 >= *(_QWORD *)(a1 + 32) )
        v12 = v3;
      else
        v12 = (_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v9);
      *v12 = v11;
      --v9;
      v2 /= v8;
    }
    while ( v2 );
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
