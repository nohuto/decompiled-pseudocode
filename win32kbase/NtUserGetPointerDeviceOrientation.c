__int64 __fastcall NtUserGetPointerDeviceOrientation(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r14
  int v6; // esi
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG64 v12; // rcx
  __int64 MouseProcessor; // rax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF
  int v17; // [rsp+78h] [rbp+20h]

  v4 = a2;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v6 = 1;
  v17 = 1;
  v7 = 0;
  v15[0] = 0LL;
  v16 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, v15, &v16) )
  {
    if ( v16 || *(_DWORD *)(v15[0] + 24LL) == 7 )
    {
      MouseProcessor = anonymous_namespace_::GetMouseProcessor(v9, v8, v10, v11);
      if ( MouseProcessor )
        v6 = *(_DWORD *)(MouseProcessor + 2784);
      v17 = v6;
    }
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_DWORD *)MmUserProbeAddress;
    *v4 = v6;
    v7 = 1;
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCrit(v12, v8, v10, v11);
  return v7;
}
