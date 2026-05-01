/*
 * XREFs of ??$wait_get@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUWindowTabDataModel@Shell@UI@Internal@Windows@1@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@61@@Z @ 0x1800E6F34
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800ECC08 (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800E6E48 (--$wait_for_completed@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@F.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIAsyncInfo@123@XZ @ 0x180260D28 (--$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AUIAsyn.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1802673F8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt *__fastcall winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>(
        winrt *this,
        __int64 *a2)
{
  unsigned int v4; // eax
  struct IUnknown *v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, void **); // rbx
  void **v8; // rax
  unsigned int v9; // eax
  int v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::IAsyncInfo>(a2, &v12);
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 56LL))(v12, &v11);
  winrt::check_hresult(v4);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v12);
  if ( !v11 )
    winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>(a2);
  *(_QWORD *)this = 0LL;
  v6 = *a2;
  v7 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 64LL);
  v8 = winrt::put_abi(this, v5);
  v9 = v7(v6, v8);
  winrt::check_hresult(v9);
  return this;
}
