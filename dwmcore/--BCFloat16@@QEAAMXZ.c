float __fastcall CFloat16::operator float(unsigned __int16 *a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // edx
  float v6; // [rsp+8h] [rbp+8h]

  v1 = *a1;
  if ( (v1 & 0xFFFF7C00) != 0 )
  {
    LODWORD(v6) = (((v1 & 0x7C00) << 13) + 939524096) | ((v1 & 0x3FF | (8 * (v1 & 0xFFFF8000))) << 13);
  }
  else
  {
    if ( (v1 & 0x3FF) != 0 )
    {
      v2 = -14;
      v3 = v1 & 0x3FF;
      do
      {
        --v2;
        v3 *= 2;
      }
      while ( (v3 & 0x400) == 0 );
      v4 = ((v2 + 127) << 23) | (((v3 | (8 * (v1 & 0xFFFF8080))) & 0xFFFFFBFF) << 13);
    }
    else
    {
      v4 = (v1 & 0xFFFF8000) << 16;
    }
    return *(float *)&v4;
  }
  return v6;
}
