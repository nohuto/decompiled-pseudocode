/*
 * XREFs of ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180019998
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180013830 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18002E744 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801D3B28 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x1800199FC (-GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180033864 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x180033894 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawListBitmap::SetTransparent(CDrawListBitmap *this, CD3DDevice **a2)
{
  unsigned int v3; // ebx
  struct IBitmapRealization *StockTransparentBitmap; // rax
  unsigned int v5; // ecx
  CDrawListBitmap *v6; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  StockTransparentBitmap = CD3DDevice::GetStockTransparentBitmap(a2[5]);
  if ( StockTransparentBitmap )
  {
    v6 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v8, StockTransparentBitmap);
    CDrawListBitmap::operator=(this, v6);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v9);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v8);
  }
  else
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304307, 0x34u, 0LL);
  }
  return v3;
}
