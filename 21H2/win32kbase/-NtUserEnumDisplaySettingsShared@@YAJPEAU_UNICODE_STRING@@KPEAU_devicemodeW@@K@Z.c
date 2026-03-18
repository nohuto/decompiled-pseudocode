/*
 * XREFs of ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C006F5C4
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C006F4E0 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     DrvEnumDisplaySettings @ 0x1C006F640 (DrvEnumDisplaySettings.c)
 */

__int64 __fastcall NtUserEnumDisplaySettingsShared(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct _devicemodeW *a3,
        bool a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( gbVideoInitialized )
    v10 = DrvEnumDisplaySettings(a1, a4);
  else
    v10 = -1073741823;
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
