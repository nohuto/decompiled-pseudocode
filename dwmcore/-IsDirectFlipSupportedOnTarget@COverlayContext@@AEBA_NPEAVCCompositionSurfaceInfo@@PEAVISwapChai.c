/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18012B702
 * Callers:
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@II_N@Z @ 0x1801DA6AC (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckDirectFlipSupport@COverlayContext@@AEBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18012B5FA (-CheckDirectFlipSupport@COverlayContext@@AEBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV-$TMil.c)
 */

char __fastcall COverlayContext::IsDirectFlipSupportedOnTarget(
        COverlayContext *this,
        struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v8; // rcx
  __int64 v9; // r14
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rbx
  char *v13; // rcx
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  int v17; // [rsp+38h] [rbp-60h] BYREF
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *((_QWORD *)this + 1396);
  v4 = 0;
  if ( v3
    && *(struct CCompositionSurfaceInfo **)(v3 + 16) == a2
    && *(_QWORD *)(*((_QWORD *)this + 1396) + 24LL) == (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 64LL))(a2) )
  {
    return 1;
  }
  v8 = *(_QWORD *)this;
  v16 = 0LL;
  v17 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 176LL))(v8);
  if ( (*(int (__fastcall **)(__int64, struct CCompositionSurfaceInfo *, __int64 *, int *))(*(_QWORD *)v9 + 184LL))(
         v9,
         a2,
         &v16,
         &v17) >= 0 )
  {
    v10 = *(_OWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 160LL))(*(_QWORD *)this) + 20);
    v11 = *(_QWORD *)a3;
    v18 = v10;
    v12 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(v11 + 48))(a3);
    v13 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 1) + 12LL) + 8;
    v14 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v13)(v13, v19);
    v4 = COverlayContext::CheckDirectFlipSupport(this, v16, *(_DWORD *)(v14 + 8), v12, (__int64)&v18);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v16);
  return v4;
}
