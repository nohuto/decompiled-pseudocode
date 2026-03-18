/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C01E56F0
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x1C01E70E0 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  PVOID v8; // rsi
  unsigned int v9; // edi
  char v10; // bp
  __int64 v11; // rax
  __int64 Pool2; // rbx
  int v13; // r8d
  unsigned int v14; // esi
  int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  int v20; // [rsp+48h] [rbp-110h]
  PERESOURCE *v21[8]; // [rsp+50h] [rbp-108h] BYREF
  PVOID BackTrace[20]; // [rsp+90h] [rbp-C8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v21,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v8 = gpLeakTrackingAllocator;
  v9 = 0;
  v10 = 1;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x7A647355) != 0x7A647355
    || (v11 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 104LL);
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v11) != 2053403477 )
  {
    if ( ++v11 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  Pool2 = ExAllocatePool2(260LL, 120LL);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
              (__int64)v8,
              Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_14:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_25;
      }
LABEL_7:
      *(struct tagRECT *)(Pool2 + 24) = *a4;
      *(_QWORD *)(Pool2 + 72) = 0LL;
      *(_OWORD *)(Pool2 + 40) = 0LL;
      *(_QWORD *)(Pool2 + 80) = 0LL;
      *(_QWORD *)(Pool2 + 16) = KeGetCurrentThread();
      *(_DWORD *)(Pool2 + 64) = 0;
      v14 = *((_DWORD *)this + 22);
      v15 = v14 + 1;
      if ( v14 == -1 )
        v15 = 1;
      *((_DWORD *)this + 22) = v15;
      v16 = (__int64 *)((char *)this + 72);
      *(_DWORD *)(Pool2 + 56) = v14;
      *(_DWORD *)(Pool2 + 92) = a3;
      *(_DWORD *)(Pool2 + 88) = 0;
      *(_QWORD *)(Pool2 + 96) = a2;
      *(_BYTE *)(Pool2 + 60) = 1;
      v17 = *((_QWORD *)this + 9);
      if ( *(DelayZonePalmRejection **)(v17 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
        __fastfail(3u);
      *(_QWORD *)Pool2 = v17;
      *(_QWORD *)(Pool2 + 8) = v16;
      *(_QWORD *)(v17 + 8) = Pool2;
      *v16 = Pool2;
      v18 = *((_DWORD *)this + 23) + 1;
      *((_DWORD *)this + 23) = v18;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v10 = 0;
      }
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = v18;
        LOBYTE(v18) = v10;
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          8,
          26,
          (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
          v14,
          v20);
      }
      v9 = v14;
      goto LABEL_25;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v8,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
LABEL_6:
    if ( !Pool2 )
      goto LABEL_25;
    goto LABEL_7;
  }
LABEL_25:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v21);
  return v9;
}
