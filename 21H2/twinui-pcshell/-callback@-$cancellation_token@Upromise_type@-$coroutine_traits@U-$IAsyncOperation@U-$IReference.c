/*
 * XREFs of ?callback@?$cancellation_token@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@impl@winrt@@QEAAX$$QEAU?$delegate@$$V@3@@Z @ 0x18014D4D4
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x180090CC2 (ReleaseSRWLockExclusive_0.c)
 *     WINRT_AcquireSRWLockExclusive @ 0x180090CE6 (WINRT_AcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1804BAC08 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::cancellation_token<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>::callback(
        RTL_SRWLOCK **a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rbx

  v3 = *a1;
  v4 = *a1 + 6;
  WINRT_AcquireSRWLockExclusive(v4);
  if ( LODWORD(v3[9].Ptr) == 2 )
  {
    ReleaseSRWLockExclusive_0(v4);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 24LL))(*a2);
  }
  else
  {
    winrt::Windows::Foundation::IUnknown::operator=(&v3[8], a2);
    ReleaseSRWLockExclusive_0(v4);
  }
}
