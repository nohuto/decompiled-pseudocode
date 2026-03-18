/*
 * XREFs of ?NtUserEnumDisplayDevicesShared@@YAJPEAU_UNICODE_STRING@@KPEAU_DISPLAY_DEVICEW@@K@Z @ 0x1C007213C
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C00720C0 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     DrvEnumDisplayDevices @ 0x1C00721C0 (DrvEnumDisplayDevices.c)
 */

__int64 __fastcall NtUserEnumDisplayDevicesShared(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct _DISPLAY_DEVICEW *a3,
        int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( gbVideoInitialized )
    v10 = DrvEnumDisplayDevices(a1, a4, 1);
  else
    v10 = -1073741823;
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
