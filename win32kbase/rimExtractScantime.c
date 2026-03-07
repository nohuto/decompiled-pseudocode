void __fastcall rimExtractScantime(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  __int64 v6; // rdi
  unsigned int v8; // edx
  int v9; // r8d
  int v10; // r8d
  _DWORD *v11; // rsi
  _QWORD *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  int v17; // r14d
  int v18; // r9d
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // r8d
  unsigned int v22; // ebx
  unsigned __int64 v23; // r8
  int v24[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v25; // [rsp+90h] [rbp+30h] BYREF

  v6 = a1 + 832;
  ++*(_DWORD *)(a1 + 856);
  v25 = 0;
  if ( (int)rimHidP_GetUsageValue(0LL, 13LL, 0LL, 86LL, (__int64)&v25, a2, a3, a4) < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (_DWORD)gRimLog,
        2,
        1,
        68,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    }
    goto LABEL_59;
  }
  v10 = *(_DWORD *)(v6 + 24);
  if ( v10 != 1 )
  {
    if ( (*(_DWORD *)(v6 + 48) & 1) == 0 )
    {
      v14 = *(_DWORD *)(v6 + 12);
      v8 = v14 % *(_DWORD *)(a1 + 888);
      if ( v25 < v8 )
        ++*(_DWORD *)(v6 + 28);
      v15 = v25 + *(_DWORD *)(v6 + 28) * *(_DWORD *)(a1 + 888);
      if ( v15 <= v14 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v10,
            (_DWORD)gRimLog,
            4,
            1,
            65,
            (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
        }
        *(_DWORD *)(v6 + 48) |= 1u;
      }
      else
      {
        *(_DWORD *)(v6 + 12) = v15;
        v16 = v15 - *(_DWORD *)(v6 + 16);
        v24[0] = 0;
        if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v16, v10 - 1, 1, v24) )
        {
          v17 = v24[0];
          if ( !v24[0] )
          {
            v24[0] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3342);
          }
          *(_DWORD *)(v6 + 20) = v17;
        }
      }
    }
    if ( (*(_DWORD *)(v6 + 48) & 1) == 0 )
      goto LABEL_60;
    v18 = *(_DWORD *)(v6 + 20);
    if ( v18 && *(_DWORD *)(v6 + 24) >= 5u )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v10,
          (_DWORD)gRimLog,
          4,
          1,
          66,
          (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
          v18);
      }
      *(_DWORD *)(v6 + 12) += *(_DWORD *)(v6 + 20);
      goto LABEL_60;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v10,
        (_DWORD)gRimLog,
        4,
        1,
        67,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
        80);
    }
LABEL_59:
    *(_DWORD *)(v6 + 12) += 80;
LABEL_60:
    v12 = a5;
    v11 = a6;
    goto LABEL_61;
  }
  if ( *(_DWORD *)v6 )
  {
    v24[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3307);
  }
  if ( *(_DWORD *)(v6 + 24) != 1 )
  {
    v24[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3308);
  }
  if ( *(_DWORD *)(v6 + 8) )
  {
    v24[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3309);
  }
  if ( *(_DWORD *)(v6 + 4) )
  {
    v24[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3310);
  }
  if ( *(_DWORD *)(v6 + 12) )
  {
    v24[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3311);
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    v24[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3312);
  }
  if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
  {
    v24[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3313);
  }
  v11 = a6;
  v12 = a5;
  *(_DWORD *)v6 = *a6;
  *(_QWORD *)(v6 + 40) = *v12;
  v13 = v25;
  *(_DWORD *)(v6 + 12) = v25;
  *(_DWORD *)(v6 + 16) = v13;
LABEL_61:
  if ( *(_DWORD *)(v6 + 24) > 1u )
  {
    v19 = *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 16);
    v24[0] = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v19, 0xAu, 0, v24) )
    {
      v22 = v24[0];
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v20) = 0;
      }
      v22 = 8;
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          (_DWORD)gRimLog,
          4,
          1,
          69,
          (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
          8);
      }
    }
    v23 = gliQpcFreq.QuadPart * v22;
    *v11 = v22 + *(_DWORD *)v6;
    *v12 = *(_QWORD *)(v6 + 40) + v23 / 0x3E8;
  }
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v6 + 4) = *a6;
  *(_QWORD *)(v6 + 32) = *a5;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v6);
}
