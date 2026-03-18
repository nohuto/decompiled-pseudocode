/*
 * XREFs of UserActivateMITInputProcessing @ 0x1C00B5A44
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C00B5940 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1C0054934 (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     IOCPDispatcher_Destroy @ 0x1C005A7F0 (IOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C005CC08 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C005DB20 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C00B5BF0 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C00B6178 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ApiSetEditionActivateMitInput @ 0x1C00B630C (ApiSetEditionActivateMitInput.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C00B6410 (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     rimScheduleUserModeRimPnpRegistration @ 0x1C00C0DF8 (rimScheduleUserModeRimPnpRegistration.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(
        int (*a1)(struct _InputHitTestRequest *, struct _InputHitTestResult *),
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v3; // r14
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  __int64 v7; // rdx
  IOCPDispatcher *v8; // rcx
  void *IocpHandleForUserMode; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 (__fastcall **v12)(); // rdi
  int v13; // edx
  CBaseInput **v14; // rdi
  __int64 v15; // rsi
  unsigned __int8 v16; // di
  int v18; // r8d
  void *v19; // r8

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      10,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  if ( gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
  *v3 = 0LL;
  if ( (int)IOCPDispatcher::CreateInstance(&gpIOCPDispatcher) >= 0
    && (IocpHandleForUserMode = IOCPDispatcher::CreateIocpHandleForUserMode(v8)) != 0LL
    && (unsigned int)ApiSetEditionActivateMitInput() )
  {
    if ( gbNoMoreDITHitTest )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
    CInputThreadBase::ActivateInputProcessing(gpInputThread);
    InputExtensibilityCallout::OnInputThreadStateChanged(v11, 0LL);
    v12 = s_rgSensorMap;
    do
    {
      CBaseInput::HandleInputThreadStateChange(v12[3], 0LL);
      v12 += 6;
    }
    while ( v12 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
    rimScheduleUserModeRimPnpRegistration();
    CSpatialProcessor::_spfnInputHitTestCallback = a1;
    v14 = &qword_1C0288018;
    *v3 = IocpHandleForUserMode;
    v15 = 3LL;
    do
    {
      if ( *((_DWORD *)v14 - 2) == 2 )
        CBaseInput::Read(*v14);
      v14 += 6;
      --v15;
    }
    while ( v15 );
    v16 = 1;
  }
  else
  {
    IOCPDispatcher_Destroy((__int64)v8, v7);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v18,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        11,
        (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
    }
    v16 = 0;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v13 || v6 )
  {
    v19 = &WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids;
    LOBYTE(v19) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      (_DWORD)v19,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      12,
      (__int64)&WPP_165f3abe42b33c15c83f02aac2ca9a71_Traceguids);
  }
  return v16;
}
