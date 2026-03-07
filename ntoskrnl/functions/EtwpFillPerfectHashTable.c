__int64 __fastcall EtwpFillPerfectHashTable(
        _WORD *a1,
        unsigned __int16 a2,
        char a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  int v7; // r15d
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // r11
  __int64 v13; // r9
  __int16 v14; // di
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // dx
  unsigned int v17; // ebp
  unsigned __int16 v18; // cx
  unsigned __int16 i; // dx
  unsigned __int16 v20; // dx
  __int64 v22; // rax
  unsigned __int16 v23; // r8
  __int64 v24; // r9
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // [rsp+38h] [rbp+10h]

  v7 = a4;
  v9 = a5;
  v10 = 128LL;
  *a6 = 0;
  v11 = a4 + 1;
  v26 = a4 + 1;
  v12 = a4 + 1;
  do
  {
    *(_WORD *)(v9 + 2) = -1;
    *(_BYTE *)v9 = -1;
    v9 += 4LL;
    --v10;
  }
  while ( v10 );
  if ( a2 )
  {
    v13 = a2;
    do
    {
      v14 = *a1;
      v15 = 0;
      v16 = v7 & __ROR2__(*a1, a3);
      while ( *(_WORD *)(a5 + 4LL * v16 + 2) != 0xFFFF )
      {
        v22 = v16;
        if ( *(_WORD *)(a5 + 4LL * v16 + 2) == v14 )
          break;
        v16 = *(unsigned __int8 *)(a5 + 4LL * v16);
        ++v15;
        if ( v16 == 255 )
        {
          v16 = v12++;
          *(_BYTE *)(a5 + 4 * v22) = v16;
        }
        if ( v15 > *a6 )
          *a6 = v15;
      }
      ++a1;
      *(_WORD *)(a5 + 4LL * v16 + 2) = v14;
      --v13;
    }
    while ( v13 );
    v11 = v26;
  }
  v17 = v7 + 1;
  v18 = 0;
  for ( i = v12 - 1; i > v17 && v18 < (unsigned __int16)v7; --i )
  {
    if ( *(_BYTE *)(a5 + 4LL * i) == 0xFF )
    {
      while ( *(_WORD *)(a5 + 4LL * v18 + 2) != 0xFFFF )
      {
        if ( ++v18 >= (unsigned __int16)v7 )
          goto LABEL_10;
      }
      v23 = 0;
      *(_WORD *)(a5 + 4LL * v18 + 2) = *(_WORD *)(a5 + 4LL * i + 2);
      if ( v12 )
      {
        while ( *(unsigned __int8 *)(a5 + 4LL * v23) != i )
        {
          if ( ++v23 >= v12 )
            goto LABEL_29;
        }
        *(_BYTE *)(a5 + 4LL * v23) = v18;
      }
LABEL_29:
      *(_WORD *)(a5 + 4LL * i + 2) = -1;
      if ( i == v12 - 1 )
        --v12;
    }
    ++v18;
  }
LABEL_10:
  v20 = v12 - 1;
  if ( (unsigned __int16)(v12 - 1) > v17 )
  {
    while ( v11 < v20 )
    {
      if ( *(_WORD *)(a5 + 4LL * v11 + 2) == 0xFFFF )
      {
        v24 = v20;
        v25 = 0;
        *(_WORD *)(a5 + 4LL * v11 + 2) = *(_WORD *)(a5 + 4LL * v20 + 2);
        if ( v12 )
        {
          while ( *(unsigned __int8 *)(a5 + 4LL * v25) != v20 )
          {
            if ( ++v25 >= v12 )
              goto LABEL_41;
          }
          *(_BYTE *)(a5 + 4LL * v25) = v11;
        }
LABEL_41:
        --v20;
        *(_BYTE *)(a5 + 4LL * v11) = *(_BYTE *)(a5 + 4 * v24);
        --v12;
        ++v11;
        if ( v20 <= v17 )
          return v12;
      }
      else
      {
        ++v11;
      }
    }
  }
  return v12;
}
