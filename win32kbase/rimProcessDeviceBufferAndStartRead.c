/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4
 * Callers:
 *     RIMQueueKeyboardInput @ 0x1C0003A10 (RIMQueueKeyboardInput.c)
 *     rimCompleteReads @ 0x1C0039B74 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0039E14 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C00CB830 (rimInputApc.c)
 *     RIMInjectInput @ 0x1C01A67F0 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01C39C8 (RIMIDEInjectDeviceInput.c)
 *     RIMQueueMouseInput @ 0x1C01C581C (RIMQueueMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C01C6EA0 (RIMIDE_InjectGenericHidInput.c)
 * Callees:
 *     rimSignalReadComplete @ 0x1C0003CE8 (rimSignalReadComplete.c)
 *     RIMIsInputSuppressed @ 0x1C0003F78 (RIMIsInputSuppressed.c)
 *     rimObsDeliverToExclusiveObservers @ 0x1C0003FAC (rimObsDeliverToExclusiveObservers.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0004228 (rimProcessInjectedDeviceBuffers.c)
 *     rimProcessKeyboardInput @ 0x1C0004290 (rimProcessKeyboardInput.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C00043BC (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1C00046F0 (rimObsDeliverToNonExclusiveObservers.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003A4AC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0087454 (RIMStartDeviceSpecificRead.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00877F0 (RimDeviceTypeToRimInputTypeString.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C00EE9F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00EF53C (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     rimIsPointerInputAllowed @ 0x1C00EF698 (rimIsPointerInputAllowed.c)
 *     rimProcessMouseInput @ 0x1C00F0EA4 (rimProcessMouseInput.c)
 *     ApiSetEtwTracePointerDeviceReadStart @ 0x1C00F614A (ApiSetEtwTracePointerDeviceReadStart.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C017D810 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C019FE54 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C01BFA24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C01C0BD4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01D1854 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01D209C (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessHidInput @ 0x1C01D2DF8 (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01D517C (RIMProcessAnyPointerDeviceInput.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01E2994 (RIMHandleTTMDeviceInput.c)
 *     ApiSetEtwTracePointerDeviceReadStop @ 0x1C0243EE8 (ApiSetEtwTracePointerDeviceReadStop.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  int v5; // edx
  int v6; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v8; // r11d
  _DWORD *v9; // rsi
  LARGE_INTEGER v10; // r14
  LONGLONG v11; // rcx
  int v12; // eax
  char v13; // r13
  int v14; // r12d
  _QWORD *v15; // rsi
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  int v24; // r8d
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  int v27; // r8d
  int v28; // r9d
  __int64 v29[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+48h] BYREF
  char v31; // [rsp+D0h] [rbp+50h]
  unsigned int v32; // [rsp+D8h] [rbp+58h]

  v31 = a3;
  if ( (unsigned int)RIMIsInputSuppressed(a2)
    || (*((_DWORD *)a2 + 50) & 0x40) != 0
    || !*(_BYTE *)SGDGetUserGdiSessionState() )
  {
LABEL_4:
    v32 = 0;
    goto LABEL_6;
  }
  v32 = RIMHandleTTMDeviceInput(a2);
  if ( (v32 & 0x80000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (_DWORD)gRimLog,
        4,
        1,
        21,
        (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
        v32);
    }
    goto LABEL_4;
  }
LABEL_6:
  ++*((_DWORD *)a2 + 577);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = *((_DWORD *)a2 + 577);
  v9 = (_DWORD *)((char *)a2 + 2320);
  v10 = PerformanceCounter;
  v11 = 100 * (v8 / 0x64);
  if ( v8 == (_DWORD)v11 && !*v9
    || *v9
    && (v11 = 600000 * gliQpcFreq.QuadPart,
        PerformanceCounter.QuadPart - *((_QWORD *)a2 + 289) >= 600000 * gliQpcFreq.QuadPart / 1000)
    && !(v8 % 0x64) )
  {
    if ( (unsigned int)dword_1C02C92F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C92F8, 0x400000000000LL) )
    {
      LODWORD(v30) = v20 == 0;
      RimDeviceTypeToRimInputTypeString(a2, *((unsigned __int8 *)a2 + 48));
      v29[0] = (__int64)"rimProcessDeviceBufferAndStartRead";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v21,
        &unk_1C0298218);
    }
    if ( !*v9 )
      *v9 = 1;
    *((LARGE_INTEGER *)a2 + 289) = v10;
  }
  if ( (unsigned int)dword_1C02CA7E0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
  {
    v30 = (__int64)InputTraceLogging::RimDevTypeToString(*((unsigned __int8 *)a2 + 48));
    v29[0] = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C02CA7E0,
      (__int64)v29,
      (__int64)&v30);
  }
  v12 = *((_DWORD *)a2 + 46);
  v13 = 0;
  v14 = -__CFSHR__(v12, 7);
  if ( *((_BYTE *)a2 + 48) >= 2u )
  {
    if ( *((_BYTE *)a2 + 48) != 2 )
      return v32;
    if ( (v12 & 0x10000) == 0 && (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
    {
      if ( !(unsigned int)rimObsDeliverToExclusiveObservers(a2) )
      {
        rimObsDeliverToNonExclusiveObservers(a2);
        if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
        {
          if ( (unsigned int)rimIsPointerInputAllowed(a2) )
          {
            ApiSetEtwTracePointerDeviceReadStart();
            RIMProcessAnyPointerDeviceInput(a1, a2);
            ApiSetEtwTracePointerDeviceReadStop();
          }
        }
      }
      v22 = *((_DWORD *)a2 + 46);
      if ( (v22 & 0x2000) == 0 && !v14 )
      {
        if ( (v22 & 0x200) != 0 )
        {
          LODWORD(v30) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1350LL);
        }
        goto LABEL_99;
      }
      return v32;
    }
  }
  else if ( (v12 & 0x2000) != 0 || __CFSHR__(*((_DWORD *)a2 + 46), 7) )
  {
    v13 = 1;
    RIMTransferInjectionDeviceDataFifoToDataBuffer(v11, a2);
  }
  if ( !(unsigned int)rimObsDeliverToExclusiveObservers(a2) )
  {
    if ( *((_BYTE *)a1 + 776) )
    {
      if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 || (v15 = (_QWORD *)((char *)a1 + 784), (_QWORD *)*v15 == v15) )
      {
        *((_BYTE *)a1 + 776) = 0;
        if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
          InputTraceLogging::RIM::ResumeDevice(a2);
        *((_DWORD *)a2 + 46) &= ~0x200u;
        if ( *((_BYTE *)a2 + 48) )
        {
          if ( *((_BYTE *)a2 + 48) == 1 )
          {
            rimProcessKeyboardInput(a1, a2);
          }
          else if ( *((_BYTE *)a2 + 48) == 2 )
          {
            rimProcessHidInput(a1, a2);
          }
          else
          {
            *((_BYTE *)a1 + 776) = 1;
            InputTraceLogging::RIM::DropInput(a2, 9LL);
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v23) = 0;
            }
            if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                v23,
                v24,
                (_DWORD)gRimLog,
                3,
                1,
                22,
                (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
                *((_BYTE *)a2 + 48));
            }
          }
        }
        else
        {
          rimProcessMouseInput(a1, a2);
        }
        rimSignalReadComplete(a1, a2);
        if ( *((_BYTE *)a2 + 48) <= 1u )
        {
          v18 = *((_DWORD *)a2 + 46);
          if ( (v18 & 0x2000) != 0 || (v18 & 0x40) != 0 )
            rimProcessInjectedDeviceBuffers(a1, a2);
        }
        if ( *((_BYTE *)a1 + 776) && !_bittest((const signed __int32 *)a2 + 46, 0xDu) && !v14 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v16) = 0;
          }
          if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v16,
              v17,
              (_DWORD)gRimLog,
              4,
              1,
              23,
              (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
              (char)a1,
              (char)a2);
          }
          DbgPrintGDI("FailSafeRead pRimObj(%p) pRimDev(%p)\n", a1, a2);
          goto LABEL_99;
        }
        return v32;
      }
    }
    else
    {
      v15 = (_QWORD *)((char *)a1 + 784);
    }
    if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
    {
      if ( v31 )
      {
        if ( !v13 )
        {
          InputTraceLogging::RIM::DropInput(a2, 6LL);
          if ( !_bittest((const signed __int32 *)a2 + 46, 0xDu)
            && *((_BYTE *)a2 + 48) <= 1u
            && (unsigned int)dword_1C02C93D8 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
          {
            LOBYTE(v30) = v27;
            v29[0] = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
              (unsigned int)&dword_1C02C93D8,
              (unsigned int)&unk_1C02981A3,
              v27,
              v28,
              (__int64)v29,
              (__int64)&v30);
          }
        }
      }
      if ( *((struct RIMDEV **)a2 + 13) == (struct RIMDEV *)((char *)a2 + 104) )
      {
        LODWORD(v30) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1310LL);
      }
    }
    else
    {
      InputTraceLogging::RIM::PauseDevice(a2);
      *((_DWORD *)a2 + 46) |= 0x200u;
      v25 = (_QWORD *)((char *)a2 + 104);
      if ( (_QWORD *)*v25 != v25 )
      {
        LODWORD(v30) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1287LL);
      }
      v26 = (_QWORD *)v15[1];
      if ( (_QWORD *)*v26 != v15 )
        __fastfail(3u);
      *v25 = v15;
      v25[1] = v26;
      *v26 = v25;
      v15[1] = v25;
    }
    return v32;
  }
  if ( !_bittest((const signed __int32 *)a2 + 46, 0xDu) && !v14 )
LABEL_99:
    RIMStartDeviceSpecificRead(a1, a2);
  return v32;
}
