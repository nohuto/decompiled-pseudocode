/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C005187C
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C004EB98 (RIMObjectManagerCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     rimRemoveFromObTrackList @ 0x1C0051CC0 (rimRemoveFromObTrackList.c)
 *     rimFreeAllUserMem @ 0x1C00558AC (rimFreeAllUserMem.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00AC318 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00AC35C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00BBA6C (RIMFreeSpecificDevWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFreePointerRawDataListWorker @ 0x1C0172218 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C017E820 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C017EF40 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C017F394 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(_QWORD *a1)
{
  __int64 v1; // rdi
  int v2; // eax
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  int v11; // edx
  void *v12; // rcx
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  if ( ObGetObjectType(*a1) != ExRawInputManagerObjectType )
  {
    v13 = 0x20000;
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
        v6 = *(_QWORD *)(v1 + 424);
        if ( !v6 )
        {
          v13 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 235LL);
        }
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v13,
          (struct RIMLOCK *)(v6 + 104));
        RIMFreeSpecificDevWorker(v6, v1 + 88);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
        ObfDereferenceObject((PVOID)v6);
      }
    }
    else if ( v2 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
      {
        v13 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 254LL);
      }
      v4 = (_QWORD *)(v1 + 536);
      v5 = *(_QWORD **)(v1 + 536);
      while ( v5 != v4 )
      {
        v7 = v5;
        v5 = (_QWORD *)*v5;
        v8 = v7[9];
        if ( v8 )
          Win32FreePool(v8);
        rimFreePointerRawDataListWorker(v7[7]);
        v9 = *v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        Win32FreePool((__int64)v7);
      }
      if ( *(_QWORD *)(v1 + 424) )
      {
        v13 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 259LL);
      }
      if ( (_QWORD *)*v4 != v4 )
      {
        v13 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 260LL);
      }
      if ( *(_QWORD *)(v1 + 552) != v1 + 552 )
      {
        v13 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 261LL);
      }
      if ( *(_QWORD *)(v1 + 416) )
      {
        v13 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 265LL);
      }
      RIMLockExclusive(v1 + 568);
      rimFreeAllUserMem(v1);
      *(_QWORD *)(v1 + 576) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 568, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(v1 + 872) )
      {
        v13 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 271LL);
      }
      if ( *(_DWORD *)(v1 + 880) )
      {
        v13 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 272LL);
      }
      Win32FreePool(*(_QWORD *)(v1 + 872));
      *(_QWORD *)(v1 + 872) = 0LL;
    }
    else
    {
      if ( v2 != 3 )
      {
        v13 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 285LL);
      }
      rimRemoveFromObTrackList(v1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_q((_DWORD)gBaseLog, v11, 23, 10, (__int64)&WPP_f25a4ae4fc2a30e660934be3cfee1070_Traceguids, v1);
      }
      v12 = *(void **)(v1 + 80);
      if ( v12 != (void *)-1LL )
      {
        ZwClose(v12);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
