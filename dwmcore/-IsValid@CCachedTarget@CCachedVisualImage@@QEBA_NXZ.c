/*
 * XREFs of ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1800395D0
 * Callers:
 *     ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x180039564 (-TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18003A624 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C8B4 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1800CE364 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::CCachedTarget::IsValid(CCachedVisualImage::CCachedTarget *this)
{
  int (__fastcall ***v1)(_QWORD); // rcx

  v1 = (int (__fastcall ***)(_QWORD))(*((_QWORD *)this + 1)
                                    + 8LL
                                    + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL));
  return (**v1)(v1) >= 0;
}
