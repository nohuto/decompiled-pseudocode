/*
 * XREFs of ?FlushDeferredEvictions@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z @ 0x1C00ED1EC
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00ED718 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ??0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z @ 0x1C00880DC (--0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1C0089B98 (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAA_NXZ @ 0x1C00ED8D8 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAA_NXZ.c)
 *     ?ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z @ 0x1C00ED9D0 (-ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAA_N_NPEA_N@Z @ 0x1C00EDAA4 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAA_N_NPEA_N@Z.c)
 */

char __fastcall VIDMM_WORKER_THREAD::FlushDeferredEvictions(union _LARGE_INTEGER *this, struct VIDMM_DEVICE *a2)
{
  bool v4; // bp
  union _LARGE_INTEGER v5; // rbx
  DXGPUSHLOCK *v6; // r14
  _QWORD **v7; // rdi
  _QWORD **v8; // rbx
  _QWORD *v9; // rax
  bool v10; // bp
  char v11; // bl
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF
  bool v14; // [rsp+70h] [rbp+8h] BYREF

  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
    (VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v13,
    this + 40,
    (unsigned int *)&this[45].HighPart,
    1);
  v14 = 0;
  v4 = VIDMM_WORKER_THREAD::ProcessPendingTerminations((VIDMM_WORKER_THREAD *)this, 1, &v14);
  KeWaitForSingleObject((PVOID)(this->QuadPart + 41184), Executive, 0, 0, 0LL);
  v5 = *this;
  v6 = (DXGPUSHLOCK *)(this->QuadPart + 40056);
  DXGPUSHLOCK::AcquireExclusive(v6);
  v7 = (_QWORD **)(v5.QuadPart + 40040);
  while ( 1 )
  {
    v8 = (_QWORD **)*v7;
    if ( (_QWORD **)(*v7)[1] != v7 || (v9 = *v8, (_QWORD **)(*v8)[1] != v8) )
      __fastfail(3u);
    *v7 = v9;
    v9[1] = v7;
    if ( v8 == v7 )
      break;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *, _QWORD *))(*v8[2] + 24LL))(
      v8[2],
      0LL,
      v8[3],
      v8[4],
      v8[5]);
    operator delete(v8);
  }
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v10 = VIDMM_WORKER_THREAD::ProcessEvictQueues((VIDMM_WORKER_THREAD *)this) || v4;
  v11 = v10 | VIDMM_WORKER_THREAD::ProcessFrozenProcesses((VIDMM_WORKER_THREAD *)this, a2);
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v13);
  return v11;
}
