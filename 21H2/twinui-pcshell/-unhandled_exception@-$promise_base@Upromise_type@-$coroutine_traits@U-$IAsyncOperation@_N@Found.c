/*
 * XREFs of ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180101A1C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2_::_1_::catch$127 @ 0x180100A24 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumb_ea_180100A24.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::catch$433 @ 0x18012E3D5 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_18012E3D5.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::catch$433 @ 0x180131A45 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_180131A45.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2_::_1_::catch$254 @ 0x18014170F (_winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_Resume_ea_18014170F.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::catch$366 @ 0x18014D168 (_RequestNotificationPinConsentAsync$_ResumeCoro$2_--_1_--catch$366.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18035CBA4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??1exception_ptr@std@@QEAA@XZ @ 0x18035CD10 (--1exception_ptr@std@@QEAA@XZ.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18035CE44 (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x18035E914 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18035ED68 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x1804D1698 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::unhandled_exception(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (struct winrt::slim_mutex *)(a1 + 48));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=(a1 + 32, v2);
  std::exception_ptr::~exception_ptr((std::exception_ptr *)v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v4, (const struct std::exception_ptr *)(a1 + 32));
  try
  {
    std::rethrow_exception(v3);
  }
  catch ( winrt::hresult_canceled )
  {
    *(_DWORD *)(a1 + 72) = 2;
  }
  catch ( ... )
  {
    *(_DWORD *)(a1 + 72) = 3;
  }
  ReleaseSRWLockExclusive_0(SRWLock);
}
