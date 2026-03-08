/*
 * XREFs of ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180297FC0
 * Callers:
 *     ?NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18029EED0 (-NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x180298110 (-ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ.c)
 */

void __fastcall CLegacySwapChain::NotifyInvalidResource(CLegacySwapChain *this, const struct IDeviceResource *a2)
{
  char *v2; // rsi
  __int64 v4; // rcx
  const struct IDeviceResource *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (char *)this - 216;
  CLegacySwapChain::ReleaseD3D12Resources((CLegacySwapChain *)((char *)this - 216));
  v4 = *((_QWORD *)this + 1);
  v5 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 272LL))(v2);
  v6 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v2 )
    v5 = (CLegacySwapChain *)((char *)this + *(int *)(*((_QWORD *)this - 26) + 12LL) - 208);
  CDeviceResource::NotifyInvalid((CLegacySwapChain *)((char *)this - 176), v5);
}
