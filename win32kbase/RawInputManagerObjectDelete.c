/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C00361E4
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C00360B4 (RIMObjectManagerCallout.c)
 * Callees:
 *     RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C0032BB8 (RIMDeleteAllAsyncPnpWorkNotificationItems.c)
 *     rimFreeAllUserMem @ 0x1C0032BE8 (rimFreeAllUserMem.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0032C40 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0033950 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0034C6C (RIMFreeSpecificDevWorker.c)
 *     rimRemoveFromObTrackList @ 0x1C0038270 (rimRemoveFromObTrackList.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFreePointerRawDataListWorker @ 0x1C01CE29C (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C01DC754 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C01DD448 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C01DD4D4 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  int v3; // eax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rdx
  void *v12; // rdx
  struct _KTHREAD **v13; // rbx
  __int64 v14; // rdi
  void *v15; // rsi
  void *v16; // rdx
  _QWORD *v17; // rcx
  void **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // edx
  void *v22; // rcx
  int v23; // [rsp+90h] [rbp+40h] BYREF
  char v24; // [rsp+98h] [rbp+48h] BYREF

  v1 = *a1;
  if ( ObGetObjectType(*a1) != ExRawInputManagerObjectType )
  {
    v23 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 212LL);
  }
  v2 = 1;
  if ( *(_BYTE *)(v1 + 8) == 1 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    if ( v3 == 2 )
    {
      rimRemoveFromObTrackList(v1);
      if ( !*(_BYTE *)(v1 + 9) )
      {
        v13 = *(struct _KTHREAD ***)(v1 + 408);
        v14 = (v1 + 72) & -(__int64)(v1 != 0);
        if ( !v13 )
        {
          v23 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 235LL);
        }
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v24, v13 + 13);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v23, v13 + 95);
        RIMFreeSpecificDevWorker((__int64)v13, v14);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v23);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v24);
        ObfDereferenceObject(v13);
      }
    }
    else if ( v3 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
      }
      v5 = (_QWORD *)(v1 + 728);
      v6 = *(_QWORD **)(v1 + 728);
      while ( v6 != v5 )
      {
        v15 = v6;
        v6 = (_QWORD *)*v6;
        v16 = (void *)*((_QWORD *)v15 + 9);
        if ( v16 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
        rimFreePointerRawDataListWorker(*((void **)v15 + 7));
        v17 = *(_QWORD **)v15;
        v18 = (void **)*((_QWORD *)v15 + 1);
        if ( *(void **)(*(_QWORD *)v15 + 8LL) != v15 || *v18 != v15 )
          __fastfail(3u);
        *v18 = v17;
        v17[1] = v18;
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
      }
      if ( *(_QWORD *)(v1 + 424) )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 260LL);
      }
      if ( (_QWORD *)*v5 != v5 )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 261LL);
      }
      if ( *(_QWORD *)(v1 + 744) != v1 + 744 )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 262LL);
      }
      if ( *(_QWORD *)(v1 + 416) )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 265LL);
      }
      v7 = *(void **)(v1 + 368);
      if ( v7 != (void *)-1LL )
      {
        ZwClose(v7);
        *(_QWORD *)(v1 + 368) = -1LL;
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v23,
          (struct _KTHREAD **)(v1 + 352));
        RIMDeleteAllAsyncPnpWorkNotificationItems(v1);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v23);
      }
      RIMLockExclusive(v1 + 760);
      rimFreeAllUserMem((struct _RTL_AVL_TABLE *)v1, v8, v9, v10);
      *(_QWORD *)(v1 + 768) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 760, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(v1 + 1064) )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
      }
      if ( *(_DWORD *)(v1 + 1072) )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 283LL);
      }
      v11 = *(void **)(v1 + 1064);
      if ( v11 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
      *(_QWORD *)(v1 + 1064) = 0LL;
      if ( !*(_QWORD *)(v1 + 1096) )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 290LL);
      }
      if ( *(_DWORD *)(v1 + 1104) )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 291LL);
      }
      v12 = *(void **)(v1 + 1096);
      if ( v12 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v12);
      *(_QWORD *)(v1 + 1096) = 0LL;
    }
    else
    {
      if ( v3 != 3 )
      {
        v23 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 305LL);
      }
      rimRemoveFromObTrackList(v1);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v2 = 0;
      }
      LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 10;
        LOBYTE(v21) = v2;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v20,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          10,
          (__int64)&WPP_37e9039bb5423a5f62244424f52bc182_Traceguids,
          v1);
      }
      v22 = *(void **)(v1 + 80);
      if ( v22 != (void *)-1LL )
      {
        ZwClose(v22);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1, v19, v20);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
