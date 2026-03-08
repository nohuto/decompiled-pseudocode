/*
 * XREFs of ?EnsureValidVidPnTargetId@CLegacySwapChain@@MEBAXXZ @ 0x1801040A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18028BAFC (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z.c)
 */

void __fastcall CLegacySwapChain::EnsureValidVidPnTargetId(struct _LUID *this)
{
  CDisplayManager *v2; // rcx
  struct IDXGIOutputDWM *v3[2]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v4[12]; // [rsp+30h] [rbp-D8h] BYREF
  LONG v5; // [rsp+3Ch] [rbp-CCh]

  if ( this[15].HighPart == -1 )
  {
    v3[0] = 0LL;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)v3);
    if ( CDisplayManager::GetDXGIOutput(v2, this[11], this[14].LowPart, v3) >= 0
      && (*(int (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v3[0] + 32LL))(v3[0], v4) >= 0 )
    {
      this[15].HighPart = v5;
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v3);
  }
}
