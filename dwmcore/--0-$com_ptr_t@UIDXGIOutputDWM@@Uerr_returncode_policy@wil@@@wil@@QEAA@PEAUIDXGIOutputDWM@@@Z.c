/*
 * XREFs of ??0?$com_ptr_t@UIDXGIOutputDWM@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIOutputDWM@@@Z @ 0x1801F5FD0
 * Callers:
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1801F600C (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 *     ??0CDummyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGIOutputDWM@@IU_UNSIGNED_RATIO@@PEAUHINSTANCE__@@@Z @ 0x18029584C (--0CDummyRemotingSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGIOutputDWM@@IU_UNSIGNED_RATIO@@PEAUHINS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IDXGIOutputDWM,wil::err_returncode_policy>::com_ptr_t<IDXGIOutputDWM,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
