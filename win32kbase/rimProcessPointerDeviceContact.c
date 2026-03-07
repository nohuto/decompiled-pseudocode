__int64 __fastcall rimProcessPointerDeviceContact(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        int a4,
        unsigned __int16 a5,
        int a6,
        _DWORD *a7,
        int *a8)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v12; // rbx
  int v15; // edx
  int v16; // r8d
  unsigned __int16 v17; // r15
  __int64 result; // rax
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rbx
  char v22; // r14
  int v23; // eax
  _DWORD *v24; // r15
  LARGE_INTEGER v25; // r12
  int v26; // eax
  PalmTelemetry *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int IsContactSuppressed; // eax
  int v33; // edi
  int v34; // ecx
  int v35; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v36; // [rsp+7Ch] [rbp-5h] BYREF
  unsigned int v37; // [rsp+80h] [rbp-1h] BYREF
  unsigned int v38; // [rsp+84h] [rbp+3h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp+7h]
  __int64 v40; // [rsp+90h] [rbp+Fh] BYREF
  int v41; // [rsp+D0h] [rbp+4Fh] BYREF

  v8 = *(_QWORD *)(a2 + 456);
  v9 = *(_QWORD *)(a2 + 472);
  v41 = 0;
  v38 = 0;
  v12 = *(_QWORD *)(v8 + 16);
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v40 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v16,
      (_DWORD)gRimLog,
      4,
      1,
      20,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  v17 = a5;
  result = rimFindOrCreateActiveContact(v9, v12, (__int64)a3, a4, a5, &v41);
  v21 = result;
  if ( !result )
  {
    LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      result = WPP_RECORDER_AND_TRACE_SF_(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v19,
                 v20,
                 (_DWORD)gRimLog,
                 4,
                 1,
                 21,
                 (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    }
    v22 = 1;
    goto LABEL_88;
  }
  if ( v41 )
  {
    if ( *(_DWORD *)(v9 + 1008) == 1 )
      RIMAddToActiveDevices(a1, v9);
  }
  else if ( (*(_DWORD *)(result + 2364) & 2) != 0 )
  {
    LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        (_DWORD)gRimLog,
        4,
        1,
        22,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
        *(_DWORD *)result);
    }
    v22 = 1;
LABEL_29:
    if ( !v41 )
    {
      result = (__int64)RIMCmResetContactFrameState((_DWORD *)v21);
      goto LABEL_88;
    }
    goto LABEL_30;
  }
  v23 = rimPopulateContactFrameData(a1, a2, a3, a4, v17, a6, v21, a7, &v38, &v37, &v36, &v35, &v40);
  v22 = v23;
  if ( v23 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        (_DWORD)gRimLog,
        4,
        1,
        23,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
        *(_DWORD *)v21);
    }
    goto LABEL_29;
  }
  v24 = a7;
  if ( *a7 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v20,
        (_DWORD)gRimLog,
        4,
        1,
        24,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    }
    v25 = PerformanceCounter;
    goto LABEL_73;
  }
  v26 = v41;
  if ( v41 )
  {
    *(_DWORD *)(v21 + 64) = *(_DWORD *)(v21 + 2496);
    *(_QWORD *)(v21 + 72) = *(_QWORD *)(v21 + 2512);
    *(_QWORD *)(v21 + 80) = *(_QWORD *)(v21 + 2472);
    v26 = v41;
  }
  v27 = *(PalmTelemetry **)(a1 + 1048);
  if ( v27 )
    PalmTelemetry::Update(v27, (struct tagHID_POINTER_DEVICE_INFO *)v9, (struct tagHPD_CONTACT *)v21, v26);
  rimApplyPointerDevicePolicies(v9, v21, v41, v38, v37, v36, v35, v40);
  if ( (*(_DWORD *)(v21 + 32) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 84) & 4) == 0 )
    {
      LODWORD(a7) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 414);
    }
    v25 = PerformanceCounter;
    *(LARGE_INTEGER *)(a1 + 800) = PerformanceCounter;
  }
  else
  {
    v25 = PerformanceCounter;
  }
  *(_QWORD *)(v21 + 88) = *(_QWORD *)(v21 + 2472);
  if ( !*(_QWORD *)(v21 + 56) && (*(_DWORD *)(v21 + 2684) & 4) == 0 && (*(_DWORD *)(v21 + 2444) & 4) != 0 )
    *(LARGE_INTEGER *)(v21 + 56) = v25;
  if ( !RIMAbIsDeviceArbitrationEnabled(v29, v28, v30, v31) && (*(_DWORD *)(v21 + 8) & 1) != 0 )
  {
    LODWORD(a7) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 438);
  }
  IsContactSuppressed = RIMCmIsContactSuppressed(v21);
  if ( IsContactSuppressed && *(_DWORD *)(v9 + 24) == 7 && *(_DWORD *)(v21 + 8) == 16 )
  {
    v33 = 1;
    goto LABEL_71;
  }
  v33 = 0;
  if ( !IsContactSuppressed
    || (unsigned int)RIMCmIsContactDeliveringPointerData(v21)
    || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v21) )
  {
LABEL_71:
    *(_DWORD *)(v21 + 2364) |= 1u;
    if ( v33 )
      RIMCmMarkSuppressedContactForDelivery(v21);
    goto LABEL_73;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dDD(WPP_GLOBAL_Control->AttachedDevice, v19, v20, 25, 4);
  }
LABEL_73:
  *a8 = v41;
  if ( *v24 )
  {
LABEL_30:
    result = RIMCmDeactivateContact(v9, v21);
    goto LABEL_88;
  }
  *(_DWORD *)(v21 + 2352) = *(_DWORD *)(v21 + 2444);
  *(LARGE_INTEGER *)(v21 + 48) = v25;
  v34 = *(_DWORD *)(v9 + 24);
  if ( (unsigned int)(v34 - 1) > 3 )
  {
    result = (unsigned int)(v34 - 5);
    if ( (unsigned int)result <= 1 )
    {
      result = *(unsigned int *)(v21 + 2528);
      *(_DWORD *)(v21 + 2360) = result;
    }
  }
  else
  {
    result = *(unsigned int *)(v21 + 2528);
    *(_DWORD *)(v21 + 2356) = result;
  }
LABEL_88:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) == 0)
    || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return WPP_RECORDER_AND_TRACE_SF_d(
             WPP_GLOBAL_Control->AttachedDevice,
             v19,
             v20,
             (_DWORD)gRimLog,
             4,
             1,
             26,
             (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
             v22);
  }
  return result;
}
