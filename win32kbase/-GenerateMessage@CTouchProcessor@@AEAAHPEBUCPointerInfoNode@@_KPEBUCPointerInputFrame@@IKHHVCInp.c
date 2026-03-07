__int64 __fastcall CTouchProcessor::GenerateMessage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        CInputDest *a9)
{
  __int64 v9; // rsi
  CTouchProcessor *v10; // rcx
  unsigned int v11; // ebx
  char v12; // di
  unsigned __int16 v13; // r15
  unsigned int v14; // r14d
  __int16 v15; // r13
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  HWND WindowHandle; // rax
  __int64 v21; // rdx
  CInputDest *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  HWND v25; // r10
  HWND v26; // rax
  __int64 v27; // r8
  CTouchProcessor *v28; // rcx
  __int64 v29; // r8
  int v30; // r15d
  int v31; // ecx
  struct tagTHREADINFO *ThreadInfo; // rax
  int v33; // edx
  int v34; // r8d
  unsigned __int16 v36; // [rsp+50h] [rbp-58h]
  unsigned __int64 v37; // [rsp+58h] [rbp-50h]

  v9 = a2;
  v37 = a3;
  v10 = (CTouchProcessor *)WPP_GLOBAL_Control;
  v11 = 0;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
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
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      283,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v13 = *(_WORD *)(v9 + 160);
  v14 = a5;
  v15 = *(_WORD *)(v9 + 172);
  v36 = v13;
  if ( a5 )
  {
    if ( !IsPointerInputMessage(a5) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10466);
LABEL_14:
    if ( *(_DWORD *)a9 )
      goto LABEL_63;
    if ( !*(_DWORD *)(v9 + 444) )
      goto LABEL_16;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v9 + 352));
    if ( WindowHandle == v25 )
    {
      if ( a8 || (*(_DWORD *)v9 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v22, v21, v23, v24) )
LABEL_16:
        CInputDest::operator=((__int64)a9, v9 + 352);
    }
    else
    {
      if ( a8 || (*(_DWORD *)v9 & 0x800) != 0 )
        LODWORD(v24) = 1;
      if ( !CInputDest::SetupFromInputDestAndWindow((__int64 *)a9, v9 + 352, v25, v24) )
        CInputDest::SetEmpty(a9);
    }
    if ( !*(_DWORD *)a9 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          7,
          286,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v16 || v12 )
      {
        v19 = 287;
        goto LABEL_74;
      }
      goto LABEL_91;
    }
LABEL_63:
    if ( *((_DWORD *)a9 + 23) )
    {
      v26 = CInputDest::GetWindowHandle(a9);
      InputTraceLogging::Pointer::GenerateMessage(a4, v15, v37, v14, v26);
      EtwTraceBeginPointerMessageGeneration(v13, v15, v27);
      v30 = CTouchProcessor::PostPointerMessage(v28, a9, a4, (const struct CPointerInfoNode *)v9, v37, v14, a6, a7, a8);
      if ( v30 )
      {
        ApiSetInkProcessorOnPointerMessagePosted(v14, v37);
        v31 = *(_DWORD *)(v9 + 180);
        if ( (v31 & 0x2000) != 0 && (v31 & 0x10000) != 0 )
        {
          PoLatencySensitivityHint(2LL);
          ThreadInfo = CInputDest::GetThreadInfo(a9);
          if ( ThreadInfo )
          {
            CInputGlobals::SetPtiLastWoken(gpInputGlobals, ThreadInfo, 0);
            ApiSetEditionHandleHungWindow(a9);
          }
        }
      }
      EtwTraceEndPointerMessageGeneration(v36, v15, v29);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v33) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v33 || v12 )
      {
        LOBYTE(v34) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          v34,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          289,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      }
      v11 = v30;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10528);
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v12 = 0;
      if ( (_BYTE)v16 || v12 )
      {
        v19 = 288;
        goto LABEL_74;
      }
    }
    goto LABEL_91;
  }
  v14 = CTouchProcessor::PointerFlagsToMessage(v10, *(_DWORD *)(v9 + 180));
  if ( v14 )
    goto LABEL_14;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v17,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      7,
      284,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)v16 || v12 )
  {
    v19 = 285;
LABEL_74:
    LOBYTE(v17) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      v18->AttachedDevice,
      v16,
      v17,
      v18->DeviceExtension,
      5,
      7,
      v19,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
LABEL_91:
  CInputDest::SetEmpty(a9);
  return v11;
}
