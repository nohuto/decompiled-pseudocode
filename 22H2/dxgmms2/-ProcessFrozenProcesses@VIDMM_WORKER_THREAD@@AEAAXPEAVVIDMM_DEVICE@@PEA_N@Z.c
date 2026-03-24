/*
 * XREFs of ?ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1C00B824C
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00B7E98 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00010B8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001BCC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00B8644 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::ProcessFrozenProcesses(
        VIDMM_WORKER_THREAD *this,
        struct VIDMM_DEVICE *a2,
        bool *a3)
{
  _QWORD **v6; // rax
  _QWORD *v7; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v8; // rcx
  __int64 v9; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  *a3 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*(_QWORD *)this + 41040LL), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v6 = (_QWORD **)(*(_QWORD *)this + 41088LL);
  v12 = 1;
  v7 = *v6;
  while ( v7 != v6 )
  {
    v8 = (VIDMM_PROCESS_ADAPTER_INFO *)(v7 - 3);
    if ( *((_QWORD **)a2 + 2) != v7 - 3 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)v8 + 5) + 32LL);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 476) && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v8, 1) )
          *a3 = 1;
      }
    }
    v7 = (_QWORD *)*v7;
    v6 = (_QWORD **)(*(_QWORD *)this + 41088LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
