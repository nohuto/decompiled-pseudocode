/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01C2E94
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01DDBA0 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C01BD2D4 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C01BD680 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C01BE0DC (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C01BE26C (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01C32A4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C01C62EC (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01C6358 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C020F0D4 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        void *a3)
{
  int v4; // r13d
  PVOID v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 Pool2; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  struct CPointerInputFrame *v14; // rax
  __int128 v15; // xmm1
  struct CPointerInfoNode *v16; // rax
  CTouchProcessor *v17; // rcx
  __int64 v18; // r8
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  LARGE_INTEGER v27; // r8
  unsigned int v28; // ebx
  __int64 v29; // rdx
  struct CPointerQFrame *v30; // rax
  unsigned int i; // ebx
  struct CPointerRawData *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // r8
  _DWORD *v37; // rbx
  int v38; // r15d
  struct CPointerInfoNode *v39; // rdx
  struct CPointerQFrame *v40; // rdx
  __int64 *v42[2]; // [rsp+28h] [rbp-E0h] BYREF
  CInpLockGuard *v43[6]; // [rsp+38h] [rbp-D0h] BYREF
  PERESOURCE *v44[8]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID BackTrace[38]; // [rsp+A8h] [rbp-60h] BYREF

  v4 = (int)a3;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v43, (struct CInpLockGuard *)(this + 4), 0LL);
  v6 = gpLeakTrackingAllocator;
  v7 = 0LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x66707355) != 0x66707355
    || (v8 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 264LL);
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1718645589 )
  {
    if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  Pool2 = ExAllocatePool2(260LL, 280LL);
  if ( Pool2 )
  {
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
              (__int64)v6,
              Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_25:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_37;
      }
LABEL_7:
      v12 = 2LL;
      v13 = (_OWORD *)Pool2;
      v14 = a2;
      do
      {
        *v13 = *(_OWORD *)v14;
        v13[1] = *((_OWORD *)v14 + 1);
        v13[2] = *((_OWORD *)v14 + 2);
        v13[3] = *((_OWORD *)v14 + 3);
        v13[4] = *((_OWORD *)v14 + 4);
        v13[5] = *((_OWORD *)v14 + 5);
        v13[6] = *((_OWORD *)v14 + 6);
        v13 += 8;
        v15 = *((_OWORD *)v14 + 7);
        v14 = (struct CPointerInputFrame *)((char *)v14 + 128);
        *(v13 - 1) = v15;
        --v12;
      }
      while ( v12 );
      *(_QWORD *)v13 = *(_QWORD *)v14;
      *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
      *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
      *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
      *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
      *(_QWORD *)(Pool2 + 240) = 0LL;
      *(_QWORD *)(Pool2 + 248) = 0LL;
      *(_QWORD *)(Pool2 + 232) = 0LL;
      *(_QWORD *)(Pool2 + 256) = 0LL;
      v16 = CTouchProcessor::AllocPointerInfoNodeList(this, *((unsigned int *)a2 + 12), 128LL);
      *(_QWORD *)(Pool2 + 240) = v16;
      if ( !v16 )
        goto LABEL_28;
      memset(&BackTrace[20], 0, 0x90uLL);
      v19 = *(_OWORD *)&BackTrace[22];
      *(_OWORD *)(Pool2 + 72) = *(_OWORD *)&BackTrace[20];
      v20 = *(_OWORD *)&BackTrace[24];
      *(_OWORD *)(Pool2 + 88) = v19;
      v21 = *(_OWORD *)&BackTrace[26];
      *(_OWORD *)(Pool2 + 104) = v20;
      v22 = *(_OWORD *)&BackTrace[28];
      *(_OWORD *)(Pool2 + 120) = v21;
      v23 = *(_OWORD *)&BackTrace[30];
      *(_OWORD *)(Pool2 + 136) = v22;
      v24 = *(_OWORD *)&BackTrace[32];
      *(_OWORD *)(Pool2 + 152) = v23;
      v25 = *(_OWORD *)&BackTrace[34];
      *(_OWORD *)(Pool2 + 168) = v24;
      v26 = *(_OWORD *)&BackTrace[36];
      *(_OWORD *)(Pool2 + 184) = v25;
      *(_OWORD *)(Pool2 + 200) = v26;
      *(LARGE_INTEGER *)(Pool2 + 72) = KeQueryPerformanceCounter(0LL);
      v28 = 0;
      v29 = *((unsigned int *)a2 + 12);
      if ( (_DWORD)v29 )
      {
        do
        {
          CPointerInfoNode::operator=(*(_QWORD *)(Pool2 + 240) + 480LL * v28, 480LL * v28 + *((_QWORD *)a2 + 30));
          v29 = *((unsigned int *)a2 + 12);
          ++v28;
        }
        while ( v28 < (unsigned int)v29 );
      }
      v30 = CTouchProcessor::AllocPointerQFrameList(this, v29, v27.QuadPart);
      *(_QWORD *)(Pool2 + 248) = v30;
      if ( !v30 )
        goto LABEL_28;
      for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
        CPointerQFrame::operator=(*(_QWORD *)(Pool2 + 248) + 160LL * i, 160LL * i + *((_QWORD *)a2 + 31));
      if ( !*((_QWORD *)a2 + 29)
        || (v32 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2), (*(_QWORD *)(Pool2 + 232) = v32) != 0LL) )
      {
        v35 = HMValidateHandleNoSecure(v4, 19);
        if ( !v35 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36);
        v42[1] = *(__int64 **)(v35 + 472);
        v42[0] = (__int64 *)(Pool2 + 256);
        HMAssignmentLock(v42, 0LL);
        v37 = qword_1C0296BE0;
        CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
          (CInpLockGuardExclusiveIfNeeded *)v44,
          (struct CInpLockGuard *)((char *)qword_1C0296BE0 + 8),
          0LL);
        v38 = (*v37)++;
        if ( v38 == -1 )
        {
          *v37 = 1;
          ApiSetResetLastSeenFrameId();
        }
        CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v44);
        *((_DWORD *)a2 + 10) = v38;
        v7 = Pool2;
      }
      else
      {
LABEL_28:
        v39 = *(struct CPointerInfoNode **)(Pool2 + 240);
        if ( v39 )
        {
          if ( v39 == *((struct CPointerInfoNode **)a2 + 30) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v39, v18);
            v39 = *(struct CPointerInfoNode **)(Pool2 + 240);
          }
          CTouchProcessor::FreePointerInfoList(v17, v39, *(_DWORD *)(Pool2 + 48));
        }
        v40 = *(struct CPointerQFrame **)(Pool2 + 248);
        if ( v40 )
        {
          if ( v40 == *((struct CPointerQFrame **)a2 + 31) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v40, v18);
            v40 = *(struct CPointerQFrame **)(Pool2 + 248);
          }
          CTouchProcessor::FreePointerQFrameList(v17, v40, *(_DWORD *)(Pool2 + 48));
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)Pool2);
      }
      goto LABEL_37;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v6,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_25;
    Pool2 += 16LL;
LABEL_6:
    if ( !Pool2 )
      goto LABEL_37;
    goto LABEL_7;
  }
LABEL_37:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v43, v9, v11);
  return (struct CPointerInputFrame *)v7;
}
