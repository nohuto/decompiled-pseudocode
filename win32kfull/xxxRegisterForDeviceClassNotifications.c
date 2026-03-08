/*
 * XREFs of xxxRegisterForDeviceClassNotifications @ 0x1C00787C0
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     RegisterCDROMNotify @ 0x1C0077C84 (RegisterCDROMNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRegisterForDeviceClassNotifications(__int64 a1)
{
  int v1; // edi
  unsigned int i; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  CBaseInput *v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  v1 = -1073741811;
  for ( i = 1; i <= 2; ++i )
  {
    if ( !gpWin32kDriverObject )
      continue;
    UserSessionSwitchLeaveCrit(a1);
    if ( i != 2 )
    {
      if ( i != 1 )
        goto LABEL_7;
      v8 = SGDGetUserSessionState(v3);
      v1 = CBaseInput::InitializeSensor(*(CBaseInput **)(v8 + 12672));
      if ( v1 < 0 )
        goto LABEL_7;
      v6 = *(CBaseInput **)(SGDGetUserSessionState(v9) + 12672);
      goto LABEL_6;
    }
    v4 = SGDGetUserSessionState(v3);
    v1 = CBaseInput::InitializeSensor(*(CBaseInput **)(v4 + 16840));
    if ( v1 >= 0 )
    {
      v6 = *(CBaseInput **)(SGDGetUserSessionState(v5) + 16840);
LABEL_6:
      v1 = CBaseInput::Read(v6);
    }
LABEL_7:
    EnterCrit(1LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1);
  if ( !gbFirstConnectionDone && gpWin32kDriverObject )
  {
    if ( !gProtocolType )
      RegisterCDROMNotify();
    gbFirstConnectionDone = 1;
  }
  EnterCrit(1LL, 0LL);
  return (unsigned int)v1;
}
