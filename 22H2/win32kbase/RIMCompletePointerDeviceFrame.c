/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C019F844
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C440 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C018C2BC (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C018E494 (rimEndAllActiveContactsWorker.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01A7EF8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01A8348 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01A894C (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0058ABC (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C00E151C (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C00E1A7E (rimCountContactsToDeliverWithFrame.c)
 *     rimProcessCompleteFrame @ 0x1C00E28C0 (rimProcessCompleteFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C01A0478 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A0738 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimIsWakeablePointerFrame @ 0x1C01A0FB8 (rimIsWakeablePointerFrame.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x1C01A105C (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A11E0 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A75A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01A792C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(HANDLE *a1, LARGE_INTEGER *a2, unsigned int a3)
{
  unsigned int v3; // r15d
  LARGE_INTEGER *v4; // rdi
  __int64 QuadPart; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned int v10; // esi
  LARGE_INTEGER *v11; // rbx
  int v12; // edx
  int v13; // r8d
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  char v20; // dl
  unsigned int v22[18]; // [rsp+60h] [rbp-48h] BYREF
  LARGE_INTEGER *v23; // [rsp+B8h] [rbp+10h] BYREF
  int v24; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      52,
      (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids);
  QuadPart = v4[59].QuadPart;
  v7 = 0;
  LODWORD(v23) = 0;
  v22[0] = 0;
  v8 = *(_QWORD *)(QuadPart + 760);
  if ( v8 && *(_DWORD *)(v8 + 36) )
  {
    v24 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 921);
  }
  rimCountContactsToDeliverWithFrame(QuadPart, v22, &v23);
  v9 = v22[0];
  if ( v22[0] )
  {
    RIMUpdatePrimaryAndFinalizePointerFlags(a1, QuadPart);
    v10 = (unsigned int)v23;
    if ( (unsigned int)rimStorePointersInHoldingFrame(a1, v4, v9, (unsigned int)v23) )
    {
      v23 = 0LL;
      if ( (unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, v4, &v23) )
      {
        v11 = v23;
        v23[24].HighPart = v10;
        if ( (v4[23].LowPart & 0x2000) != 0 )
        {
          v11[4] = v4[3];
          v11[24].LowPart = 1;
        }
        InputTraceLogging::RIM::CompleteFrame((__int64)v4);
        rimProcessCompleteFrame(a1, v4, v11);
        v7 = 1;
        goto LABEL_46;
      }
      LODWORD(v23) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 948);
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_35:
        rimFindAndReclaimHoldingFrame(a1, v4, v10, v3);
        goto LABEL_46;
      }
      v15 = 53;
    }
    else
    {
      LODWORD(v23) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 955);
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v15 = 54;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      v12,
      v13,
      (_DWORD)gRimLog,
      4,
      1,
      v15,
      (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids);
    goto LABEL_35;
  }
  if ( (unsigned __int8)rimIsWakeablePointerFrame(QuadPart) )
    rimQueueUpdateInputGlolbalsAsyncWorkItem(a1, v4);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v17,
      (_DWORD)gRimLog,
      4,
      1,
      55,
      (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids);
  }
  v10 = (unsigned int)v23;
  rimFindAndReclaimHoldingFrame(a1, v4, (unsigned int)v23, v3);
LABEL_46:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v4, v7, 0LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v20 = 0;
  }
  if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v20,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x38u,
      (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids,
      v7,
      v10,
      v9);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v18) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v19) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v19) = 0;
  }
  if ( (_BYTE)v18 || (_BYTE)v19 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v18,
      v19,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      57,
      (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids);
  return v7;
}
