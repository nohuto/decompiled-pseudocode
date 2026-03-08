/*
 * XREFs of ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180214310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003A7C0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetD2DBitmap(
        struct D2D_SIZE_U *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // ebx
  char *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct IRenderTargetBitmap *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  *a3 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v16);
  v8 = CCachedVisualImage::EnsureRenderTargetBitmap(this - 9, a2, &v16);
  v11 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x196u, 0LL);
  }
  else
  {
    v12 = (char *)v16 + *(int *)(*((_QWORD *)v16 + 1) + 16LL) + 8;
    LOBYTE(v10) = a4;
    v13 = (*(__int64 (__fastcall **)(char *, const struct RenderTargetInfo *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v12 + 56LL))(
            v12,
            a2,
            a3,
            v10);
    v11 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x19Au, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
  return v11;
}
