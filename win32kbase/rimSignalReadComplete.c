/*
 * XREFs of rimSignalReadComplete @ 0x1C0003CE8
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 *     rimDispatchCompleteFrames @ 0x1C00F0B7C (rimDispatchCompleteFrames.c)
 * Callees:
 *     RIMIsInputSuppressed @ 0x1C0003F78 (RIMIsInputSuppressed.c)
 *     RIMArmWatchDog @ 0x1C000415C (RIMArmWatchDog.c)
 *     ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C00041CC (-ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0005090 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x1C0039F8C (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003A4AC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00EF4BE (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00EF92A (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C01C0BD4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C01D1E5C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@44@Z @ 0x1C01D1F08 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgW.c)
 */

void __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v3; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  char QuadPart; // al
  LARGE_INTEGER PerformanceCounter; // rax
  int v19; // edx
  int v20; // r8d
  int updated; // eax
  int v22; // r8d
  int v23; // r9d
  void *v24; // rdx
  LARGE_INTEGER v25; // rcx
  int v26; // r8d
  int v27; // r9d
  LARGE_INTEGER v28; // rcx
  int v29; // [rsp+28h] [rbp-31h]
  __int64 v30; // [rsp+60h] [rbp+7h] BYREF
  __int64 v31; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+70h] [rbp+17h] BYREF
  __int64 v33; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v34[2]; // [rsp+80h] [rbp+27h] BYREF
  __int64 v35; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v36; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = a2 + 25;
  if ( (unsigned int)RIMIsInputSuppressed(a2) && (v3->LowPart & 0x80u) == 0 )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        10,
        (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
        (char)a2,
        a2[2].QuadPart);
    }
    InputTraceLogging::RIM::DropInput(a2, 5LL);
    *((_BYTE *)a1 + 776) = 1;
    return;
  }
  if ( !*((_BYTE *)a1 + 776) )
  {
    v9 = SGDGetUserSessionState(v6, v5, v7, v8);
    RIMLockExclusive(v9 + 272);
    *((LARGE_INTEGER *)a1 + 113) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)a1 + 228) = 1;
    RIMArmWatchDog();
    v14 = SGDGetUserSessionState(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 280) = 0LL;
    ExReleasePushLockExclusiveEx(v14 + 272, 0LL);
    KeLeaveCriticalRegion();
    if ( (v3->LowPart & 0x80u) != 0 && *(_DWORD *)(a2[59].QuadPart + 24) != 7 )
    {
      v29 = 0;
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL);
      if ( updated < 0 )
      {
        LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (_DWORD)gRimLog,
            4,
            1,
            11,
            (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
            updated);
        }
      }
    }
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (_DWORD)gRimLog,
        4,
        v29,
        12,
        (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
        (char)a1,
        (char)a2,
        a2[2].QuadPart,
        *((_QWORD *)a1 + 105));
    }
    QuadPart = a2[6].QuadPart;
    if ( QuadPart )
    {
      if ( QuadPart == 2 )
      {
        if ( (v3->LowPart & 0x80u) == 0 )
        {
          if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
          {
            v28 = a2[58];
            LODWORD(v35) = *(unsigned __int16 *)(v28.QuadPart + 18);
            LODWORD(v36) = *(unsigned __int16 *)(v28.QuadPart + 16);
            v34[0] = a2[2].QuadPart;
            LODWORD(v30) = a2[33].LowPart;
            v33 = (__int64)a1;
            v32 = (__int64)a2;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1C02CA7E0,
              (unsigned int)&unk_1C029886E,
              v26,
              v27,
              (__int64)&v32,
              (__int64)&v33,
              (__int64)&v30,
              (__int64)v34,
              (__int64)&v36,
              (__int64)&v35);
          }
        }
        else if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
        {
          v25 = a2[58];
          LODWORD(v35) = *(unsigned __int16 *)(v25.QuadPart + 18);
          LODWORD(v36) = *(unsigned __int16 *)(v25.QuadPart + 16);
          v31 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(a2[59].QuadPart + 24));
          v32 = a2[2].QuadPart;
          LODWORD(v30) = a2[33].LowPart;
          v33 = (__int64)a1;
          v34[0] = (__int64)a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C02CA7E0,
            (__int64)v34,
            (__int64)&v33,
            (__int64)&v30,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v36,
            (__int64)&v35);
        }
        goto LABEL_13;
      }
      if ( (unsigned int)dword_1C02CA7E0 <= 4
        || QuadPart != 1
        || !(unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
      {
LABEL_13:
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        a2[282] = a2[283];
        a2[285] = a2[286];
        a2[284] = PerformanceCounter;
        InputTraceLogging::TelemetryDebug::RIM::ReadComplete(PerformanceCounter.QuadPart);
        a2[23].HighPart |= 8u;
        ZwSetEvent(*((HANDLE *)a1 + 105), 0LL);
        ZwClose(*((HANDLE *)a1 + 105));
        *((_QWORD *)a1 + 105) = 0LL;
        return;
      }
      v24 = &unk_1C0298943;
    }
    else
    {
      if ( (unsigned int)dword_1C02CA7E0 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
        goto LABEL_13;
      v24 = &unk_1C0298835;
    }
    LODWORD(v35) = a2[33].LowPart;
    v36 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C02CA7E0,
      (_DWORD)v24,
      v22,
      v23,
      (__int64)&v36,
      (__int64)&v35);
    goto LABEL_13;
  }
  InputTraceLogging::RIM::SkipReadComplete(a1, (const struct RIMDEV *)a2);
  LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v20,
      (_DWORD)gRimLog,
      4,
      1,
      13,
      (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
      (char)a2,
      a2[2].QuadPart);
  }
}
