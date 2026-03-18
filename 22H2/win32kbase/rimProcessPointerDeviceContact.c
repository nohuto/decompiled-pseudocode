/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C01ABBB4
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01A8348 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAbIsDeviceArbitrationEnabled @ 0x1C00E0D20 (RIMAbIsDeviceArbitrationEnabled.c)
 *     rimApplyPointerDevicePolicies @ 0x1C00E2D30 (rimApplyPointerDevicePolicies.c)
 *     RIMCmIsContactSuppressed @ 0x1C00E35A6 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C00E35F8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmResetContactFrameState @ 0x1C00E3616 (RIMCmResetContactFrameState.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C00E3672 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C017E0B0 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C01863D8 (RIMAddToActiveDevices.c)
 *     rimFindOrCreateActiveContact @ 0x1C01AA5A8 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C01AAF94 (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C01B064C (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B0964 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmMarkSuppressedContactForDelivery @ 0x1C01B09FC (RIMCmMarkSuppressedContactForDelivery.c)
 */

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
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  int v23; // r14d
  int v24; // edx
  int v25; // r8d
  char v26; // dl
  char v27; // dl
  _DWORD *v28; // r15
  LARGE_INTEGER v29; // r12
  int v30; // eax
  PalmTelemetry *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int IsContactSuppressed; // eax
  int v37; // edi
  int v38; // ecx
  char v39; // dl
  char v40; // dl
  int v41; // [rsp+30h] [rbp-51h]
  __int64 v42; // [rsp+48h] [rbp-39h]
  int v43; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v44; // [rsp+7Ch] [rbp-5h] BYREF
  unsigned int v45; // [rsp+80h] [rbp-1h] BYREF
  unsigned int v46; // [rsp+84h] [rbp+3h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp+7h]
  __int64 v48; // [rsp+90h] [rbp+Fh] BYREF
  int v49; // [rsp+D0h] [rbp+4Fh] BYREF

  v8 = *(_QWORD *)(a2 + 456);
  v9 = *(_QWORD *)(a2 + 472);
  v49 = 0;
  v46 = 0;
  v12 = *(_QWORD *)(v8 + 16);
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v48 = 0LL;
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
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  v17 = a5;
  result = rimFindOrCreateActiveContact(v9, v12, (__int64)a3, a4, a5, &v49);
  v22 = result;
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
                 (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
    }
    v23 = -1073741823;
    goto LABEL_88;
  }
  if ( v49 )
  {
    if ( *(_DWORD *)(v9 + 1008) == 1 )
      RIMAddToActiveDevices(a1, v9, v20, v21);
  }
  else if ( (*(_DWORD *)(result + 2364) & 2) != 0 )
  {
    v27 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v27,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x16u,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
        *(_DWORD *)result);
    v23 = -1073741823;
LABEL_29:
    if ( !v49 )
    {
      result = (__int64)RIMCmResetContactFrameState((_DWORD *)v22);
      goto LABEL_88;
    }
    goto LABEL_30;
  }
  v23 = rimPopulateContactFrameData(a1, a2, a3, a4, v17, a6, v22, a7, &v46, &v45, &v44, &v43, &v48);
  if ( v23 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v26 = 0;
    }
    if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v42) = *(_DWORD *)v22;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v26,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x17u,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
        v42);
    }
    goto LABEL_29;
  }
  v28 = a7;
  if ( *a7 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v24) = 0;
    }
    if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v24,
        v25,
        (_DWORD)gRimLog,
        4,
        1,
        24,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
    }
    v29 = PerformanceCounter;
    goto LABEL_73;
  }
  v30 = v49;
  if ( v49 )
  {
    *(_DWORD *)(v22 + 64) = *(_DWORD *)(v22 + 2496);
    *(_QWORD *)(v22 + 72) = *(_QWORD *)(v22 + 2512);
    *(_QWORD *)(v22 + 80) = *(_QWORD *)(v22 + 2472);
    v30 = v49;
  }
  v31 = *(PalmTelemetry **)(a1 + 1048);
  if ( v31 )
    PalmTelemetry::Update(v31, (struct tagHID_POINTER_DEVICE_INFO *)v9, (struct tagHPD_CONTACT *)v22, v30);
  rimApplyPointerDevicePolicies(v9, v22, v49, v46, v45, v44, v43, v48);
  if ( (*(_DWORD *)(v22 + 32) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 84) & 4) == 0 )
    {
      LODWORD(a7) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 402);
    }
    v29 = PerformanceCounter;
    *(LARGE_INTEGER *)(a1 + 800) = PerformanceCounter;
  }
  else
  {
    v29 = PerformanceCounter;
  }
  *(_QWORD *)(v22 + 88) = *(_QWORD *)(v22 + 2472);
  if ( !*(_QWORD *)(v22 + 56) && (*(_DWORD *)(v22 + 2684) & 4) == 0 && (*(_DWORD *)(v22 + 2444) & 4) != 0 )
    *(LARGE_INTEGER *)(v22 + 56) = v29;
  if ( !RIMAbIsDeviceArbitrationEnabled(v33, v32, v34, v35) && (*(_DWORD *)(v22 + 8) & 1) != 0 )
  {
    LODWORD(a7) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 426);
  }
  IsContactSuppressed = RIMCmIsContactSuppressed(v22);
  if ( IsContactSuppressed && *(_DWORD *)(v9 + 24) == 7 && *(_DWORD *)(v22 + 8) == 16 )
  {
    v37 = 1;
    goto LABEL_71;
  }
  v37 = 0;
  if ( !IsContactSuppressed
    || (unsigned int)RIMCmIsContactDeliveringPointerData(v22)
    || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v22) )
  {
LABEL_71:
    *(_DWORD *)(v22 + 2364) |= 1u;
    if ( v37 )
      RIMCmMarkSuppressedContactForDelivery(v22);
    goto LABEL_73;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v39 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v39 = 0;
  }
  if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dDD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v39,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      25LL,
      4u,
      v41,
      0x19u,
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
LABEL_73:
  *a8 = v49;
  if ( *v28 )
  {
LABEL_30:
    result = RIMCmDeactivateContact(v9, v22);
    goto LABEL_88;
  }
  *(_DWORD *)(v22 + 2352) = *(_DWORD *)(v22 + 2444);
  *(LARGE_INTEGER *)(v22 + 48) = v29;
  v38 = *(_DWORD *)(v9 + 24);
  if ( (unsigned int)(v38 - 1) > 3 )
  {
    result = (unsigned int)(v38 - 5);
    if ( (unsigned int)result <= 1 )
    {
      result = *(unsigned int *)(v22 + 2528);
      *(_DWORD *)(v22 + 2360) = result;
    }
  }
  else
  {
    result = *(unsigned int *)(v22 + 2528);
    *(_DWORD *)(v22 + 2356) = result;
  }
LABEL_88:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) == 0)
    || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v40 = 0;
  }
  if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v42) = v23;
    return WPP_RECORDER_AND_TRACE_SF_d(
             (__int64)WPP_GLOBAL_Control->AttachedDevice,
             v40,
             WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
             (__int64)gRimLog,
             4u,
             1u,
             0x1Au,
             (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
             v42);
  }
  return result;
}
