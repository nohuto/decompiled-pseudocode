/*
 * XREFs of ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z @ 0x1800EFCCC
 * Callers:
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800EFB74 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 * Callees:
 *     ??0?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBitmap@@@Z @ 0x180034828 (--0-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIRenderTargetBit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::CCachedTarget::CCachedTarget(
        CCachedVisualImage::CCachedTarget *this,
        struct CCachedVisualImage *a2,
        struct IRenderTargetBitmap *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)this = a2;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    (__int64)a3);
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 8) = 2;
  *((_WORD *)this + 28) = 256;
  v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v6 + 40LL))(
    v6,
    ((unsigned __int64)a2 + 88) & -(__int64)(a2 != 0LL));
  return this;
}
