/*
 * XREFs of ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800A8784
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A040 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?SetSurface@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z @ 0x1800F82A0 (-SetSurface@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1800A87C4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::EnsureBitmapRealization(CGdiSpriteBitmap *this)
{
  int Bitmap; // eax
  unsigned int v3; // ecx

  if ( !*((_QWORD *)this + 55) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(this, (enum DXGI_FORMAT)*((_DWORD *)this + 32));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, Bitmap, 0xA5u, 0LL);
  }
  return *((_QWORD *)this + 55) != 0LL;
}
