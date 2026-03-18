/*
 * XREFs of rimObsPushInputMessage @ 0x1C01B5084
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C01B3FC8 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimObsCopyMessage @ 0x1C01B3E58 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // r12
  char v6; // di
  int v7; // ecx
  unsigned int v8; // r14d
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  char *v10; // rbp
  int v11; // eax
  PVOID v12; // rbp
  unsigned int v13; // r13d
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 Pool2; // rbx
  char v17; // r15
  __int64 *v18; // rax
  int v19; // edx
  char v21; // [rsp+20h] [rbp-F8h]
  __int16 v22; // [rsp+30h] [rbp-E8h]
  char v23; // [rsp+40h] [rbp-D8h]
  PVOID BackTrace[20]; // [rsp+50h] [rbp-C8h] BYREF

  v3 = (__int64)a2;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = a1 + 144;
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      10,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
      a1);
  }
  if ( *(_DWORD *)(a1 + 160) >= *(_DWORD *)(a1 + 168) )
  {
    v7 = *(_DWORD *)(a1 + 164);
    if ( v7 != -1 )
      *(_DWORD *)(a1 + 164) = ++v7;
    v8 = -1073741756;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = v7;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
      v22 = 11;
      v21 = 3;
LABEL_62:
      LOBYTE(a2) = v6;
      WPP_RECORDER_AND_TRACE_SF_D(
        (_DWORD)AttachedDevice,
        (_DWORD)a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v21,
        23,
        v22,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
        v23);
      return v8;
    }
    return v8;
  }
  v10 = 0LL;
  if ( *(_QWORD *)(v3 + 24) > 0xFFFFFFBFuLL )
  {
    v8 = -1073741675;
    goto LABEL_63;
  }
  v11 = *(_DWORD *)(v3 + 24);
  v12 = gpLeakTrackingAllocator;
  v13 = v11 + 48;
  v14 = (unsigned int)(v11 + 64);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x716D4F52) != 0x716D4F52
    || (v15 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_29:
    Pool2 = ExAllocatePool2(260LL, v14);
    goto LABEL_30;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 1902989138 )
  {
    if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_29;
  }
  v17 = 0;
  if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
  {
    v17 = 1;
    v14 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v14);
  if ( !Pool2 )
    goto LABEL_39;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v17 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v12,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      v10 = (char *)Pool2;
      goto LABEL_46;
    }
LABEL_49:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_39:
    v10 = 0LL;
LABEL_31:
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        23,
        12,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
    }
    v8 = -1073741670;
    goto LABEL_63;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v12,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_49;
  Pool2 += 16LL;
LABEL_30:
  v10 = (char *)Pool2;
  if ( !Pool2 )
    goto LABEL_31;
LABEL_46:
  v8 = rimObsCopyMessage(v3, 0LL, (void **)(Pool2 + 16), v13);
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_63:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v6;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        14,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
    }
    if ( v10 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v10);
    return v8;
  }
  v18 = *(__int64 **)(a1 + 152);
  if ( *v18 != v5 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v5;
  *(_QWORD *)(Pool2 + 8) = v18;
  *v18 = Pool2;
  *(_QWORD *)(a1 + 152) = Pool2;
  v19 = *(_DWORD *)(a1 + 160) + 1;
  *(_DWORD *)(a1 + 160) = v19;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    v23 = v19;
    a2 = &WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids;
    v22 = 13;
    v21 = 4;
    goto LABEL_62;
  }
  return v8;
}
