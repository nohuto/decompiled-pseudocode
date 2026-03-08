/*
 * XREFs of ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180287A90
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@QEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180284A6C (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 */

void __fastcall CDDisplaySwapChain::NotifyInvalidResource(unsigned __int64 this, const struct IDeviceResource *a2)
{
  __int64 v3; // rcx
  const struct IDeviceResource *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 128) + 104LL))(
    *(_QWORD *)(this + 128),
    *(unsigned int *)(this + 176));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 56));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 64));
  v3 = *(_QWORD *)(this + 72);
  v4 = 0LL;
  *(_QWORD *)(this + 72) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(this + 80),
    0LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 88));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 96));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 104));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 112));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 120));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 128));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 136));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 144));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 152));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 160));
  *(_DWORD *)(this + 176) = -1;
  *(_DWORD *)(this + 180) = -1;
  std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
    *(DDisplayPrimaryBufferResources **)(this + 184),
    *(DDisplayPrimaryBufferResources **)(this + 192));
  *(_QWORD *)(this + 192) = *(_QWORD *)(this + 184);
  v5 = *(_QWORD *)(this - 88);
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(
      v6,
      this & ((unsigned __int128)-(__int128)(this - 216) >> 64));
    v7 = *(_QWORD *)(this - 88);
    *(_QWORD *)(this - 88) = 0LL;
    if ( v7 )
    {
      v8 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( this != 216 )
    v4 = (const struct IDeviceResource *)(*(int *)(*(_QWORD *)(this - 208) + 12LL) + this - 208);
  CDeviceResource::NotifyInvalid((CDeviceResource *)(this - 176), v4);
}
