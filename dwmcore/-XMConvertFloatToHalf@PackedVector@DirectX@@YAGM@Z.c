__int64 __fastcall DirectX::PackedVector::XMConvertFloatToHalf(DirectX::PackedVector *this, float a2)
{
  int v2; // xmm0_4
  unsigned int v3; // r9d
  unsigned int v4; // r9d
  unsigned int v6; // eax
  int v7; // r8d
  unsigned int v8; // edx

  v3 = v2 & 0x7FFFFFFF;
  if ( (v2 & 0x7FFFFFFFu) >= 0x47800000 )
  {
    if ( v3 <= 0x7F800000 )
      LOWORD(v4) = 0;
    else
      v4 = (v2 & 0x3FE000 | 0x400000u) >> 13;
    LOWORD(v4) = v4 | 0x7C00;
  }
  else if ( v3 <= 0x33000000 )
  {
    LOWORD(v4) = 0;
  }
  else if ( v3 < 0x38800000 )
  {
    v6 = v3 >> 23;
    v7 = 125 - (v3 >> 23);
    v8 = v2 & 0x7FFFFF | 0x800000;
    v4 = v8 >> (125 - (v3 >> 23) + 1);
    LOWORD(v4) = ((unsigned __int8)(v8 >> v7) & (unsigned __int8)(v4 | ((((1 << (125 - v6)) - 1) & v8) != 0)) & 1) + v4;
  }
  else
  {
    v4 = (((((v3 - 939524096) >> 13) & 1) + v3 - 939524096 + 4095) >> 13) & 0x7FFF;
  }
  return (unsigned __int16)(v4 | HIWORD(v2) & 0x8000);
}
