/*
 * XREFs of ?UnregisterFromShellHooks@TitleBarController@@AEAAXXZ @ 0x1802F843C
 * Callers:
 *     _lambda_0d811e3ff9caf4aeb25826d22c7c0665_::operator() @ 0x1802F58CC (_lambda_0d811e3ff9caf4aeb25826d22c7c0665_--operator().c)
 *     ?UnsubscribeFromServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802F8500 (-UnsubscribeFromServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180057690 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B13F0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x1802C3078 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TitleBarController::UnregisterFromShellHooks(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  _BYTE v3[112]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v4; // [rsp+A0h] [rbp-28h]
  int v5; // [rsp+A8h] [rbp-20h]

  v4 = 0LL;
  v5 = 0;
  v2 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  SmartCookie::Swap((SmartCookie *)&this[28], (struct SmartCookie *)v3);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  SmartCookie::Unregister((SmartCookie *)v3);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v3);
}
