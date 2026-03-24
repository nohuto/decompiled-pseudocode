/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C0175060
 * Callers:
 *     rimCompleteReads @ 0x1C0054548 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0056C40 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMInjectInput @ 0x1C0157080 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C0168A78 (RIMIDEInjectDeviceInput.c)
 *     RIMQueueKeyboardInput @ 0x1C016A30C (RIMQueueKeyboardInput.c)
 *     RIMQueueMouseInput @ 0x1C016A46C (RIMQueueMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016B830 (RIMIDE_InjectGenericHidInput.c)
 *     rimInputApc @ 0x1C01745D0 (rimInputApc.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01B3E5C (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0008140 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006AD98 (RIMStartDeviceSpecificRead.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00ACB34 (RimDeviceTypeToRimInputTypeString.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7F70 (rimFreeAutoRepeatCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012840C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013AA80 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01513E4 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0151478 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     rimIsPointerInputAllowed @ 0x1C01529B4 (rimIsPointerInputAllowed.c)
 *     RIMIsInputSuppressed @ 0x1C0166400 (RIMIsInputSuppressed.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0166784 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A5F4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0173020 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0173638 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0173AA0 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessHidInput @ 0x1C017566C (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C01757C8 (rimProcessInjectedDeviceBuffers.c)
 *     rimProcessKeyboardInput @ 0x1C0175C94 (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C0175D20 (rimProcessMouseInput.c)
 *     rimSignalReadComplete @ 0x1C0175E58 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01784F4 (RIMProcessAnyPointerDeviceInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C017EEF8 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01821B8 (RIMHandleTTMDeviceInput.c)
 *     ApiSetEtwTracePointerDeviceReadStart @ 0x1C01CE9F8 (ApiSetEtwTracePointerDeviceReadStart.c)
 *     ApiSetEtwTracePointerDeviceReadStop @ 0x1C01CEA8C (ApiSetEtwTracePointerDeviceReadStop.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  int v5; // edx
  char v6; // r12
  unsigned int v7; // r13d
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v9; // r11d
  int *v10; // rsi
  LARGE_INTEGER v11; // r14
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r11
  int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  int v27; // r15d
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  int v32; // edx
  int v33; // edx
  int v34; // eax
  char *v35; // rbx
  char *v36; // rdi
  char **v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v41; // [rsp+50h] [rbp-20h] BYREF
  const WCHAR *v42; // [rsp+58h] [rbp-18h] BYREF
  const WCHAR *v43; // [rsp+60h] [rbp-10h] BYREF
  const char *v44; // [rsp+68h] [rbp-8h] BYREF
  __int64 v45; // [rsp+B8h] [rbp+48h] BYREF
  char v46; // [rsp+C0h] [rbp+50h]
  __int64 v47; // [rsp+C8h] [rbp+58h] BYREF

  v46 = a3;
  v6 = 0;
  if ( (unsigned int)RIMIsInputSuppressed((__int64)a2) || (*((_DWORD *)a2 + 50) & 0x40) != 0 || !gbTtmEnabled )
    v7 = 0;
  else
    v7 = RIMHandleTTMDeviceInput(a2);
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v5, 1, 23, (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids, v7);
    }
    v7 = 0;
  }
  ++*((_DWORD *)a2 + 575);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = *((_DWORD *)a2 + 575);
  v10 = (int *)((char *)a2 + 2312);
  v11 = PerformanceCounter;
  v12 = 100 * (v9 / 0x64);
  if ( v9 == (_DWORD)v12 && (v13 = *v10) == 0
    || (v13 = *v10) != 0
    && (v12 = 600000 * gliQpcFreq.QuadPart,
        PerformanceCounter.QuadPart - *((_QWORD *)a2 + 288) >= 600000 * gliQpcFreq.QuadPart / 1000)
    && !(v9 % 0x64) )
  {
    v14 = v13;
    if ( (unsigned int)dword_1C0249170 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 0x400000000000LL) )
    {
      v17 = 0;
      if ( *((char *)a2 + 200) < 0 && (v18 = *((_QWORD *)a2 + 60)) != 0 )
        v19 = *(_DWORD *)(v18 + 720);
      else
        v19 = -1;
      LOBYTE(v17) = v15 == 0;
      LODWORD(v45) = v17;
      v20 = *((unsigned __int8 *)a2 + 48);
      v41 = v19;
      v47 = v16;
      v42 = RimDeviceTypeToRimInputTypeString((__int64)a2, v20);
      v43 = (const WCHAR *)*((_QWORD *)a2 + 27);
      v44 = "rimProcessDeviceBufferAndStartRead";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v21,
        byte_1C021BD79,
        v22,
        v23,
        (void **)&v44,
        &v43,
        &v42,
        (__int64)&v41,
        (__int64)&v47,
        (__int64)&v45);
      v14 = *v10;
    }
    if ( !v14 )
      *v10 = 1;
    *((LARGE_INTEGER *)a2 + 288) = v11;
  }
  if ( (unsigned int)dword_1C024AA90 > 5 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
  {
    v45 = (__int64)InputTraceLogging::RimDevTypeToString(*((unsigned __int8 *)a2 + 48));
    v47 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C024AA90,
      byte_1C021BCDC,
      v24,
      v25,
      (__int64)&v47,
      (void **)&v45);
  }
  v26 = *((_DWORD *)a2 + 46);
  v27 = -__CFSHR__(v26, 7);
  if ( *((_BYTE *)a2 + 48) < 2u )
  {
    if ( (v26 & 0x2000) != 0 || __CFSHR__(*((_DWORD *)a2 + 46), 7) )
    {
      v6 = 1;
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v12, (__int64)a2);
    }
  }
  else
  {
    if ( *((_BYTE *)a2 + 48) != 2 )
      return v7;
    if ( (v26 & 0x4000) == 0 && (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
    {
      if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
        && (*((_DWORD *)a2 + 50) & 0x80u) != 0
        && (unsigned int)rimIsPointerInputAllowed((__int64)a2) )
      {
        ApiSetEtwTracePointerDeviceReadStart();
        rimFreeAutoRepeatCompleteFrame((__int64)a2);
        RIMProcessAnyPointerDeviceInput(a1, a2);
        ApiSetEtwTracePointerDeviceReadStop();
      }
      v28 = *((_DWORD *)a2 + 46);
      if ( (v28 & 0x2000) == 0 && !v27 )
      {
        if ( (v28 & 0x200) != 0 )
        {
          LODWORD(v45) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1284);
        }
        goto LABEL_84;
      }
      return v7;
    }
  }
  if ( (unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2) )
  {
    if ( (*((_DWORD *)a2 + 46) & 0x2000) == 0 && !v27 )
LABEL_84:
      RIMStartDeviceSpecificRead((HANDLE *)a1, (__int64)a2);
  }
  else if ( *((_BYTE *)a1 + 584)
         && ((*((_DWORD *)a2 + 46) & 0x200) != 0
          || *((struct RawInputManagerObject **)a1 + 74) == (struct RawInputManagerObject *)((char *)a1 + 592)) )
  {
    *((_BYTE *)a1 + 584) = 0;
    v29 = *((_DWORD *)a2 + 46);
    if ( (v29 & 0x200) != 0 )
    {
      InputTraceLogging::RIM::ResumeDevice(a2);
      v29 = *((_DWORD *)a2 + 46);
    }
    v30 = *((unsigned __int8 *)a2 + 48);
    *((_DWORD *)a2 + 46) = v29 & 0xFFFFFDFF;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 == 1 )
        {
          rimProcessHidInput(a1, a2);
        }
        else
        {
          *((_BYTE *)a1 + 584) = 1;
          InputTraceLogging::RIM::DropInput((__int64)a2);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v32) = 3;
            WPP_RECORDER_SF_d(
              (_DWORD)gRimLog,
              v32,
              1,
              24,
              (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
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
      v34 = *((_DWORD *)a2 + 46);
      if ( (v34 & 0x2000) != 0 || (v34 & 0x40) != 0 )
        rimProcessInjectedDeviceBuffers(a1, a2);
    }
    if ( *((_BYTE *)a1 + 584) && (*((_DWORD *)a2 + 46) & 0x2000) == 0 && !v27 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v33,
          1,
          25,
          (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
          (char)a1,
          (char)a2);
      }
      DbgPrintGDI("FailSafeRead pRimObj(%p) pRimDev(%p)\n", a1, a2);
      goto LABEL_84;
    }
  }
  else if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    if ( v46 )
    {
      if ( !v6 )
      {
        InputTraceLogging::RIM::DropInput((__int64)a2);
        if ( (*((_DWORD *)a2 + 46) & 0x2000) == 0
          && *((_BYTE *)a2 + 48) <= 1u
          && (unsigned int)dword_1C0249250 > 5
          && tlgKeywordOn((__int64)&dword_1C0249250, 0x400000000000LL) )
        {
          LOBYTE(v45) = v38;
          v47 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
            (__int64)&dword_1C0249250,
            byte_1C021BD12,
            v38,
            v39,
            (__int64)&v47,
            (__int64)&v45);
        }
      }
    }
    if ( *((struct RIMDEV **)a2 + 13) == (struct RIMDEV *)((char *)a2 + 104) )
    {
      LODWORD(v45) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1249);
    }
  }
  else
  {
    InputTraceLogging::RIM::PauseDevice(a2);
    *((_DWORD *)a2 + 46) |= 0x200u;
    v35 = (char *)a2 + 104;
    if ( *(char **)v35 != v35 )
    {
      LODWORD(v45) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1226);
    }
    v36 = (char *)a1 + 592;
    v37 = (char **)*((_QWORD *)v36 + 1);
    if ( *v37 != v36 )
      __fastfail(3u);
    *(_QWORD *)v35 = v36;
    *((_QWORD *)v35 + 1) = v37;
    *v37 = v35;
    *((_QWORD *)v36 + 1) = v35;
  }
  return v7;
}
