/*
 * XREFs of ??$ActivateInstance@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@3@XZ @ 0x180129E70
 * Callers:
 *     ??$call@AEAV_lambda_0bc326e1b757a15661b2c7ecb4ecb769_@@@?$factory_cache_entry@ULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?AULogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEAV_lambda_0bc326e1b757a15661b2c7ecb4ecb769_@@@Z @ 0x1801335BC (--$call@AEAV_lambda_0bc326e1b757a15661b2c7ecb4ecb769_@@@-$factory_cache_entry@ULogoOptions@LogoL.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1802675A8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

struct IUnknown *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions>(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void **); // rbx
  void **v5; // rax
  unsigned int v6; // eax
  struct IUnknown *v8; // [rsp+20h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, void *, struct IUnknown **); // [rsp+28h] [rbp-20h] BYREF

  v8 = a2;
  v9 = 0LL;
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*a1 + 48LL);
  v5 = winrt::put_abi((winrt *)&v9, a2);
  v6 = v4(v3, v5);
  winrt::check_hresult(v6);
  if ( v9 )
  {
    v8 = 0LL;
    (**v9)(
      v9,
      &winrt::impl::guid_storage<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoOptions>::value,
      &v8);
    a2->lpVtbl = (struct IUnknownVtbl *)v8;
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v9);
  return a2;
}
