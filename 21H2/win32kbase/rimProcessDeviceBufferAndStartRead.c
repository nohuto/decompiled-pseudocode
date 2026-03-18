/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C0003B78
 * Callers:
 *     RIMQueueKeyboardInput @ 0x1C0003AA8 (RIMQueueKeyboardInput.c)
 *     rimCompleteReads @ 0x1C0044C40 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00483F8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C00C06F0 (rimInputApc.c)
 *     RIMInjectInput @ 0x1C01849A0 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C019D008 (RIMIDEInjectDeviceInput.c)
 *     RIMQueueMouseInput @ 0x1C019EB98 (RIMQueueMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C01A0020 (RIMIDE_InjectGenericHidInput.c)
 * Callees:
 *     rimProcessInjectedDeviceBuffers @ 0x1C0003D68 (rimProcessInjectedDeviceBuffers.c)
 *     rimSignalReadComplete @ 0x1C0003DB8 (rimSignalReadComplete.c)
 *     RIMIsInputSuppressed @ 0x1C0004020 (RIMIsInputSuppressed.c)
 *     rimProcessKeyboardInput @ 0x1C00040D0 (rimProcessKeyboardInput.c)
 *     rimObsDeliverToExclusiveObservers @ 0x1C000415C (rimObsDeliverToExclusiveObservers.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C00042B8 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1C00077DC (rimObsDeliverToNonExclusiveObservers.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMStartDeviceSpecificRead @ 0x1C004AF3C (RIMStartDeviceSpecificRead.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004DC2C (RimDeviceTypeToRimInputTypeString.c)
 *     rimProcessMouseInput @ 0x1C00E6E90 (rimProcessMouseInput.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0152794 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0167EA0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C017E584 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C017E618 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     rimIsPointerInputAllowed @ 0x1C017F788 (rimIsPointerInputAllowed.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C019A278 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C019A7B0 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01A8380 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01A8D4C (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessHidInput @ 0x1C01A99EC (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01ADB64 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01B81A8 (RIMHandleTTMDeviceInput.c)
 *     ApiSetEtwTracePointerDeviceReadStart @ 0x1C020CA04 (ApiSetEtwTracePointerDeviceReadStart.c)
 *     ApiSetEtwTracePointerDeviceReadStop @ 0x1C020CB24 (ApiSetEtwTracePointerDeviceReadStop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  unsigned int v5; // r13d
  int v6; // edx
  int v7; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v9; // r11d
  int *v10; // rsi
  LARGE_INTEGER v11; // r14
  LONGLONG v12; // rcx
  int v13; // r9d
  int v14; // eax
  int v15; // r15d
  char v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // r8d
  int v25; // eax
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // r11
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  int v35; // edx
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  char *v40; // rbx
  char *v41; // rdi
  char **v42; // rax
  int v43; // r9d
  __int64 v44; // [rsp+B8h] [rbp+48h] BYREF
  char v45; // [rsp+C0h] [rbp+50h]
  __int64 v46; // [rsp+C8h] [rbp+58h] BYREF

  v45 = a3;
  if ( (unsigned int)RIMIsInputSuppressed(a2) || (*((_DWORD *)a2 + 50) & 0x40) != 0 || !gbTtmEnabled )
  {
LABEL_4:
    v5 = 0;
    goto LABEL_6;
  }
  v5 = RIMHandleTTMDeviceInput(a2);
  if ( (v5 & 0x80000000) != 0 )
  {
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        21,
        (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
        v5);
    }
    goto LABEL_4;
  }
LABEL_6:
  ++*((_DWORD *)a2 + 577);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = *((_DWORD *)a2 + 577);
  v10 = (int *)((char *)a2 + 2320);
  v11 = PerformanceCounter;
  v12 = 100 * (v9 / 0x64);
  if ( v9 == (_DWORD)v12 && (v13 = *v10) == 0
    || (v13 = *v10) != 0
    && (v12 = 600000 * gliQpcFreq.QuadPart,
        PerformanceCounter.QuadPart - *((_QWORD *)a2 + 289) >= 600000 * gliQpcFreq.QuadPart / 1000)
    && !(v9 % 0x64) )
  {
    v27 = v13;
    if ( (unsigned int)dword_1C028D610 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C028D610, 0x400000000000LL) )
    {
      v46 = v29;
      LODWORD(v44) = v28 == 0;
      RimDeviceTypeToRimInputTypeString(a2, *((unsigned __int8 *)a2 + 48));
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v30,
        &unk_1C025EB1F);
      v27 = *v10;
    }
    if ( !v27 )
      *v10 = 1;
    *((LARGE_INTEGER *)a2 + 289) = v11;
  }
  if ( (unsigned int)dword_1C028EE70 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 256LL) )
  {
    v44 = (__int64)InputTraceLogging::RimDevTypeToString(*((unsigned __int8 *)a2 + 48));
    v46 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C028EE70,
      (__int64)&v46,
      (__int64)&v44);
  }
  v14 = *((_DWORD *)a2 + 46);
  v15 = -__CFSHR__(v14, 7);
  v16 = 0;
  if ( *((_BYTE *)a2 + 48) >= 2u )
  {
    if ( *((_BYTE *)a2 + 48) != 2 )
      return v5;
    if ( (v14 & 0x10000) == 0 && (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
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
      v34 = *((_DWORD *)a2 + 46);
      if ( (v34 & 0x2000) == 0 && !v15 )
      {
        if ( (v34 & 0x200) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
        goto LABEL_101;
      }
      return v5;
    }
  }
  else if ( (v14 & 0x2000) != 0 || __CFSHR__(*((_DWORD *)a2 + 46), 7) )
  {
    v16 = 1;
    RIMTransferInjectionDeviceDataFifoToDataBuffer(v12, a2);
  }
  if ( (unsigned int)rimObsDeliverToExclusiveObservers(a2) )
  {
    if ( !_bittest((const signed __int32 *)a2 + 46, 0xDu) && !v15 )
LABEL_101:
      RIMStartDeviceSpecificRead(a1, a2);
  }
  else if ( *((_BYTE *)a1 + 808)
         && ((*((_DWORD *)a2 + 46) & 0x200) != 0
          || *((struct RawInputManagerObject **)a1 + 102) == (struct RawInputManagerObject *)((char *)a1 + 816)) )
  {
    *((_BYTE *)a1 + 808) = 0;
    v20 = *((_DWORD *)a2 + 46);
    if ( (v20 & 0x200) != 0 )
    {
      InputTraceLogging::RIM::ResumeDevice(a2);
      v20 = *((_DWORD *)a2 + 46);
    }
    v21 = *((unsigned __int8 *)a2 + 48);
    *((_DWORD *)a2 + 46) = v20 & 0xFFFFFDFF;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          rimProcessHidInput(a1, a2);
        }
        else
        {
          *((_BYTE *)a1 + 808) = 1;
          InputTraceLogging::RIM::DropInput(a2, 9LL);
          LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v35,
              v36,
              (_DWORD)gRimLog,
              3,
              1,
              22,
              (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
              *((_BYTE *)a2 + 48));
          }
        }
      }
      else
      {
        rimProcessKeyboardInput(a1, a2);
      }
    }
    else
    {
      rimProcessMouseInput(a1, a2);
    }
    rimSignalReadComplete(a1, a2);
    if ( *((_BYTE *)a2 + 48) <= 1u )
    {
      v25 = *((_DWORD *)a2 + 46);
      if ( (v25 & 0x2000) != 0 || (v25 & 0x40) != 0 )
        rimProcessInjectedDeviceBuffers(a1, a2);
    }
    if ( *((_BYTE *)a1 + 808) && !_bittest((const signed __int32 *)a2 + 46, 0xDu) && !v15 )
    {
      LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qq(
          WPP_GLOBAL_Control->AttachedDevice,
          v23,
          v24,
          (_DWORD)gRimLog,
          4,
          1,
          23,
          (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
          (char)a1,
          (char)a2);
      }
      DbgPrintGDI("FailSafeRead pRimObj(%p) pRimDev(%p)\n", a1, a2);
      goto LABEL_101;
    }
  }
  else if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    if ( v45 )
    {
      if ( !v16 )
      {
        InputTraceLogging::RIM::DropInput(a2, 6LL);
        if ( !_bittest((const signed __int32 *)a2 + 46, 0xDu) )
        {
          LOBYTE(v19) = *((_BYTE *)a2 + 48);
          if ( (unsigned __int8)v19 <= 1u
            && (unsigned int)dword_1C028D6F0 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL) )
          {
            LOBYTE(v44) = v19;
            v46 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
              (unsigned int)&dword_1C028D6F0,
              (unsigned int)&unk_1C025EAAA,
              v19,
              v43,
              (__int64)&v46,
              (__int64)&v44);
          }
        }
      }
    }
    if ( *((struct RIMDEV **)a2 + 13) == (struct RIMDEV *)((char *)a2 + 104) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
  }
  else
  {
    InputTraceLogging::RIM::PauseDevice(a2);
    *((_DWORD *)a2 + 46) |= 0x200u;
    v40 = (char *)a2 + 104;
    if ( *(char **)v40 != v40 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
    v41 = (char *)a1 + 816;
    v42 = (char **)*((_QWORD *)v41 + 1);
    if ( *v42 != v41 )
      __fastfail(3u);
    *(_QWORD *)v40 = v41;
    *((_QWORD *)v40 + 1) = v42;
    *v42 = v40;
    *((_QWORD *)v41 + 1) = v40;
  }
  return v5;
}
