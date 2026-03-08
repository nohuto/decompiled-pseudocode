/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x1C0078CE8
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     ReadTiltCalibrationData @ 0x1C01A678C (ReadTiltCalibrationData.c)
 */

void CheckPointerDeviceConfiguration()
{
  int v0; // ebx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  CInpPushLock *Lock; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DEVICEINFO *i; // rdi
  unsigned int *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v0 = *(_DWORD *)UPDWORDPointer(8224LL);
  *(_DWORD *)(SGDGetUserSessionState(v1) + 524) = v0;
  v16 = 1;
  _GetPrecisionTouchPadConfiguration(0LL);
  AccessPTPEnabledStatus(0LL, 1LL, &v16);
  v2 = v16;
  *(_DWORD *)(SGDGetUserSessionState(v3) + 520) = v2;
  CPTPProcessor::EnvironmentChanged();
  v5 = SGDGetUserSessionState(v4);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(v5 + 16840));
  CInpPushLock::LockShared(Lock);
  v8 = SGDGetUserSessionState(v7);
  for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v8 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) == 3 && (*((_DWORD *)i + 46) & 0x1000) != 0 && !(unsigned int)IsPrecisionTouchPadEnabled() )
    {
      RIMRevokeConfigurationChange(i, 87LL);
      v10 = (unsigned int *)((char *)i + 200);
    }
    else
    {
      v10 = (unsigned int *)((char *)i + 200);
      if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
      {
        v12 = *((_QWORD *)i + 59);
        if ( *(_QWORD *)(v12 + 392) )
        {
          v15 = *((_OWORD *)i + 13);
          ReadTiltCalibrationData(v12, &v15);
        }
        else
        {
          PTPTelemetry::OnUserLogin();
        }
      }
    }
    v11 = *v10;
    if ( (v11 & 0x80u) != 0LL && *(_DWORD *)(*((_QWORD *)i + 59) + 24LL) == 7 && (v11 & 0x400) != 0 )
    {
      v13 = SGDGetUserSessionState(v11);
      if ( (*(_DWORD *)(v13 + 16820) & 0x10000) != 0 )
        v14 = (unsigned int)*(char *)(v13 + 16821);
      else
        v14 = 0LL;
      RIMConfigureDeviceFeedback(i, v14);
    }
  }
  CInpPushLock::UnLockShared(Lock);
}
