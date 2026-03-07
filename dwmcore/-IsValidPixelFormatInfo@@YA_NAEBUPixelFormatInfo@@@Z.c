char __fastcall IsValidPixelFormatInfo(enum DXGI_FORMAT *a1)
{
  enum DXGI_FORMAT *v1; // rdx
  int v2; // eax
  _DWORD *v3; // rdx
  char v4; // cl
  int v6; // eax

  if ( !(unsigned int)IsValidPixelFormat(*a1) )
    return 0;
  v2 = HasAlphaChannel(*v1);
  v4 = 1;
  if ( v2 )
  {
    if ( *v3 == 24 && v3[1] == 1 )
      return 0;
  }
  else if ( (unsigned int)(v3[1] - 1) <= 1 )
  {
    return 0;
  }
  v6 = v3[2];
  if ( v6 < 0 || v6 == 4 || v6 > 17 )
    return 0;
  return v4;
}
