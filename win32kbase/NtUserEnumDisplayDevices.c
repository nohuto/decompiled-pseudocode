__int64 __fastcall NtUserEnumDisplayDevices(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx

  v4 = a4;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  if ( gbVideoInitialized )
    v10 = DrvEnumDisplayDevices(a1, v4, 1);
  else
    v10 = -1073741823;
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
