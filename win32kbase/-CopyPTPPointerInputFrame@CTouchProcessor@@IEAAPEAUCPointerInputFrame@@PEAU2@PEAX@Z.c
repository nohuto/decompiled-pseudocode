/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01EE280
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C020D558 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C00F2002 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C00F2428 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C01E8550 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C01E88FC (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C01E9494 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01EE7B4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01F2D44 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C02460AC (ApiSetResetLastSeenFrameId.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        void *a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  __int64 Pool2; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r15
  _OWORD *v12; // rcx
  struct CPointerInputFrame *v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm1
  struct CPointerInfoNode *v16; // rax
  CTouchProcessor *v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  unsigned int v26; // ebx
  unsigned int v27; // edx
  struct CPointerQFrame *v28; // rax
  unsigned int i; // ebx
  struct CPointerRawData *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _DWORD *v36; // rbx
  int v37; // r15d
  __int64 v38; // rax
  unsigned int *v39; // rbx
  __int64 v40; // rax
  __int64 v42; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v43; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int *v44; // [rsp+38h] [rbp-C8h]
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v46[48]; // [rsp+48h] [rbp-B8h] BYREF
  CInpLockGuard *v47[7]; // [rsp+78h] [rbp-88h] BYREF
  PVOID BackTrace[44]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v49; // [rsp+220h] [rbp+120h] BYREF
  void *v50; // [rsp+230h] [rbp+130h]
  unsigned __int64 v51; // [rsp+238h] [rbp+138h] BYREF

  v50 = a3;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v46, (struct CInpLockGuard *)(this + 4), 0LL);
  v5 = gpLeakTrackingAllocator;
  v6 = 0LL;
  v42 = 260LL;
  v49 = 1718645589;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  v45 = 264LL;
  if ( !v7 )
  {
    Pool2 = ExAllocatePool2(260LL, 264LL, 1718645589LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
    goto LABEL_16;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v51 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1718645589, &v51) )
      {
        v43 = &v42;
        v44 = &v49;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v5,
                  (__int64)&v43,
                  &v45);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v10, 280LL, 1718645589LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v5,
                 Pool2,
                 v51,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v11 = Pool2;
            goto LABEL_20;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v5,
                    (const void *)Pool2,
                    v51,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_46:
    Pool2 = 0LL;
LABEL_47:
    v6 = Pool2;
    goto LABEL_48;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x66707355u) )
    goto LABEL_46;
  v9 = (_QWORD *)ExAllocatePool2(v42 & 0xFFFFFFFFFFFFFFFDuLL, 280LL, v49);
  Pool2 = (__int64)v9;
  if ( !v9
    || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
        *v9 = 1718645589LL,
        Pool2 = (__int64)(v9 + 2),
        v9 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v5 + 1),
      0x66707355uLL);
  }
LABEL_16:
  v11 = Pool2;
  if ( !Pool2 )
    goto LABEL_46;
LABEL_20:
  v12 = (_OWORD *)Pool2;
  v13 = a2;
  v14 = 2LL;
  do
  {
    *v12 = *(_OWORD *)v13;
    v12[1] = *((_OWORD *)v13 + 1);
    v12[2] = *((_OWORD *)v13 + 2);
    v12[3] = *((_OWORD *)v13 + 3);
    v12[4] = *((_OWORD *)v13 + 4);
    v12[5] = *((_OWORD *)v13 + 5);
    v12[6] = *((_OWORD *)v13 + 6);
    v12 += 8;
    v15 = *((_OWORD *)v13 + 7);
    v13 = (struct CPointerInputFrame *)((char *)v13 + 128);
    *(v12 - 1) = v15;
    --v14;
  }
  while ( v14 );
  *(_QWORD *)v12 = *(_QWORD *)v13;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
  *(_QWORD *)(Pool2 + 240) = 0LL;
  *(_QWORD *)(Pool2 + 248) = 0LL;
  *(_QWORD *)(Pool2 + 232) = 0LL;
  *(_QWORD *)(Pool2 + 256) = 0LL;
  v16 = CTouchProcessor::AllocPointerInfoNodeList(this, *((_DWORD *)a2 + 12));
  *(_QWORD *)(Pool2 + 240) = v16;
  if ( v16 )
  {
    memset(&BackTrace[20], 0, 0x90uLL);
    v18 = *(_OWORD *)&BackTrace[22];
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)&BackTrace[20];
    v19 = *(_OWORD *)&BackTrace[24];
    *(_OWORD *)(Pool2 + 88) = v18;
    v20 = *(_OWORD *)&BackTrace[26];
    *(_OWORD *)(Pool2 + 104) = v19;
    v21 = *(_OWORD *)&BackTrace[28];
    *(_OWORD *)(Pool2 + 120) = v20;
    v22 = *(_OWORD *)&BackTrace[30];
    *(_OWORD *)(Pool2 + 136) = v21;
    v23 = *(_OWORD *)&BackTrace[32];
    *(_OWORD *)(Pool2 + 152) = v22;
    v24 = *(_OWORD *)&BackTrace[34];
    *(_OWORD *)(Pool2 + 168) = v23;
    v25 = *(_OWORD *)&BackTrace[36];
    *(_OWORD *)(Pool2 + 184) = v24;
    *(_OWORD *)(Pool2 + 200) = v25;
    *(LARGE_INTEGER *)(Pool2 + 72) = KeQueryPerformanceCounter(0LL);
    v26 = 0;
    v27 = *((_DWORD *)a2 + 12);
    if ( v27 )
    {
      do
      {
        CPointerInfoNode::operator=(*(_QWORD *)(Pool2 + 240) + 480LL * v26, 480LL * v26 + *((_QWORD *)a2 + 30));
        v27 = *((_DWORD *)a2 + 12);
        ++v26;
      }
      while ( v26 < v27 );
    }
    v28 = CTouchProcessor::AllocPointerQFrameList(this, v27);
    *(_QWORD *)(Pool2 + 248) = v28;
    if ( v28 )
    {
      for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
        CPointerQFrame::operator=(*(_QWORD *)(Pool2 + 248) + 160LL * i, 160LL * i + *((_QWORD *)a2 + 31));
      if ( !*((_QWORD *)a2 + 29)
        || (v30 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2), (*(_QWORD *)(Pool2 + 232) = v30) != 0LL) )
      {
        v31 = HMValidateHandleNoSecure((int)v50, 19);
        if ( !v31 )
        {
          v49 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3040);
        }
        v44 = *(unsigned int **)(v31 + 472);
        v43 = (__int64 *)(Pool2 + 256);
        HMAssignmentLock(&v43, 0);
        v36 = *(_DWORD **)(SGDGetUserSessionState(v33, v32, v34, v35) + 16368);
        CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
          (CInpLockGuardExclusiveIfNeeded *)v47,
          (struct CInpLockGuard *)(v36 + 2),
          0LL);
        v37 = (*v36)++;
        if ( v37 == -1 )
        {
          *v36 = 1;
          ApiSetResetLastSeenFrameId();
        }
        CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v47);
        *((_DWORD *)a2 + 10) = v37;
        goto LABEL_47;
      }
    }
  }
  v38 = *(_QWORD *)(Pool2 + 240);
  if ( v38 )
  {
    if ( v38 == *((_QWORD *)a2 + 30) )
    {
      LODWORD(v51) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3059);
    }
    v39 = (unsigned int *)(Pool2 + 48);
    CTouchProcessor::FreePointerInfoList(v17, *(struct CPointerInfoNode **)(Pool2 + 240), *(_DWORD *)(Pool2 + 48));
  }
  else
  {
    v39 = (unsigned int *)(v11 + 48);
  }
  v40 = *(_QWORD *)(Pool2 + 248);
  if ( v40 )
  {
    if ( v40 == *((_QWORD *)a2 + 31) )
    {
      LODWORD(v51) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3064);
    }
    CTouchProcessor::FreePointerQFrameList(v17, *(struct CPointerQFrame **)(Pool2 + 248), *v39);
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
LABEL_48:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v46);
  return (struct CPointerInputFrame *)v6;
}
