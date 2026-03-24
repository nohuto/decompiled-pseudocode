/*
 * XREFs of NtUserGetPointerDeviceInputSpace @ 0x1C012F170
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C0045578 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     ResolveMouseOrPointerDevice @ 0x1C00ADEE0 (ResolveMouseOrPointerDevice.c)
 */

__int64 __fastcall NtUserGetPointerDeviceInputSpace(unsigned __int64 a1, struct _LUID *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  struct _LUID InputSpaceId; // rax
  int v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  EnterSharedCrit(0, 1);
  v4 = 0;
  v9 = 0LL;
  v8 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v9, &v8) )
  {
    if ( v8 )
      InputSpaceId = InputConfig::Mouse::GetInputSpaceId();
    else
      InputSpaceId = *(struct _LUID *)(v9 + 228);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (struct _LUID *)MmUserProbeAddress;
    *a2 = InputSpaceId;
    v4 = 1;
  }
  else
  {
    UserSetLastError(6LL, v5);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
