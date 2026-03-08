/*
 * XREFs of ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1800A8AD8
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1800A87C4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?SetPixelFormat@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJW4DXGI_FORMAT@@@Z @ 0x1800A8E0C (-SetPixelFormat@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJW4DXGI_FORMAT.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A8DE4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::UpdatePixelFormat(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  int v2; // eax
  CGdiSpriteBitmap *v3; // r8

  if ( *((_BYTE *)this + 146) && *((_BYTE *)this + 400) && a2 == DXGI_FORMAT_B8G8R8X8_UNORM )
    a2 = DXGI_FORMAT_B8G8R8A8_UNORM;
  *((_DWORD *)this + 32) = a2;
  v2 = HasAlphaChannel(a2);
  *((_DWORD *)v3 + 33) = v2 != 0 ? 1 : 3;
  CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetPixelFormat(v3);
}
