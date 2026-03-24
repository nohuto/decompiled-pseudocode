/*
 * XREFs of ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18023A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030E04 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5D20 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@0AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180238DFC (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 */

void __fastcall CDDisplaySwapChain::NotifyInvalidResource(unsigned __int64 this, const struct IDeviceResource *a2)
{
  __int64 v3; // rcx
  const struct IDeviceResource *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 24));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 40));
  v3 = *(_QWORD *)(this + 48);
  v4 = 0LL;
  *(_QWORD *)(this + 48) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(this + 56),
    0LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 64));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 72));
  v5 = *(_QWORD *)(this + 80);
  *(_QWORD *)(this + 80) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 88));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 96));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 104));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 112));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 120));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 128));
  *(_DWORD *)(this + 136) = 0;
  std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
    *(DDisplayPrimaryBufferResources **)(this + 144),
    *(DDisplayPrimaryBufferResources **)(this + 152));
  *(_QWORD *)(this + 152) = *(_QWORD *)(this + 144);
  v6 = *(_QWORD *)(this + 168);
  if ( v6 )
  {
    v7 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 48LL))(
      v7,
      this & ((unsigned __int128)-(__int128)(this - 56) >> 64));
    v8 = *(_QWORD *)(this + 168);
    *(_QWORD *)(this + 168) = 0LL;
    if ( v8 )
    {
      v9 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( this != 56 )
    v4 = (const struct IDeviceResource *)(*(int *)(*(_QWORD *)(this - 32) + 8LL) + this - 32);
  CDeviceResource::NotifyInvalid((CDeviceResource *)(this - 40), v4);
}
