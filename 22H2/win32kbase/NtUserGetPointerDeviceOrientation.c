/*
 * XREFs of NtUserGetPointerDeviceOrientation @ 0x1C012F260
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0043E8C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ResolveMouseOrPointerDevice @ 0x1C00ADEE0 (ResolveMouseOrPointerDevice.c)
 */

__int64 __fastcall NtUserGetPointerDeviceOrientation(unsigned __int64 a1, _DWORD *a2)
{
  int v4; // esi
  int v5; // edi
  __int64 v6; // rdx
  __int64 MouseProcessor; // rax
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h]

  EnterSharedCrit(0, 1);
  v4 = 1;
  v11 = 1;
  v5 = 0;
  v9[0] = 0LL;
  v10 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, v9, &v10) )
  {
    if ( v10 || *(_DWORD *)(v9[0] + 24LL) == 7 )
    {
      MouseProcessor = anonymous_namespace_::GetMouseProcessor();
      if ( MouseProcessor )
        v4 = *(_DWORD *)(MouseProcessor + 2792);
      v11 = v4;
    }
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v4;
    v5 = 1;
  }
  else
  {
    UserSetLastError(6LL, v6);
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
