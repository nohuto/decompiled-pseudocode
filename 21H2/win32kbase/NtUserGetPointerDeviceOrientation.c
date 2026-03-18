/*
 * XREFs of NtUserGetPointerDeviceOrientation @ 0x1C0159F00
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ResolveMouseOrPointerDevice @ 0x1C00C16B0 (ResolveMouseOrPointerDevice.c)
 */

__int64 __fastcall NtUserGetPointerDeviceOrientation(__int64 a1, _DWORD *a2)
{
  int v4; // esi
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG64 v9; // rcx
  __int64 MouseProcessor; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h]

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v4 = 1;
  v14 = 1;
  v5 = 0;
  v12[0] = 0LL;
  v13 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, v12, &v13) )
  {
    if ( v13 || *(_DWORD *)(v12[0] + 24LL) == 7 )
    {
      MouseProcessor = anonymous_namespace_::GetMouseProcessor();
      if ( MouseProcessor )
        v4 = *(_DWORD *)(MouseProcessor + 2784);
      v14 = v4;
    }
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v4;
    v5 = 1;
  }
  else
  {
    UserSetLastError(6LL, v6, v7, v8);
  }
  UserSessionSwitchLeaveCrit(v9, v6, v7, v8);
  return v5;
}
