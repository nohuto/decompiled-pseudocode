/*
 * XREFs of ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180251220
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5D20 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x18025165C (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 */

void __fastcall CCompSwapChain::NotifyInvalidResource(CCompSwapChain *this, const struct IDeviceResource *a2)
{
  __int64 v3; // rcx
  const struct IDeviceResource *v4; // rdi
  __int64 v5; // rcx

  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  CCompSwapChain::ResetBackBuffer((CCompSwapChain *)((char *)this - 72));
  v3 = *((_QWORD *)this + 4);
  v4 = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v5 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( this != (CCompSwapChain *)72 )
    v4 = (CCompSwapChain *)((char *)this + *(int *)(*((_QWORD *)this - 6) + 8LL) - 48);
  CDeviceResource::NotifyInvalid((CCompSwapChain *)((char *)this - 56), v4);
}
