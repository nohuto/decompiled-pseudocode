/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01E52F4
 * Callers:
 *     AddPalmRejectionDelayZone @ 0x1C01E7134 (AddPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0093F40 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01F7D94 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagRECT *a3,
        void *a4,
        struct tagRECT *a5,
        int a6)
{
  __int64 v9; // r8
  unsigned int v10; // r12d
  struct CompositionInputObject *v11; // r15
  struct CompositionInputObject *v12; // r14
  char v13; // di
  int v14; // edx
  PVOID v15; // rsi
  __int64 v16; // rax
  __int64 Pool2; // rbx
  struct tagRECT *v18; // rax
  struct tagRECT *v19; // rsi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+48h] [rbp-B8h]
  struct tagRECT v31; // [rsp+50h] [rbp-B0h] BYREF
  PERESOURCE *v32[8]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[26]; // [rsp+A0h] [rbp-60h] BYREF
  struct CompositionInputObject *v34; // [rsp+180h] [rbp+80h] BYREF
  struct CompositionInputObject *v35; // [rsp+188h] [rbp+88h] BYREF
  struct tagRECT *v36; // [rsp+190h] [rbp+90h]

  v36 = a3;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v32,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v13 = 1;
  if ( a2 )
  {
    LOBYTE(v9) = 1;
    v14 = CompositionInputObject::ResolveHandle(a2, 1LL, v9, &v34);
    if ( v14 < 0 )
      goto LABEL_14;
    v11 = v34;
  }
  if ( a4 )
  {
    LOBYTE(v9) = 1;
    v14 = CompositionInputObject::ResolveHandle(a4, 1LL, v9, &v35);
    if ( v14 < 0 )
      goto LABEL_14;
    v12 = v35;
  }
  v15 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7A647355) == 0x7A647355
    && (v16 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 2053403477 )
    {
      if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_11;
    }
    Pool2 = ExAllocatePool2(260LL, 120LL);
    if ( !Pool2 )
      goto LABEL_13;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v15,
             Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_24;
      }
      goto LABEL_32;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v15,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_32:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_13;
    }
    Pool2 += 16LL;
  }
  else
  {
LABEL_11:
    Pool2 = ExAllocatePool2(260LL, 104LL);
  }
  if ( !Pool2 )
  {
LABEL_13:
    v14 = -1073741801;
LABEL_14:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v13 = 0;
    }
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = v14;
      LOBYTE(v14) = v13;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        8,
        25,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
        v29);
    }
    goto LABEL_47;
  }
LABEL_24:
  if ( v11 )
    ObReferenceObjectByPointer(v11, 3u, ExCompositionObjectType, 0);
  if ( v12 )
    ObReferenceObjectByPointer(v12, 3u, ExCompositionObjectType, 0);
  v18 = a5;
  v19 = v36;
  *(_QWORD *)(Pool2 + 72) = v11;
  *(_QWORD *)(Pool2 + 80) = v12;
  *(struct tagRECT *)(Pool2 + 24) = *v19;
  *(struct tagRECT *)(Pool2 + 40) = *v18;
  *(_QWORD *)(Pool2 + 16) = KeGetCurrentThread();
  if ( a6 )
    v20 = *(_DWORD *)(*((_QWORD *)gptiCurrent + 53) + 56LL);
  else
    v20 = 0;
  *(_DWORD *)(Pool2 + 64) = v20;
  v10 = *((_DWORD *)this + 22);
  v21 = v10 + 1;
  if ( v10 == -1 )
    v21 = 1;
  *((_DWORD *)this + 22) = v21;
  *(_DWORD *)(Pool2 + 56) = v10;
  *(_DWORD *)(Pool2 + 92) = 3;
  v22 = *((_DWORD *)this + 26);
  *(_QWORD *)(Pool2 + 96) = 0LL;
  *(_DWORD *)(Pool2 + 88) = v22;
  v23 = (__int64 *)((char *)this + 72);
  *(_BYTE *)(Pool2 + 60) = 0;
  v24 = *((_QWORD *)this + 9);
  if ( *(DelayZonePalmRejection **)(v24 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v24;
  *(_QWORD *)(Pool2 + 8) = v23;
  *(_QWORD *)(v24 + 8) = Pool2;
  *v23 = Pool2;
  v25 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v25;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v13 = 0;
  }
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = v25;
    LOBYTE(v25) = v13;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v25,
      v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      24,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
      v10,
      v30);
  }
  v26 = *((_QWORD *)this + 16);
  if ( v26 )
  {
    v27 = *((unsigned int *)this + 1);
    v31 = *v19;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v26, v27, v9, 3LL, &v31);
  }
LABEL_47:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v32);
  return v10;
}
