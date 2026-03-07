__int64 __fastcall CFormatConverter::HrCheckDstPixelFormat(CFormatConverter *this, enum DXGI_FORMAT a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v2 = -2003292288;
  v3 = a2 - 2;
  if ( !v3 )
    return 0;
  v4 = v3 - 8;
  if ( !v4 )
    return 0;
  v5 = v4 - 1;
  if ( !v5 )
    return 0;
  v6 = v5 - 13;
  if ( !v6 )
    return 0;
  v7 = v6 - 4;
  if ( !v7 || (unsigned int)(v7 - 59) <= 1 )
    return 0;
  return v2;
}
