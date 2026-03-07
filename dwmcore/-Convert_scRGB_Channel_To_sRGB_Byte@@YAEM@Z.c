unsigned __int8 __fastcall Convert_scRGB_Channel_To_sRGB_Byte(float a1)
{
  if ( a1 <= 0.0 )
    return 0;
  if ( a1 < 1.0 )
    return GammaLUT_scRGB_to_sRGB[floorf_0((float)(a1 * 3354.0) + 0.5)];
  return -1;
}
