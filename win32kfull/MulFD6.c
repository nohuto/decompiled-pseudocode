/*
 * XREFs of MulFD6 @ 0x1C014B146
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00195AC (HT_CreateDeviceHalftoneInfo.c)
 *     RaisePower @ 0x1C014B26A (RaisePower.c)
 *     ComputeInverseMatrix3x3 @ 0x1C02556D8 (ComputeInverseMatrix3x3.c)
 *     AdjustSrcDevGamma @ 0x1C0256104 (AdjustSrcDevGamma.c)
 *     CacheRGBToXYZ @ 0x1C0256490 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C0256580 (ComputeBGRMappingTable.c)
 *     ComputeColorSpaceXForm @ 0x1C0257078 (ComputeColorSpaceXForm.c)
 *     ComputeRGBLUTAA @ 0x1C0257424 (ComputeRGBLUTAA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MulFD6(int a1, int a2)
{
  signed int v2; // r11d
  int v3; // ebx
  int v4; // edi
  __int64 result; // rax
  int v6; // eax
  int v7; // r10d
  int v8; // r11d
  unsigned int v9; // r10d
  unsigned int v10; // edx
  int v11; // ebx
  unsigned int v12; // r9d
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // r11d
  int v16; // r9d

  v2 = a2;
  v3 = a1;
  if ( a1 > 0 )
  {
    v4 = 0;
  }
  else
  {
    v3 = -a1;
    if ( !a1 )
      return 0LL;
    v4 = 1;
  }
  if ( a2 <= 0 )
  {
    v2 = -a2;
    if ( a2 )
    {
      v4 ^= 1u;
      goto LABEL_8;
    }
    return 0LL;
  }
LABEL_8:
  if ( v3 != 1000000 )
  {
    if ( v2 == 1000000 )
    {
      v2 = v3;
    }
    else
    {
      v6 = (unsigned __int16)v2;
      v7 = (unsigned __int16)v2;
      v8 = v2 >> 16;
      v9 = (unsigned __int16)v3 * v7;
      v10 = (unsigned __int16)v3 * v8;
      v11 = v3 >> 16;
      v12 = v6 * v11;
      v13 = (unsigned __int16)(v6 * v11) + HIWORD(v9) + (unsigned __int16)v10;
      v14 = HIWORD(v13) + HIWORD(v12) + HIWORD(v10) + v11 * v8;
      v15 = ((v13 << 16) | (unsigned __int16)v9) + 500000;
      v16 = v14 + 1;
      if ( v15 >= 0x7A120 )
        v16 = v14;
      v2 = ((((v15 >> 20) | (v16 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v15 >> 4) | ((((v15 >> 20) | (v16 << 12))
                                                                                             + 3036
                                                                                             * (((v15 >> 20) | (v16 << 12))
                                                                                              / 0xF424)) << 16))
                                                           / 0xF424);
    }
  }
  result = (unsigned int)-v2;
  if ( !v4 )
    return (unsigned int)v2;
  return result;
}
