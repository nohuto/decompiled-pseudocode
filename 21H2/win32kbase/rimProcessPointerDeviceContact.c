/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C017C828
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01796B8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C015A86C (WPP_RECORDER_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C015B8CC (RIMAddToActiveDevices.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0179080 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x1C017B6C0 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C017BE68 (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C01801B0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01803F4 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0180440 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0180494 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmMarkSuppressedContactForDelivery @ 0x1C0180500 (RIMCmMarkSuppressedContactForDelivery.c)
 *     RIMCmResetContactFrameState @ 0x1C0180688 (RIMCmResetContactFrameState.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C0180A14 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        int a6,
        _DWORD *a7,
        int *a8)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v12; // r14
  struct _HIDP_PREPARSED_DATA *v13; // rbx
  __int64 result; // rax
  int v16; // edx
  __int64 v17; // rbx
  int v18; // r14d
  int v19; // esi
  _DWORD *v20; // rax
  PalmTelemetry *QuadPart; // rcx
  int IsContactSuppressed; // eax
  int v23; // r15d
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // [rsp+30h] [rbp-51h]
  __int64 v29; // [rsp+38h] [rbp-49h]
  __int64 v30; // [rsp+40h] [rbp-41h]
  int v31; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v32; // [rsp+7Ch] [rbp-5h] BYREF
  unsigned int v33; // [rsp+80h] [rbp-1h] BYREF
  unsigned int v34; // [rsp+84h] [rbp+3h] BYREF
  __int64 v35; // [rsp+88h] [rbp+7h] BYREF
  int v36; // [rsp+D0h] [rbp+4Fh] BYREF

  v8 = *(_QWORD *)(a2 + 464);
  v9 = *(_QWORD *)(a2 + 480);
  v36 = 0;
  v12 = a2;
  v34 = 0;
  v13 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v35 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 20, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  result = rimFindOrCreateActiveContact(v9, v13, a3, a4, a5, &v36);
  v17 = result;
  if ( !result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      result = WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 21, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    }
    LOBYTE(v18) = 1;
    goto LABEL_18;
  }
  v19 = v36;
  if ( v36 )
  {
    if ( *(_DWORD *)(v9 + 952) == 1 )
      RIMAddToActiveDevices(a1, v9);
  }
  else if ( (*(_DWORD *)(result + 2340) & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        v16,
        1,
        22,
        (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
        *(_DWORD *)result);
    }
    LOBYTE(v18) = 1;
    goto LABEL_17;
  }
  v18 = rimPopulateContactFrameData((__int64)a1, v12, a3, a4, a5, a6, v17, a7, &v34, &v33, &v32, &v31, &v35);
  v16 = 800;
  if ( v18 >= 0 )
  {
    v20 = a7;
    if ( *a7 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_53;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 24, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    }
    else
    {
      if ( v19 )
      {
        *(_DWORD *)(v17 + 48) = *(_DWORD *)(v17 + 2472);
        *(_QWORD *)(v17 + 56) = *(_QWORD *)(v17 + 2488);
        *(_QWORD *)(v17 + 64) = *(_QWORD *)(v17 + 2448);
      }
      QuadPart = (PalmTelemetry *)a1[107].QuadPart;
      if ( QuadPart )
        PalmTelemetry::Update(QuadPart, (struct tagHID_POINTER_DEVICE_INFO *)v9, (struct tagHPD_CONTACT *)v17, v19);
      rimApplyPointerDevicePolicies(v9, (_DWORD *)v17, v19, v34, v33, v32, v31, v35);
      if ( (*(_DWORD *)(v17 + 32) & 0x20) != 0 )
      {
        if ( (a1[10].HighPart & 4) == 0 )
        {
          v34 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 401);
        }
        v19 = v36;
        a1[76].QuadPart = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      }
      *(_QWORD *)(v17 + 72) = *(_QWORD *)(v17 + 2448);
      if ( !*(_DWORD *)(v17 + 52) && (*(_DWORD *)(v17 + 2660) & 4) == 0 && (*(_DWORD *)(v17 + 2420) & 4) != 0 )
      {
        v19 = v36;
        *(_DWORD *)(v17 + 52) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      }
      if ( !gDeviceArbitrationType && (*(_DWORD *)(v17 + 8) & 1) != 0 )
      {
        v36 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 425);
      }
      IsContactSuppressed = RIMCmIsContactSuppressed(v17);
      if ( !IsContactSuppressed || *(_DWORD *)(v9 + 24) != 7 || (v23 = 1, *(_DWORD *)(v17 + 8) != 16) )
        v23 = 0;
      if ( !IsContactSuppressed
        || v23
        || (unsigned int)RIMCmIsContactDeliveringPointerData(v17)
        || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v17) )
      {
        *(_DWORD *)(v17 + 2340) |= 1u;
        if ( v23 )
          RIMCmMarkSuppressedContactForDelivery(v17);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = *(_DWORD *)(v17 + 2660);
        LODWORD(v29) = *(_DWORD *)(v17 + 8);
        LODWORD(v28) = *(_DWORD *)v17;
        WPP_RECORDER_SF_dDD(
          v24,
          4u,
          v25,
          0x19u,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v28,
          v29,
          v30);
      }
    }
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_d(
      (_DWORD)gRimLog,
      v16,
      1,
      23,
      (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
      *(_DWORD *)v17);
LABEL_51:
    v16 = 800;
  }
  v20 = a7;
LABEL_53:
  if ( v18 < 0 )
  {
    if ( v19 )
      goto LABEL_60;
LABEL_17:
    result = RIMCmResetContactFrameState(v17);
    goto LABEL_18;
  }
  *a8 = v19;
  if ( *v20 )
  {
LABEL_60:
    result = RIMCmDeactivateContact(v9, v17);
    goto LABEL_18;
  }
  v26 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v17 + 2328) = *(_DWORD *)(v17 + 2420);
  *(_DWORD *)(v17 + 44) = v26;
  v27 = *(_DWORD *)(v9 + 24);
  if ( (unsigned int)(v27 - 1) > 3 )
  {
    result = (unsigned int)(v27 - 5);
    if ( (unsigned int)result <= 1 )
    {
      result = *(unsigned int *)(v17 + 2504);
      *(_DWORD *)(v17 + 2336) = result;
    }
  }
  else
  {
    result = *(unsigned int *)(v17 + 2504);
    *(_DWORD *)(v17 + 2332) = result;
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    return WPP_RECORDER_SF_d(
             (_DWORD)gRimLog,
             v16,
             1,
             26,
             (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
             v18);
  }
  return result;
}
