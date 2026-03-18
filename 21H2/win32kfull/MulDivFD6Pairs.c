/*
 * XREFs of MulDivFD6Pairs @ 0x1C00972DC
 * Callers:
 *     ComputeColorSpaceXForm @ 0x1C0095D6C (ComputeColorSpaceXForm.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C0096118 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeBGRMappingTable @ 0x1C025E794 (ComputeBGRMappingTable.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00953DC (U64DivU32RoundUp.c)
 */

__int64 __fastcall MulDivFD6Pairs(int *a1)
{
  int v1; // r15d
  int *v2; // rdi
  BOOL v3; // ebx
  signed int v4; // r11d
  unsigned int v5; // r10d
  signed int v6; // r9d
  int v7; // ebp
  signed int v8; // r13d
  int v9; // r14d
  int v10; // r12d
  int v11; // eax
  int v12; // r14d
  unsigned int v13; // r8d
  unsigned int v14; // edx
  int v15; // ebp
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // r8d
  int v19; // esi
  int v20; // r9d
  unsigned int v21; // edx
  __int64 result; // rax
  signed int v23; // ecx
  unsigned int v24; // r10d

  v1 = *(unsigned __int16 *)a1;
  v2 = a1;
  if ( !*(_WORD *)a1 )
    return 0LL;
  v3 = 1;
  v4 = 0;
  if ( (*((_BYTE *)a1 + 2) & 1) != 0 )
  {
    v4 = a1[1];
    if ( v4 == 1000000 )
      v4 = 0;
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v2 += 2;
    --v1;
    v7 = *v2;
    v8 = v6;
    v9 = v2[1];
    if ( *v2 <= 0 )
    {
      v7 = -v7;
      v10 = 1;
      if ( !v7 )
        continue;
    }
    else
    {
      v10 = 0;
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
    v13 = v11 * (unsigned __int16)v7;
    v14 = (unsigned __int16)v7 * v12;
    v15 = v7 >> 16;
    v16 = v11 * v15;
    v17 = (unsigned __int16)(v11 * v15) + HIWORD(v13) + (unsigned __int16)v14;
    v18 = (v17 << 16) | (unsigned __int16)v13;
    v19 = HIWORD(v14) + v15 * v12 + HIWORD(v17) + HIWORD(v16);
    if ( v10 )
    {
      v19 = ~v19;
      v18 = -v18;
      if ( !v18 )
        ++v19;
    }
    v20 = v6 + 1;
    v5 += v18;
    if ( v5 >= v18 )
      v20 = v8;
    v6 = v19 + v20;
  }
  while ( v1 );
  if ( v6 < 0 )
  {
    v6 = ~v6;
    v5 = -v5;
    if ( !v5 )
      ++v6;
  }
  else
  {
    v3 = 0;
  }
  if ( v4 )
  {
    if ( v4 < 0 )
    {
      v4 = -v4;
      v3 = !v3;
    }
    v21 = U64DivU32RoundUp(v6, v5, v4);
  }
  else
  {
    v23 = v6 + 1;
    v24 = v5 + 500000;
    if ( v24 >= 0x7A120 )
      v23 = v6;
    v21 = ((((v24 >> 20) | (v23 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v24 >> 4) | ((((v24 >> 20) | (v23 << 12))
                                                                                            + 3036
                                                                                            * (((v24 >> 20) | (v23 << 12))
                                                                                             / 0xF424)) << 16))
                                                          / 0xF424);
  }
  result = -v21;
  if ( !v3 )
    return v21;
  return result;
}
