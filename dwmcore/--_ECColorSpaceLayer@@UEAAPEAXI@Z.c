/*
 * XREFs of ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x1801CFED0
 * Callers:
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801D3304 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z @ 0x1801D33F0 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCColorTransformResource@@@Z @ 0x1801D3500 (-PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCColorTransformResource@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CColorSpaceLayer *__fastcall CColorSpaceLayer::`vector deleting destructor'(CColorSpaceLayer *this, char a2)
{
  *(_QWORD *)this = &CExternalLayer::`vftable';
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
