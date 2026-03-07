__int64 __fastcall MulDivFD6Pairs(int *a1)
{
  int v1; // r15d
  int *v2; // rsi
  __int64 result; // rax
  BOOL v4; // ebx
  int v5; // r10d
  unsigned int v6; // r11d
  int v7; // r9d
  int v8; // ebp
  int v9; // r14d
  int v10; // r12d
  int v11; // eax
  int v12; // r14d
  unsigned int v13; // r8d
  unsigned int v14; // edx
  int v15; // ebp
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // r8d
  int v19; // edi
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // r11d

  v1 = *(unsigned __int16 *)a1;
  v2 = a1;
  if ( !*(_WORD *)a1 )
    return 0LL;
  v4 = 1;
  v5 = 0;
  if ( (*((_BYTE *)a1 + 2) & 1) != 0 )
  {
    v5 = a1[1];
    if ( v5 == 1000000 )
      v5 = 0;
  }
  v6 = 0;
  v7 = 0;
  do
  {
    v2 += 2;
    --v1;
    v8 = *v2;
    v9 = v2[1];
    if ( *v2 > 0 )
    {
      v10 = 0;
    }
    else
    {
      v8 = -v8;
      if ( !v8 )
        continue;
      v10 = 1;
    }
    if ( v9 <= 0 )
    {
      v9 = -v9;
      if ( !v9 )
        continue;
      v10 ^= 1u;
    }
    v11 = (unsigned __int16)v9;
    v12 = v9 >> 16;
    v13 = v11 * (unsigned __int16)v8;
    v14 = (unsigned __int16)v8 * v12;
    v15 = v8 >> 16;
    v16 = v11 * v15;
    v17 = (unsigned __int16)(v11 * v15) + HIWORD(v13) + (unsigned __int16)v14;
    v18 = (v17 << 16) | (unsigned __int16)v13;
    v19 = HIWORD(v14) + v15 * v12 + HIWORD(v17) + HIWORD(v16);
    if ( v10 )
    {
      v18 = -v18;
      v19 = ~v19;
      if ( !v18 )
        ++v19;
    }
    v6 += v18;
    if ( v6 < v18 )
      ++v7;
    v7 += v19;
  }
  while ( v1 );
  if ( v7 >= 0 )
  {
    v4 = 0;
  }
  else
  {
    v6 = -v6;
    v7 = ~v7;
    if ( !v6 )
      ++v7;
  }
  if ( v5 )
  {
    if ( v5 < 0 )
    {
      v5 = -v5;
      v4 = !v4;
    }
    v20 = U64DivU32RoundUp((unsigned int)v7, v6, (unsigned int)v5);
  }
  else
  {
    v21 = v7 + 1;
    v22 = v6 + 500000;
    if ( v22 >= 0x7A120 )
      v21 = v7;
    v20 = ((((v22 >> 20) | (v21 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v22 >> 4) | ((((v22 >> 20) | (v21 << 12))
                                                                                            + 3036
                                                                                            * (((v22 >> 20) | (v21 << 12))
                                                                                             / 0xF424)) << 16))
                                                          / 0xF424);
  }
  result = -v20;
  if ( !v4 )
    return v20;
  return result;
}
