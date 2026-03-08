/*
 * XREFs of ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x18003A690
 * Callers:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18003A624 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AC10 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C8B4 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::CCachedTarget::MarkDirty(CCachedVisualImage::CCachedTarget *this)
{
  if ( !*((_BYTE *)this + 57) )
  {
    (*(void (__fastcall **)(_QWORD, CCachedVisualImage::CCachedTarget *))(**(_QWORD **)this + 248LL))(
      *(_QWORD *)this,
      this);
    *((_BYTE *)this + 57) = 1;
  }
}
