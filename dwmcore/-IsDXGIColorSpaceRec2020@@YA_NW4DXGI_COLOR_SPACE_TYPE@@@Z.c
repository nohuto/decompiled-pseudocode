/*
 * XREFs of ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180082794
 * Callers:
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800820C0 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180082410 (-UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180091250 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1801DAB88 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B120C (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDXGIColorSpaceRec2020(int a1)
{
  char v1; // dl
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  bool v6; // zf
  int v7; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  v1 = 0;
  if ( a1 > 15 )
  {
    v9 = a1 - 16;
    if ( !v9 )
      return 1;
    v10 = v9 - 1;
    if ( !v10 )
      return 1;
    v11 = v10 - 4;
    if ( !v11 )
      return 1;
    v7 = v11 - 2;
    v6 = v7 == 0;
  }
  else
  {
    if ( a1 == 15 )
      return 1;
    v2 = a1 - 3;
    if ( !v2 )
      return 1;
    v3 = v2 - 7;
    if ( !v3 )
      return 1;
    v4 = v3 - 1;
    if ( !v4 )
      return 1;
    v5 = v4 - 1;
    if ( !v5 )
      return 1;
    v7 = v5 - 1;
    v6 = v7 == 0;
  }
  if ( v6 || v7 == 1 )
    return 1;
  return v1;
}
