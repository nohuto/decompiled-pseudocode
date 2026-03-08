/*
 * XREFs of BmlIsSupportedSourceMode @ 0x1C03B8FC8
 * Callers:
 *     BmlGetRecommendedContentSizeForPath @ 0x1C03B8D90 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C000471C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1C01710D8 (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 */

char __fastcall BmlIsSupportedSourceMode(DMMVIDPNSOURCEMODE *a1, char a2, int a3, int a4)
{
  char v4; // bl
  int v7; // r10d
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax

  v4 = 0;
  if ( !a1 )
    return 0;
  v7 = *((_DWORD *)a1 + 18);
  if ( a4 == 2 )
  {
    if ( (unsigned int)(v7 - 3) > 1 )
      return 0;
  }
  else if ( a4 == 1 )
  {
    if ( v7 != 1 )
      return 0;
  }
  else if ( ((v7 - 1) & 0xFFFFFFFC) != 0 || v7 == 2 )
  {
    return 0;
  }
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(a1);
  if ( !a2 || GraphicsInfo->PixelFormat == D3DDDIFMT_A8R8G8B8 || GraphicsInfo->PixelFormat == D3DDDIFMT_X8R8G8B8 )
    return 1;
  switch ( GraphicsInfo->PixelFormat )
  {
    case D3DDDIFMT_A2B10G10R10:
      return BmlPixelFormatMatchHdrPixelFormat(GraphicsInfo->PixelFormat, a3, 0);
    case D3DDDIFMT_A8B8G8R8:
      return 1;
    case D3DDDIFMT_A16B16G16R16F:
      return BmlPixelFormatMatchHdrPixelFormat(GraphicsInfo->PixelFormat, a3, 0);
  }
  return v4;
}
