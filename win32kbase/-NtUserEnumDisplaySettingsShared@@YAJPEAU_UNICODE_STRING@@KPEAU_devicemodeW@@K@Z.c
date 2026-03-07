__int64 __fastcall NtUserEnumDisplaySettingsShared(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct _devicemodeW *a3,
        _BOOL8 a4)
{
  bool v4; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx

  v4 = a4;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  if ( gbVideoInitialized )
    v9 = DrvEnumDisplaySettings(a1, v4);
  else
    v9 = -1073741823;
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v9;
}
