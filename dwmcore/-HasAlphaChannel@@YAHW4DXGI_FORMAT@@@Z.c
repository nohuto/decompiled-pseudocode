/*
 * XREFs of ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A8DE4
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x1800A86F8 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1800A8AD8 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x1800A8D04 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801E7348 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180298DA8 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1802BC140 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasAlphaChannel(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 <= 65 )
  {
    if ( a1 != 65 )
    {
      if ( !a1 )
        return 0LL;
      v4 = a1 - 2;
      if ( v4 )
      {
        v5 = v4 - 8;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 13;
            if ( v7 )
            {
              if ( v7 != 4 )
                return 0LL;
            }
          }
        }
      }
    }
    return 1LL;
  }
  v1 = a1 - 87;
  if ( !v1 )
    return 1LL;
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( v3 == 3 )
      return 1LL;
  }
  return 0LL;
}
