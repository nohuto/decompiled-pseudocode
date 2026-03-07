__int64 __fastcall ColorSpaceTransformConvert(const struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  size_t v2; // r9
  __int64 Type; // r8
  int v4; // r8d
  int v5; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  v2 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  Type = (unsigned int)a2->Type;
  if ( a1->Type == (_DWORD)Type )
  {
    v4 = Type - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v7 = v5 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
              v2 = 98352LL;
          }
          else
          {
            v2 = 49204LL;
          }
        }
        else
        {
          v2 = 12324LL;
        }
      }
      else
      {
        v2 = 1536LL;
      }
    }
    memmove(a2->Data.pRgb256x3x16, a1->Data.pRgb256x3x16, v2);
    return 0LL;
  }
  if ( a1->Type == D3DDDI_GAMMARAMP_DEFAULT )
    return ColorSpaceTransformInitIdentityTransform(a2, a2, Type, 0LL);
  v9 = Type - 3;
  if ( !v9 )
    return ConvertToDxgi1(a1, a2);
  v10 = v9 - 1;
  if ( !v10 )
    return ConvertToMatrix_3x4(a1, a2);
  if ( v10 != 1 )
    return 0LL;
  return ConvertToMatrix_V2(a1, a2);
}
