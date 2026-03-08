/*
 * XREFs of DivFD6 @ 0x1C014AF0C
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00195AC (HT_CreateDeviceHalftoneInfo.c)
 *     RaisePower @ 0x1C014B26A (RaisePower.c)
 *     HT_ComputeRGBGammaTable @ 0x1C0252900 (HT_ComputeRGBGammaTable.c)
 *     HT_Get8BPPFormatPalette @ 0x1C0252D80 (HT_Get8BPPFormatPalette.c)
 *     HT_Get8BPPMaskPalette @ 0x1C0252E90 (HT_Get8BPPMaskPalette.c)
 *     CreateStandardMonoPattern @ 0x1C0254780 (CreateStandardMonoPattern.c)
 *     ComputeInverseMatrix3x3 @ 0x1C02556D8 (ComputeInverseMatrix3x3.c)
 *     AdjustSrcDevGamma @ 0x1C0256104 (AdjustSrcDevGamma.c)
 *     CacheRGBToXYZ @ 0x1C0256490 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C0256580 (ComputeBGRMappingTable.c)
 *     ComputeColorSpaceXForm @ 0x1C0257078 (ComputeColorSpaceXForm.c)
 *     ComputeRGBLUTAA @ 0x1C0257424 (ComputeRGBLUTAA.c)
 *     ScaleRGB @ 0x1C0258074 (ScaleRGB.c)
 *     pDCIAdjClr @ 0x1C02583A8 (pDCIAdjClr.c)
 *     BuildExpandAAInfo @ 0x1C025C820 (BuildExpandAAInfo.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C0255DA0 (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  unsigned int v2; // r10d
  int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // eax
  bool v8; // cf
  unsigned int v9; // ecx

  v2 = a2;
  if ( a2 > 0 )
  {
    v3 = 0;
  }
  else
  {
    v2 = -a2;
    v3 = 1;
    if ( !a2 )
      return (a1 >> 31) + 0x80000000;
  }
  if ( v2 == 1000000 )
  {
    result = (unsigned int)-a1;
    if ( !v3 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 <= 0 )
    {
      a1 = -a1;
      if ( !a1 )
        return 0LL;
      v3 ^= 1u;
    }
    if ( a1 == v2 )
    {
      return v3 != 0 ? -1000000 : 1000000;
    }
    else
    {
      v5 = 62500 * (unsigned __int16)a1;
      v6 = v5 - 198967296 * HIWORD(a1);
      v7 = (unsigned int)(62500 * HIWORD(a1)) >> 16;
      v8 = v5 >= 198967296 * HIWORD(a1);
      v9 = v7 + 1;
      if ( !v8 )
        v9 = v7;
      result = U64DivU32RoundUp((v6 >> 28) | (16 * v9), 16 * v6, v2);
      if ( v3 )
        return (unsigned int)-(int)result;
    }
  }
  return result;
}
