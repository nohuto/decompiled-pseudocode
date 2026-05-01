/*
 * XREFs of ?DisconnectFromPresentationLayer@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x1802BDD00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180057690 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B15A0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x1802C32E8 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::DisconnectFromPresentationLayer(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // eax
  int v4; // eax
  _BYTE v6[112]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+A0h] [rbp-60h]
  int v8; // [rsp+A8h] [rbp-58h]
  _BYTE v9[112]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+120h] [rbp+20h]
  int v11; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v10 = 0LL;
  v11 = 0;
  v7 = 0LL;
  v8 = 0;
  v2 = this + 26;
  AcquireSRWLockExclusive(this + 26);
  SmartCookie::Swap((SmartCookie *)&this[31], (struct SmartCookie *)v9);
  SmartCookie::Swap((SmartCookie *)&this[47], (struct SmartCookie *)v6);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = SmartCookie::Unregister((SmartCookie *)v9);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x337,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v3);
  if ( v8 )
  {
    v4 = SmartCookie::Unregister((SmartCookie *)v6);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33B,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v4);
  }
  SmartCookie::Unregister((SmartCookie *)v6);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v6);
  SmartCookie::Unregister((SmartCookie *)v9);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v9);
  return 0LL;
}
