/*
 * XREFs of UserActivateMITInputProcessing @ 0x1C00879A8
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C0087920 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0087FF0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C0089634 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0089A48 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ApiSetEditionActivateMitInput @ 0x1C0089C2C (ApiSetEditionActivateMitInput.c)
 *     ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C009E014 (-ActivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ @ 0x1C00AE160 (-EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ.c)
 *     rimScheduleUserModeRimPnpRegistration @ 0x1C00B1BC0 (rimScheduleUserModeRimPnpRegistration.c)
 *     IOCPDispatcher_Destroy @ 0x1C00B3560 (IOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C00B358C (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(struct IOCPDispatcher **a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  int (*v3)(struct _InputHitTestRequest *, struct _InputHitTestResult *); // rbp
  unsigned int v4; // ebx
  __int64 v5; // rsi
  CActivationObjectManager *v6; // rcx
  CInputThread *v7; // rcx
  __int64 v8; // rcx
  __int64 (__fastcall **v9)(); // rdi
  int v10; // edx
  CBaseInput **v11; // rdi
  __int64 v12; // rbp
  char v13; // si
  int v15; // edx

  v2 = a2;
  v3 = (int (*)(struct _InputHitTestRequest *, struct _InputHitTestResult *))a1;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (struct IOCPDispatcher **)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        2,
        10,
        (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
    }
  }
  if ( gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
  *v2 = 0LL;
  if ( (int)IOCPDispatcher::CreateInstance(a1) >= 0
    && (v5 = *((_QWORD *)gpIOCPDispatcher + 344)) != 0
    && (unsigned int)ApiSetEditionActivateMitInput() )
  {
    if ( gbNoMoreDITHitTest )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 44LL);
    CActivationObjectManager::EnumerateAllGroups(v6);
    CInputThread::ActivateInputProcessing(v7);
    InputExtensibilityCallout::OnInputThreadStateChanged(v8, 0LL);
    v9 = s_rgSensorMap;
    do
    {
      CBaseInput::HandleInputThreadStateChange(v9[3], 0LL);
      v9 += 6;
    }
    while ( v9 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
    rimScheduleUserModeRimPnpRegistration();
    CSpatialProcessor::_spfnInputHitTestCallback = v3;
    v11 = &qword_1C0246018;
    v12 = 3LL;
    *v2 = v5;
    v13 = 1;
    do
    {
      if ( *((_DWORD *)v11 - 2) == 2 )
        CBaseInput::Read(*v11);
      v11 += 6;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    IOCPDispatcher_Destroy();
    v13 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 3, 11, (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      2,
      12,
      (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  }
LABEL_20:
  LOBYTE(v4) = v13 != 0;
  return v4;
}
