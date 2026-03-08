/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180298CB0
 * Callers:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180298DA8 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1802BC140 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, enum DXGI_COLOR_SPACE_TYPE *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  v2 = 0;
  if ( a1 > 65 )
  {
    v10 = a1 - 87;
    if ( !v10 )
      goto LABEL_20;
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_20;
    v12 = v11 - 3;
    if ( !v12 )
      goto LABEL_20;
    v13 = v12 - 12;
    if ( !v13 )
      goto LABEL_20;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_20;
    v15 = v14 - 2;
    if ( !v15 )
      goto LABEL_20;
    v9 = v15 == 1;
LABEL_18:
    if ( !v9 )
      return (unsigned int)-2003292344;
LABEL_20:
    *a2 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
    return v2;
  }
  if ( a1 == 65 )
    goto LABEL_20;
  v3 = a1 - 2;
  if ( v3 )
  {
    v4 = v3 - 8;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
        goto LABEL_20;
      v6 = v5 - 13;
      if ( !v6 )
        goto LABEL_20;
      v7 = v6 - 4;
      if ( !v7 )
        goto LABEL_20;
      v8 = v7 - 21;
      if ( !v8 )
        goto LABEL_20;
      v9 = v8 == 12;
      goto LABEL_18;
    }
  }
  *a2 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  return v2;
}
