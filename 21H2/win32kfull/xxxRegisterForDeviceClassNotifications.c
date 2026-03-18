/*
 * XREFs of xxxRegisterForDeviceClassNotifications @ 0x1C0004670
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     RegisterCDROMNotify @ 0x1C0122384 (RegisterCDROMNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRegisterForDeviceClassNotifications(__int64 a1)
{
  int v1; // edi
  unsigned int i; // ebx
  CBaseInput **v3; // rcx

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
      v1 = CBaseInput::InitializeSensor(gpKeyboardSensor);
      if ( v1 < 0 )
        goto LABEL_7;
      v3 = (CBaseInput **)gpKeyboardSensor;
      goto LABEL_6;
    }
    v1 = CBaseInput::InitializeSensor(gpHidInput);
    if ( v1 >= 0 )
    {
      v3 = (CBaseInput **)gpHidInput;
LABEL_6:
      v1 = CBaseInput::Read(*v3);
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
