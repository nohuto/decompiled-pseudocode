/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x1C0009978
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 * Callees:
 *     ReadTiltCalibrationData @ 0x1C01CEE1C (ReadTiltCalibrationData.c)
 */

// write access to const memory has been detected, the output may be wrong!
void CheckPointerDeviceConfiguration()
{
  CInpPushLock *Lock; // rbx
  struct DEVICEINFO *i; // rdi
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 1;
  _GetPrecisionTouchPadConfiguration(0LL);
  AccessPTPEnabledStatus(0LL, 1LL, &v4);
  gPTPEnabled = v4;
  CPTPProcessor::EnvironmentChanged();
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  CInpPushLock::LockShared(Lock);
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) == 3 && (*((_DWORD *)i + 46) & 0x1000) != 0 && !(unsigned int)IsPrecisionTouchPadEnabled() )
    {
      RIMRevokeConfigurationChange(i, 87LL);
    }
    else if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v2 = *((_QWORD *)i + 60);
      if ( *(_QWORD *)(v2 + 344) )
      {
        v3 = *((_OWORD *)i + 13);
        ReadTiltCalibrationData(v2, &v3);
      }
      else
      {
        PTPTelemetry::OnUserLogin();
      }
    }
  }
  CInpPushLock::UnLockShared(Lock);
}
