float __fastcall scRGBTosRGB(float a1)
{
  float result; // xmm0_4

  if ( a1 <= 0.0 )
    return 0.0;
  if ( a1 <= 0.0031308001 )
    return a1 * 12.92;
  result = *(float *)&FLOAT_1_0;
  if ( a1 < 1.0 )
    return (float)(powf_0(a1, 0.41666666) * 1.0549999) - 0.055;
  return result;
}
