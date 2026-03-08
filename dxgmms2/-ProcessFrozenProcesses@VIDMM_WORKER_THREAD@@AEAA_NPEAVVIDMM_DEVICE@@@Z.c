/*
 * XREFs of ?ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z @ 0x1C00ED9D0
 * Callers:
 *     ?FlushDeferredEvictions@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z @ 0x1C00ED1EC (-FlushDeferredEvictions@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00EDDA8 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 */

char __fastcall VIDMM_WORKER_THREAD::ProcessFrozenProcesses(VIDMM_WORKER_THREAD *this, struct VIDMM_DEVICE *a2)
{
  char v4; // di
  _QWORD **v5; // rax
  _QWORD *v6; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v7; // rcx
  __int64 v8; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v4 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*(_QWORD *)this + 41072LL), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v5 = (_QWORD **)(*(_QWORD *)this + 41120LL);
  v12 = 1;
  v6 = *v5;
  if ( *v5 != v5 )
  {
    do
    {
      v7 = (VIDMM_PROCESS_ADAPTER_INFO *)(v6 - 3);
      if ( *((_QWORD **)a2 + 2) != v6 - 3 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)v7 + 5) + 32LL);
        if ( v8 )
        {
          if ( *(_BYTE *)(v8 + 588) && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v7, 1) )
            v4 = 1;
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)(*(_QWORD *)this + 41120LL) );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v4;
}
