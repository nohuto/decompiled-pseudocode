float __fastcall ConvertHalfToFloat(unsigned __int16 a1)
{
  unsigned int v1; // edx
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  float result; // xmm0_4

  v1 = a1;
  v2 = a1 & 0x7C00;
  v3 = a1 & 0x3FF;
  if ( v2 == 31744 )
  {
    v4 = 143;
  }
  else if ( v2 )
  {
    v4 = (v1 >> 10) & 0x1F;
  }
  else if ( v3 )
  {
    v4 = 1;
    do
    {
      --v4;
      LOWORD(v3) = 2 * v3;
    }
    while ( (v3 & 0x400) == 0 );
    v3 &= 0x3FFu;
  }
  else
  {
    v4 = -112;
  }
  LODWORD(result) = (v3 << 13) | ((v4 + 112) << 23) | (v1 << 16) & 0x80000000;
  return result;
}
