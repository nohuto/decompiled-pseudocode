/*
 * XREFs of RIMOnDisplayStateChange @ 0x1C0043F38
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C009F3EC (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMGetQDCActivePathsData @ 0x1C009FA90 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C009FE04 (RIMFreeQDCActivePathsData.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0198794 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01990C8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall RIMOnDisplayStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v4; // rbx
  void *v5; // r9
  __int64 v6; // r12
  struct _LIST_ENTRY *Flink; // rcx
  PVOID v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 Pool2; // rdi
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // r14
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rbp
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rdi
  __int64 i; // rbx
  int v24; // edx
  int v25; // r8d
  _UNKNOWN **result; // rax
  __int64 v27; // rax
  char v28; // bl
  __int128 v29; // [rsp+40h] [rbp-C8h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B8h] BYREF

  v3 = 0LL;
  LODWORD(v4) = 0;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v5 = &WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      79,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v29 = 0LL;
  v6 = RIMGetQDCActivePathsData(&v29, a2, a3, v5);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      if ( !BYTE1(Flink[4].Flink) && !LOBYTE(Flink[4].Flink) )
        LODWORD(v4) = v4 + 1;
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimList );
    if ( (_DWORD)v4 )
    {
      v8 = gpLeakTrackingAllocator;
      v9 = 8LL * (unsigned int)v4;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D707352) == 0x6D707352 )
      {
        v27 = 0LL;
        if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v27) != 1836086098 )
          {
            if ( ++v27 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_14;
          }
          v28 = 0;
          if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
          {
            v28 = 1;
            v9 += 16LL;
          }
          Pool2 = ExAllocatePool2(260LL, v9);
          if ( Pool2 )
          {
            memset(BackTrace, 0, sizeof(BackTrace));
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v28 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v8,
                                      Pool2,
                                      BackTrace) )
              {
                Pool2 += 16LL;
LABEL_15:
                LODWORD(v4) = 0;
                v3 = (__int64 *)Pool2;
                if ( !Pool2 )
                  goto LABEL_22;
                goto LABEL_16;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v8,
                                         Pool2,
                                         BackTrace) )
            {
              v3 = (__int64 *)Pool2;
LABEL_16:
              v11 = gObRimList.Flink;
              v4 = 0LL;
              while ( v11 != &gObRimList )
              {
                v12 = v11 - 1;
                if ( !BYTE1(v11[4].Flink) && !LOBYTE(v12[5].Flink) )
                {
                  *(_QWORD *)(Pool2 + 8 * v4) = v12;
                  v4 = (unsigned int)(v4 + 1);
                }
                v11 = v11->Flink;
              }
              goto LABEL_22;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
          }
          v3 = 0LL;
          LODWORD(v4) = 0;
          goto LABEL_22;
        }
      }
LABEL_14:
      Pool2 = ExAllocatePool2(260LL, v9);
      goto LABEL_15;
    }
  }
LABEL_22:
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v4 )
  {
    v16 = v3;
    v17 = (unsigned int)v4;
    do
    {
      if ( !v3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
      v18 = *v16;
      v19 = *v16 + 104;
      RIMLockExclusive(v19);
      if ( *(_BYTE *)(v18 + 81) )
      {
        LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v20,
            v21,
            (_DWORD)gRimLog,
            3,
            1,
            80,
            (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
        }
      }
      else
      {
        v22 = v18 + 792;
        RIMLockExclusive(v18 + 792);
        for ( i = *(_QWORD *)(v18 + 424); i; i = *(_QWORD *)(i + 40) )
        {
          if ( *(_BYTE *)(i + 48) == 2 )
          {
            if ( *(_DWORD *)(i + 1336) )
              rimFindMonitorForDigitizerWithQDCData(i, v6, 0LL);
            if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 || *(_DWORD *)(i + 1336) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)i, *(struct tagHID_POINTER_DEVICE_INFO **)(i + 472));
          }
        }
        *(_QWORD *)(v22 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v22, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v19 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v19, 0LL);
      KeLeaveCriticalRegion();
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
  RIMFreeQDCActivePathsData(v6);
  LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v24,
                          v25,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          81,
                          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  return result;
}
