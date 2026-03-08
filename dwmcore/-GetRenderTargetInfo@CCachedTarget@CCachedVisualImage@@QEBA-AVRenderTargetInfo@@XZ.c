/*
 * XREFs of ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x180032D40
 * Callers:
 *     ?OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x180031030 (-OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180032CD8 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x180039564 (-TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z.c)
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x1800FCA50 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rax

  v3 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8));
  (**v3)(v3, a2);
  return a2;
}
