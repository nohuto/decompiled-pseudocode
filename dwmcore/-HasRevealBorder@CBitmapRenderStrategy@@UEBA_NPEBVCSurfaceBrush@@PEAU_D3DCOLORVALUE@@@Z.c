/*
 * XREFs of ?HasRevealBorder@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z @ 0x1800401F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSwapChain@CBitmapRenderStrategy@@SAJPEBVCSurfaceBrush@@PEAPEAVISwapChainRealization@@@Z @ 0x1800771D4 (-GetSwapChain@CBitmapRenderStrategy@@SAJPEBVCSurfaceBrush@@PEAPEAVISwapChainRealization@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBitmapRenderStrategy::HasRevealBorder(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct _D3DCOLORVALUE *a3)
{
  struct ISwapChainRealization *v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  if ( *((_DWORD *)a2 + 24) == 1 )
    return 0;
  v5 = 0LL;
  if ( (int)CBitmapRenderStrategy::GetSwapChain(a2, &v5) < 0
    || !(*(unsigned int (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v5 + 16LL))(v5)
    || ((*(void (__fastcall **)(struct ISwapChainRealization *, __int128 *))(*(_QWORD *)v5 + 24LL))(v5, &v6),
        COERCE_FLOAT(HIDWORD(v6) & _xmm) < 0.0000011920929) )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v5);
    return 0;
  }
  if ( a3 )
    *(_OWORD *)&a3->r = v6;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v5);
  return 1;
}
