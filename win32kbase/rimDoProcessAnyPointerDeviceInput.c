void __fastcall rimDoProcessAnyPointerDeviceInput(struct RawInputManagerObject *a1, LARGE_INTEGER *a2)
{
  int v3; // edx
  int v4; // r8d
  LARGE_INTEGER v5; // rax
  LARGE_INTEGER v6; // rbx
  unsigned int LowPart; // esi
  __int64 v8; // r12
  __int64 v9; // r15
  unsigned int v10; // r13d
  char v11; // di
  LARGE_INTEGER PerformanceCounter; // rbx
  int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // r8d
  int v17; // r9d
  void *v18; // rdx
  struct RawInputManagerObject *v19; // rsi
  int v20; // edx
  int v21; // r8d
  PDEVICE_OBJECT v22; // rcx
  __int16 v23; // ax
  unsigned int v24; // esi
  unsigned int v25; // r12d
  unsigned __int16 v26; // r13
  int v27; // eax
  int v28; // eax
  __int64 v29; // r8
  bool v30; // zf
  unsigned int v31; // [rsp+50h] [rbp-39h] BYREF
  int v32; // [rsp+54h] [rbp-35h] BYREF
  int v33; // [rsp+5Ch] [rbp-2Dh] BYREF
  _DWORD v34[3]; // [rsp+60h] [rbp-29h] BYREF
  int v35; // [rsp+6Ch] [rbp-1Dh] BYREF
  __int64 v36; // [rsp+70h] [rbp-19h]
  LARGE_INTEGER v37; // [rsp+78h] [rbp-11h]
  __int64 v38; // [rsp+80h] [rbp-9h]
  __int64 *v39; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v40[10]; // [rsp+90h] [rbp+7h] BYREF
  int v42; // [rsp+F8h] [rbp+6Fh] BYREF
  int v43; // [rsp+100h] [rbp+77h]
  int v44; // [rsp+108h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v39, "ProcessPointerInput", 0LL);
  v5 = a2[57];
  v6 = a2[59];
  LowPart = a2[33].LowPart;
  v37 = v6;
  v8 = *(_QWORD *)(v5.QuadPart + 24);
  v9 = *(unsigned __int16 *)(v5.QuadPart + 44);
  v36 = v8;
  v10 = 0;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v3) = 0;
  }
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      (_DWORD)gRimLog,
      4,
      1,
      14,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
  if ( !*(_QWORD *)(v6.QuadPart + 784) )
  {
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 129);
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v14 = LowPart % (unsigned int)v9;
  if ( !(LowPart % (unsigned int)v9) )
  {
    v15 = LowPart / (unsigned int)v9;
    if ( !(LowPart / (unsigned int)v9) )
      goto LABEL_12;
    goto LABEL_22;
  }
  if ( LowPart <= (unsigned int)v9 )
  {
    v15 = 1;
LABEL_22:
    v19 = a1;
    v38 = v15;
    while ( 1 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v40,
        "ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v39);
      v33 = 0;
      LOWORD(v42) = 0;
      v44 = 0;
      v31 = 0;
      v32 = 0;
      v35 = 0;
      v34[0] = 0;
      v43 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  (int)v19,
                  (__int64)a2,
                  v8,
                  v9,
                  &v44,
                  &v31,
                  &v32,
                  &v35,
                  v34,
                  &v42) >= 0 )
      {
        if ( !v32 )
          goto LABEL_56;
        rimUpdatePointerDeviceFrameScanTime((__int64)a2, v8, v9);
        if ( v44 )
        {
          if ( (unsigned int)RIMStartPointerDeviceFrame((__int64)v19, (__int64)a2, PerformanceCounter.QuadPart) )
          {
            if ( *(_DWORD *)(v37.QuadPart + 24) == 7 )
              rimProcessPointerDeviceButtonContact((_DWORD)v19, (_DWORD)a2, v8, v9, 0);
LABEL_56:
            RIMStoreRawDataInPointerDeviceFrame((__int64)v19, (__int64)a2, v8, v9, &v33);
            v24 = v31;
            v25 = 0;
            if ( v31 )
            {
              v26 = v42;
              do
              {
                v42 = 0;
                v31 = 0;
                rimProcessPointerDeviceContact((_DWORD)a1, (_DWORD)a2, v36, v9, v26, v33, (__int64)&v42, (__int64)&v31);
                if ( v34[0] && v42 )
                {
                  v10 = v43;
                  v28 = 1;
                  goto LABEL_73;
                }
                v27 = v43;
                if ( v31 )
                  v27 = 1;
                v43 = v27;
                if ( (*(_DWORD *)(v37.QuadPart + 360) & 2) != 0 )
                {
                  v26 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v37.QuadPart + 760) + 24LL) + 8LL * v26 + 4);
                }
                else
                {
                  if ( v44 != 1 )
                  {
                    v34[1] = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 263);
                  }
                  if ( v24 != 1 )
                  {
                    v34[2] = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 264);
                  }
                }
                ++v25;
              }
              while ( v25 < v24 );
              v10 = v43;
            }
            v28 = v35;
LABEL_73:
            v19 = a1;
            if ( v28 )
            {
              rimProcessMissingPointerDeviceContacts(a1, a2, v10);
              RIMAbArbitratePointerDeviceFrame(a1, (__int64)a2, v29);
              RIMCompletePointerDeviceFrame((HANDLE *)a1, a2, 0);
            }
            v8 = v36;
LABEL_76:
            v10 = 0;
            goto LABEL_77;
          }
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v10 = 0;
            LOBYTE(v20) = 0;
          }
          else
          {
            LOBYTE(v20) = 1;
            v10 = 0;
          }
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_77;
          v23 = 18;
        }
        else
        {
          if ( *(_DWORD *)(v37.QuadPart + 24) == 7 )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(v19, a2, v8, v9, PerformanceCounter.QuadPart);
            goto LABEL_76;
          }
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v10 = 0;
            LOBYTE(v20) = 0;
          }
          else
          {
            LOBYTE(v20) = 1;
            v10 = 0;
          }
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_77;
          v23 = 17;
        }
      }
      else
      {
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v10 = 0;
          LOBYTE(v20) = 0;
        }
        else
        {
          LOBYTE(v20) = 1;
          v10 = 0;
        }
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_77;
        v23 = 16;
      }
      WPP_RECORDER_AND_TRACE_SF_(
        v22->AttachedDevice,
        v20,
        v21,
        (_DWORD)gRimLog,
        4,
        1,
        v23,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
LABEL_77:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v40);
      v8 += v9;
      v30 = v38-- == 1;
      v36 = v8;
      if ( v30 )
        goto LABEL_12;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v13,
      (_DWORD)gRimLog,
      4,
      1,
      15,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
      LowPart,
      v9);
  }
LABEL_12:
  KeQueryPerformanceCounter(0LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = &WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids;
    LOBYTE(v18) = v11;
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_i(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v18, v16, v17, 4);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v39);
}
