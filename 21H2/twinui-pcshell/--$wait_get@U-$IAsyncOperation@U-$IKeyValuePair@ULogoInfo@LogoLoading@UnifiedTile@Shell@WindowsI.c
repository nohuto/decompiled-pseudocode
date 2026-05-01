/*
 * XREFs of ??$wait_get@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@1@AEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@451@@Z @ 0x180134B30
 * Callers:
 *     _anonymous_namespace_::TryLoadLogoImageStream @ 0x180144468 (_anonymous_namespace_--TryLoadLogoImageStream.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x180134A6C (--$wait_for_completed@U-$IAsyncOperation@U-$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shel.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIAsyncInfo@123@XZ @ 0x180260ED8 (--$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AUIAsyn.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1802675A8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt *__fastcall winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>>(
        winrt *this,
        __int64 **a2)
{
  unsigned int v4; // eax
  __int64 *v5; // rdi
  __int64 (__fastcall *v6)(__int64 *, void **); // rbx
  void **v7; // rax
  unsigned int v8; // eax
  __int64 v10[2]; // [rsp+28h] [rbp-30h] BYREF
  int v11; // [rsp+38h] [rbp-20h] BYREF

  v10[1] = (__int64)this;
  winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::IAsyncInfo>(a2, v10);
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10[0] + 56LL))(v10[0], &v11);
  winrt::check_hresult(v4);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v10);
  if ( !v11 )
    winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>>(a2);
  *(_QWORD *)this = 0LL;
  v5 = *a2;
  v6 = *(__int64 (__fastcall **)(__int64 *, void **))(*v5 + 64);
  v7 = winrt::put_abi(this, (struct IUnknown *)*v5);
  v8 = v6(v5, v7);
  winrt::check_hresult(v8);
  return this;
}
