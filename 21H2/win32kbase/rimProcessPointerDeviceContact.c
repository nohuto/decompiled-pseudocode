/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C01B2140
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimApplyPointerDevicePolicies @ 0x1C00E70E4 (rimApplyPointerDevicePolicies.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C0189090 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C018F660 (RIMAddToActiveDevices.c)
 *     rimFindOrCreateActiveContact @ 0x1C01B0D78 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C01B1588 (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C01B6684 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B6928 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01B6984 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmResetContactFrameState @ 0x1C01B6A90 (RIMCmResetContactFrameState.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C01B7174 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        int a6,
        _DWORD *a7,
        int *a8)
{
  __int64 v8; // rax
  __int64 v9; // r15
  char *v11; // r14
  __int64 v12; // rsi
  struct _HIDP_PREPARSED_DATA *v13; // rbx
  unsigned __int16 v15; // r12
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  char v20; // si
  int v21; // r14d
  int v22; // eax
  _DWORD *v23; // r12
  PalmTelemetry *v24; // rcx
  unsigned __int128 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  bool v28; // zf
  int IsContactSuppressed; // eax
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  int v34; // ecx
  int v35; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-15h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v38; // [rsp+7Ch] [rbp-Dh] BYREF
  __int64 v39[8]; // [rsp+80h] [rbp-9h] BYREF
  int v40; // [rsp+D8h] [rbp+4Fh] BYREF
  char *v41; // [rsp+E0h] [rbp+57h]

  v41 = a3;
  v8 = *(_QWORD *)(a2 + 456);
  v9 = *(_QWORD *)(a2 + 472);
  v11 = a3;
  v40 = 0;
  v12 = a2;
  v38 = 0;
  v13 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v39[0] = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      20,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  v15 = a5;
  result = rimFindOrCreateActiveContact(v9, v13, v11, a4, a5, &v40);
  v19 = result;
  if ( !result )
  {
    LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      result = WPP_RECORDER_AND_TRACE_SF_(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v17,
                 v18,
                 (_DWORD)gRimLog,
                 4,
                 1,
                 21,
                 (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
    v20 = 1;
    goto LABEL_93;
  }
  v21 = v40;
  if ( v40 )
  {
    if ( *(_DWORD *)(v9 + 1008) == 1 )
      RIMAddToActiveDevices(a1, v9);
  }
  else if ( (*(_DWORD *)(result + 2340) & 2) != 0 )
  {
    LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v18,
        (_DWORD)gRimLog,
        4,
        1,
        22,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
        *(_DWORD *)result);
    }
    v20 = 1;
    goto LABEL_36;
  }
  v22 = rimPopulateContactFrameData(a1, v12, v41, a4, v15, a6, v19, a7, &v38, &v37, &v36, &v35, v39);
  v20 = v22;
  if ( v22 < 0 )
  {
    LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v18,
        (_DWORD)gRimLog,
        4,
        1,
        23,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
        *(_DWORD *)v19);
    }
    if ( v21 )
      goto LABEL_42;
LABEL_36:
    result = RIMCmResetContactFrameState(v19);
    goto LABEL_93;
  }
  v23 = a7;
  if ( *a7 )
  {
    LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v18,
        (_DWORD)gRimLog,
        4,
        1,
        24,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
    goto LABEL_77;
  }
  if ( v21 )
  {
    *(_DWORD *)(v19 + 48) = *(_DWORD *)(v19 + 2472);
    *(_QWORD *)(v19 + 56) = *(_QWORD *)(v19 + 2488);
    *(_QWORD *)(v19 + 64) = *(_QWORD *)(v19 + 2448);
  }
  v24 = *(PalmTelemetry **)(a1 + 1080);
  if ( v24 )
    PalmTelemetry::Update(v24, (struct tagHID_POINTER_DEVICE_INFO *)v9, (struct tagHPD_CONTACT *)v19, v21);
  rimApplyPointerDevicePolicies(v9, v19, v21, v38, v37, v36, v35, v39[0]);
  if ( (*(_DWORD *)(v19 + 32) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 84) & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, *((_QWORD *)&v25 + 1), v27);
    v21 = v40;
    v26 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v25 = v26 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    *(_QWORD *)(a1 + 832) = *((_QWORD *)&v25 + 1);
  }
  v28 = *(_DWORD *)(v19 + 52) == 0;
  *(_QWORD *)(v19 + 72) = *(_QWORD *)(v19 + 2448);
  if ( v28 && (*(_DWORD *)(v19 + 2660) & 4) == 0 && (*(_DWORD *)(v19 + 2420) & 4) != 0 )
  {
    v21 = v40;
    v26 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(v19 + 52) = v26;
  }
  if ( !gDeviceArbitrationType && (*(_DWORD *)(v19 + 8) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, *((_QWORD *)&v25 + 1), 0xFFFFF78000000004uLL);
  IsContactSuppressed = RIMCmIsContactSuppressed(v19);
  if ( IsContactSuppressed && *(_DWORD *)(v9 + 24) == 7 && *(_DWORD *)(v19 + 8) == 16 )
  {
    v31 = 1;
    goto LABEL_71;
  }
  v31 = 0;
  if ( !IsContactSuppressed
    || (unsigned int)RIMCmIsContactDeliveringPointerData(v19)
    || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v19) )
  {
LABEL_71:
    *(_DWORD *)(v19 + 2340) |= 1u;
    if ( v31 )
    {
      if ( (*(_DWORD *)(v19 + 32) & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v17, v18);
      if ( !(unsigned int)RIMCmIsContactSuppressed(v19) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v17, v18);
      *(_DWORD *)(v19 + 2420) |= 0x2000000u;
    }
    goto LABEL_77;
  }
  LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dDD(WPP_GLOBAL_Control->AttachedDevice, v17, v18, 25, 4);
  }
LABEL_77:
  v28 = *v23 == 0;
  *a8 = v21;
  if ( !v28 )
  {
LABEL_42:
    result = RIMCmDeactivateContact(v9, v19);
    goto LABEL_93;
  }
  v33 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v19 + 2328) = *(_DWORD *)(v19 + 2420);
  *(_DWORD *)(v19 + 44) = v33;
  v34 = *(_DWORD *)(v9 + 24);
  if ( (unsigned int)(v34 - 1) > 3 )
  {
    result = (unsigned int)(v34 - 5);
    if ( (unsigned int)result <= 1 )
    {
      result = *(unsigned int *)(v19 + 2504);
      *(_DWORD *)(v19 + 2336) = result;
    }
  }
  else
  {
    result = *(unsigned int *)(v19 + 2504);
    *(_DWORD *)(v19 + 2332) = result;
  }
LABEL_93:
  LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return WPP_RECORDER_AND_TRACE_SF_D(
             WPP_GLOBAL_Control->AttachedDevice,
             v17,
             v18,
             (_DWORD)gRimLog,
             4,
             1,
             26,
             (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
             v20);
  }
  return result;
}
