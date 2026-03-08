/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01F375C
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01F2ED8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01F3160 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01F494C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C01F4CA8 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C01F51AC (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01F5428 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01F56D4 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0009FE0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C007D3C0 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C00F1DF6 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     IsPointerInputMessage @ 0x1C00F3132 (IsPointerInputMessage.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C0161B80 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C0162440 (EtwTraceEndPointerMessageGeneration.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01E3A44 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1C01F3CC0 (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C01FCAD8 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01FDB10 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C023ED50 (ApiSetEditionHandleHungWindow.c)
 *     ApiSetInkProcessorOnPointerMessagePosted @ 0x1C02450D8 (ApiSetInkProcessorOnPointerMessagePosted.c)
 */

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
