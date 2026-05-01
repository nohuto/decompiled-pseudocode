/*
 * XREFs of _anonymous_namespace_::TryLoadLogoImageStream @ 0x180144468
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x18014351C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$call@AEAV_lambda_07e69beff868801618c2f889ad2e6667_@@@?$factory_cache_entry@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIActivationFactory@Foundation@Windows@6@@impl@winrt@@QEAA?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@2@AEAV_lambda_07e69beff868801618c2f889ad2e6667_@@@Z @ 0x180133444 (--$call@AEAV_lambda_07e69beff868801618c2f889ad2e6667_@@@-$factory_cache_entry@ULogoLoader@LogoLo.c)
 *     ??$wait_get@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@1@AEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@451@@Z @ 0x180134B30 (--$wait_get@U-$IAsyncOperation@U-$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsI.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1802675A8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

// Hidden C++ exception states: #wind=6
winrt *__fastcall anonymous_namespace_::TryLoadLogoImageStream(winrt *this, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int (__fastcall *v8)(__int64, void **); // rdi
  struct IUnknown *v9; // rdx
  void **v10; // rax
  __int64 v11; // rcx
  const char *v12; // r9
  winrt *result; // rax
  __int64 v14; // [rsp+38h] [rbp-70h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-68h] BYREF
  struct IUnknown v16; // [rsp+48h] [rbp-60h] BYREF
  winrt *v17; // [rsp+50h] [rbp-58h]
  __int64 *v18; // [rsp+58h] [rbp-50h] BYREF
  __int64 *v19; // [rsp+60h] [rbp-48h]
  __int64 *v20; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  try
  {
    v17 = this;
    v19 = a2;
    v20 = a3;
    winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_07e69beff868801618c2f889ad2e6667_ &>(
      (__int64)this,
      &v16);
    v18 = 0LL;
    v6 = (*((unsigned int (__fastcall **)(struct IUnknownVtbl *, __int64, __int64, __int64 **))v16.lpVtbl->QueryInterface
          + 6))(
           v16.lpVtbl,
           *a2,
           *a3,
           &v18);
    winrt::check_hresult(v6);
    v15 = v18;
    winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>>(
      (winrt *)&v14,
      &v15);
    *(_QWORD *)this = 0LL;
    v7 = v14;
    v8 = *(unsigned int (__fastcall **)(__int64, void **))(*(_QWORD *)v14 + 56LL);
    v10 = winrt::put_abi(this, v9);
    v11 = v8(v7, v10);
    winrt::check_hresult(v11);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v14);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v15);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v16);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a2);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a3);
    result = this;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA2,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v12);
    *(_QWORD *)v17 = 0LL;
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v19);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v20);
    return v17;
  }
  return result;
}
