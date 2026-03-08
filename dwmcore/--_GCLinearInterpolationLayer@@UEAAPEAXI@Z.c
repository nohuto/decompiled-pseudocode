/*
 * XREFs of ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1801CFF70
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D36A0 (-PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CLinearInterpolationLayer *__fastcall CLinearInterpolationLayer::`scalar deleting destructor'(
        CLinearInterpolationLayer *this,
        char a2)
{
  *(_QWORD *)this = &CExternalLayer::`vftable';
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
