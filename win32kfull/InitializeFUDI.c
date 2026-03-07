void *__fastcall InitializeFUDI(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r15
  const void **v4; // rsi
  _BYTE **v5; // r12
  __int64 v6; // r14
  __int64 v7; // rbp
  _BYTE *v8; // rbx
  __int64 v9; // r14
  _BYTE *v10; // rbx

  if ( (*(_DWORD *)a1 & 0x400) != 0 )
    v2 = *(_DWORD *)(a1 + 148);
  else
    v2 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 532) = v2;
  v3 = a1 + 8;
  v4 = (const void **)(a1 + 496);
  v5 = (_BYTE **)(a1 + 496);
  v6 = *(unsigned int *)(a1 + 56);
  v7 = 2LL;
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
  {
    do
    {
      v8 = *v5;
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 24))(v3, *v5++ + 1);
      *v8 = v8[2];
      v8[v6 + 1] = v8[v6 - 1];
      --v7;
    }
    while ( v7 );
  }
  else
  {
    v9 = 3LL * *(unsigned int *)(a1 + 56);
    do
    {
      v10 = *v5;
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 24))(v3, *v5++ + 3);
      *(_WORD *)v10 = *((_WORD *)v10 + 3);
      v10[2] = v10[8];
      *(_WORD *)&v10[v9 + 3] = *(_WORD *)&v10[v9 - 3];
      v10[v9 + 5] = v10[v9 - 1];
      --v7;
    }
    while ( v7 );
  }
  memmove(*(void **)(a1 + 520), *v4, *(unsigned int *)(a1 + 528));
  return memmove(*(void **)(a1 + 488), *(const void **)(a1 + 504), *(unsigned int *)(a1 + 528));
}
