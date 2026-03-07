float __fastcall Convert_sRGB_UINT16_To_scRGB_float(unsigned __int16 a1)
{
  unsigned int v1; // ecx
  __int64 v2; // rdx
  double v3; // xmm2_8

  v1 = (65281 * (unsigned int)a1) >> 8;
  v2 = HIWORD(v1);
  v3 = GammaLUT_sRGB_to_scRGB[v2];
  if ( (_WORD)v1 )
    v3 = v3 + (GammaLUT_sRGB_to_scRGB[(unsigned int)(v2 + 1)] - v3) * (double)(unsigned __int16)v1 * 0.0000152587890625;
  return v3 * 0.00392156862745098;
}
