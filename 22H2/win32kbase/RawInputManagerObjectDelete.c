/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C007267C
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C007254C (RIMObjectManagerCallout.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     rimFreeAllUserMem @ 0x1C006F060 (rimFreeAllUserMem.c)
 *     RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C006F0B8 (RIMDeleteAllAsyncPnpWorkNotificationItems.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006F118 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006FBD8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0071424 (RIMFreeSpecificDevWorker.c)
 *     rimRemoveFromObTrackList @ 0x1C00736B0 (rimRemoveFromObTrackList.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFreePointerRawDataListWorker @ 0x1C01A06B4 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C01AE5E0 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C01AF294 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C01AF320 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rdi
  int v2; // eax
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rdx
  void *v10; // rdx
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rdi
  void *v13; // rsi
  void *v14; // rdx
  _QWORD *v15; // rcx
  void **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  void *v19; // rcx
  int v20; // [rsp+90h] [rbp+40h] BYREF
  char v21; // [rsp+98h] [rbp+48h] BYREF

  v1 = *a1;
  if ( ObGetObjectType(*a1) != ExRawInputManagerObjectType )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 212LL);
  }
  if ( *(_BYTE *)(v1 + 8) == 1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    if ( v2 == 2 )
    {
      rimRemoveFromObTrackList(v1);
      if ( !*(_BYTE *)(v1 + 9) )
      {
        v11 = *(struct _KTHREAD ***)(v1 + 408);
        v12 = (v1 + 72) & -(__int64)(v1 != 0);
        if ( !v11 )
        {
          v20 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 235LL);
        }
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v21, v11 + 13);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v20, v11 + 95);
        RIMFreeSpecificDevWorker((__int64)v11, v12);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v20);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v21);
        ObfDereferenceObject(v11);
      }
    }
    else if ( v2 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
      }
      v4 = (_QWORD *)(v1 + 728);
      v5 = *(_QWORD **)(v1 + 728);
      while ( v5 != v4 )
      {
        v13 = v5;
        v5 = (_QWORD *)*v5;
        v14 = (void *)*((_QWORD *)v13 + 9);
        if ( v14 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
        rimFreePointerRawDataListWorker(*((void **)v13 + 7));
        v15 = *(_QWORD **)v13;
        v16 = (void **)*((_QWORD *)v13 + 1);
        if ( *(void **)(*(_QWORD *)v13 + 8LL) != v13 || *v16 != v13 )
          __fastfail(3u);
        *v16 = v15;
        v15[1] = v16;
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
      }
      if ( *(_QWORD *)(v1 + 424) )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 260LL);
      }
      if ( (_QWORD *)*v4 != v4 )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 261LL);
      }
      if ( *(_QWORD *)(v1 + 744) != v1 + 744 )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 262LL);
      }
      if ( *(_QWORD *)(v1 + 416) )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 265LL);
      }
      v6 = *(void **)(v1 + 368);
      if ( v6 != (void *)-1LL )
      {
        ZwClose(v6);
        *(_QWORD *)(v1 + 368) = -1LL;
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v20,
          (struct _KTHREAD **)(v1 + 352));
        RIMDeleteAllAsyncPnpWorkNotificationItems(v1);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v20);
      }
      RIMLockExclusive(v1 + 760);
      rimFreeAllUserMem((struct _RTL_AVL_TABLE *)v1, v7, v8);
      *(_QWORD *)(v1 + 768) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 760, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(v1 + 1064) )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
      }
      if ( *(_DWORD *)(v1 + 1072) )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 283LL);
      }
      v9 = *(void **)(v1 + 1064);
      if ( v9 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
      *(_QWORD *)(v1 + 1064) = 0LL;
      if ( !*(_QWORD *)(v1 + 1096) )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 290LL);
      }
      if ( *(_DWORD *)(v1 + 1104) )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 291LL);
      }
      v10 = *(void **)(v1 + 1096);
      if ( v10 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
      *(_QWORD *)(v1 + 1096) = 0LL;
    }
    else
    {
      if ( v2 != 3 )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 305LL);
      }
      rimRemoveFromObTrackList(v1);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v17) = 0;
      }
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          1,
          10,
          (__int64)&WPP_6832ca80c0e73ca15a3f4898c055c9e9_Traceguids,
          v1);
      v19 = *(void **)(v1 + 80);
      if ( v19 != (void *)-1LL )
      {
        ZwClose(v19);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1, v17, v18);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
