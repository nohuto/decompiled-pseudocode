/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C01714F4
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01595D0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C015D0D0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FBFC (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0179434 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01796B8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0179BD0 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0043D04 (WPP_RECORDER_SF_ddd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C016FAC4 (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0172054 (rimCountContactsToDeliverWithFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C01721B4 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0172298 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0172AA8 (rimStorePointersInHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x1C0175028 (rimProcessCompleteFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017896C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0178CF4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, unsigned int a3)
{
  struct RIMDEV *v4; // rbx
  __int64 v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // edx
  unsigned int v10; // r15d
  unsigned int v11; // esi
  __int64 v12; // rdi
  int v13; // edx
  int v14; // r9d
  int v15; // edx
  int v16; // edx
  _DWORD v18[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A8h] [rbp+20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      1,
      53,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
  }
  v6 = *((_QWORD *)v4 + 60);
  v7 = 0;
  LODWORD(v19) = 0;
  v18[0] = 0;
  v8 = *(_QWORD *)(v6 + 712);
  if ( v8 && *(_DWORD *)(v8 + 36) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 897);
  }
  rimCountContactsToDeliverWithFrame(v6, v18, &v19);
  v10 = v18[0];
  if ( !v18[0] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 56, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    }
    v11 = v19;
    goto LABEL_21;
  }
  RIMUpdatePrimaryAndFinalizePointerFlags(a1, v6);
  v11 = v19;
  if ( !(unsigned int)rimStorePointersInHoldingFrame(a1, v4, v10, (unsigned int)v19) )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 931);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v14 = 55;
    goto LABEL_15;
  }
  v19 = 0LL;
  if ( !(unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, v4, &v19) )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 924);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_21:
      rimFindAndReclaimHoldingFrame(a1, v4, v11, a3);
      goto LABEL_22;
    }
    v14 = 54;
LABEL_15:
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, v14, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    goto LABEL_21;
  }
  v12 = v19;
  *(_DWORD *)(v19 + 84) = v11;
  if ( (*((_DWORD *)v4 + 46) & 0x2000) != 0 )
  {
    *(_QWORD *)(v12 + 32) = *((_QWORD *)v4 + 3);
    *(_DWORD *)(v12 + 80) = 1;
  }
  InputTraceLogging::RIM::CompleteFrame((__int64)v4, v12, a3);
  rimProcessCompleteFrame(a1, v4);
  v7 = 1;
LABEL_22:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v4, v7, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_ddd(
      (_DWORD)gRimLog,
      v15,
      1,
      57,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      v7,
      v11,
      v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v16) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          1,
          58,
          (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
      }
    }
  }
  return v7;
}
