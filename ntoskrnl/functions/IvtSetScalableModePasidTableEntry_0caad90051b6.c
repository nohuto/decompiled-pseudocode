__int64 __fastcall IvtSetScalableModePasidTableEntry(__int64 a1, __int64 a2, unsigned int a3, signed __int64 *a4)
{
  signed __int64 v4; // rbx
  volatile signed __int64 *v5; // r10
  __int128 v6; // rax
  signed __int64 v7; // rcx
  __int128 v8; // rt0
  unsigned __int8 v9; // tt
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  __int128 v12; // rax
  signed __int64 v13; // rbx
  signed __int64 v14; // rcx
  __int128 v15; // rt0
  unsigned __int8 v16; // tt

  v4 = *a4;
  v5 = (volatile signed __int64 *)(*(_QWORD *)(a2 + 8LL * ((a3 >> 6) & 0x3FFF) + 56)
                                 + ((unsigned __int64)(a3 & 0x3F) << 6));
  if ( (*a4 & 1) == 0 )
  {
    v6 = *(_OWORD *)v5;
    v7 = a4[1];
    do
    {
      v8 = v6;
      v9 = _InterlockedCompareExchange128(v5, v7, v4, (signed __int64 *)&v8);
      v6 = v8;
    }
    while ( !v9 );
  }
  v10 = a4 + 7;
  v11 = 6LL;
  *((_QWORD *)&v12 + 1) = v5 + 7;
  do
  {
    *(_QWORD *)&v12 = *v10--;
    **((_QWORD **)&v12 + 1) = v12;
    *((_QWORD *)&v12 + 1) -= 8LL;
    --v11;
  }
  while ( v11 );
  v13 = *a4;
  if ( (*a4 & 1) != 0 )
  {
    v12 = *(_OWORD *)v5;
    v14 = a4[1];
    do
    {
      v15 = v12;
      v16 = _InterlockedCompareExchange128(v5, v14, v13, (signed __int64 *)&v15);
      v12 = v15;
    }
    while ( !v16 );
  }
  return v12;
}
