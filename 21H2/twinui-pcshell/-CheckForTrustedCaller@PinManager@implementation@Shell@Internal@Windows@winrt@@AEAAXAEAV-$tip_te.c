/*
 * XREFs of ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x180137DDC
 * Callers:
 *     ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x180129F38 (--$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@.c)
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x18012A078 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation.c)
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x18012A1D0 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@S.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013C100 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009532C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??B?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x1801366BC (--B-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInte.c)
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x18013A168 (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x18013BA9C (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 *     HandleToULong @ 0x1801A8B4C (HandleToULong.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  BOOL (__stdcall *v7)(HANDLE); // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0LL;
  v3 = winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop,winrt::immersive_shell_component>::operator winrt::Windows::Foundation::IInspectable(
         a1,
         &v6);
  wil::GetProcessHandleForClientOfObject(&v8, *v3);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v6);
  if ( !(unsigned __int8)anonymous_namespace_::IsTrustedWindowsPinProcess(v8, a2) )
  {
    v5 = HandleToULong((const void *)0x80070005LL);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      950LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)v5);
    __debugbreak();
  }
  result = v8;
  if ( v8 )
  {
    v6 = v8;
    v7 = CloseHandle;
    return wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v7, &v6);
  }
  return result;
}
