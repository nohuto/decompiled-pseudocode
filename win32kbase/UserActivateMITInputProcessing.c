__int64 __fastcall UserActivateMITInputProcessing(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  char v4; // bl
  char v5; // r8
  IOCPDispatcher *v6; // rcx
  void *IocpHandleForUserMode; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  unsigned __int8 v22; // di

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      10,
      (__int64)&WPP_57958f1c0af5359901bb86e3ae8a02de_Traceguids);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 31LL);
  *v2 = 0LL;
  if ( (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters) >= 0
    && (IocpHandleForUserMode = IOCPDispatcher::CreateIocpHandleForUserMode(v6)) != 0LL
    && (unsigned int)ApiSetEditionActivateMitInput() )
  {
    if ( gbNoMoreDITHitTest )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 47LL);
    CInputThreadBase::ActivateInputProcessing((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    v12 = SGDGetUserSessionState(v9, v8, v10, v11);
    InputExtensibilityCallout::OnInputThreadStateChanged(*(_QWORD *)(v12 + 16048), 0LL);
    HandleInputThreadActivated(v14, v13, v15, v16);
    rimScheduleUserModeRimPnpRegistration();
    *(_QWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 3448) = a1;
    *v2 = IocpHandleForUserMode;
    PerfomInitialReadInputOnSharedThread();
    v22 = 1;
  }
  else
  {
    v22 = 0;
    IOCPDispatcher_Destroy();
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v21) = 0;
    }
    if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        11,
        (__int64)&WPP_57958f1c0af5359901bb86e3ae8a02de_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v21) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v21 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      12,
      (__int64)&WPP_57958f1c0af5359901bb86e3ae8a02de_Traceguids);
  return v22;
}
