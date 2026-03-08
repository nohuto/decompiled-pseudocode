/*
 * XREFs of ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18029B200
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x18029B6B4 (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 */

void __fastcall CCompSwapChain::NotifyInvalidResource(CCompSwapChain *this, const struct IDeviceResource *a2)
{
  __int64 v3; // rcx
  const struct IDeviceResource *v4; // rdi
  __int64 v5; // rcx

  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 3,
    0LL);
  CCompSwapChain::ResetBackBuffer((CCompSwapChain *)((char *)this - 64));
  v3 = *((_QWORD *)this + 5);
  v4 = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v5 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( this != (CCompSwapChain *)64 )
    v4 = (CCompSwapChain *)((char *)this + *(int *)(*((_QWORD *)this - 7) + 12LL) - 56);
  CDeviceResource::NotifyInvalid((CCompSwapChain *)((char *)this - 40), v4);
}
