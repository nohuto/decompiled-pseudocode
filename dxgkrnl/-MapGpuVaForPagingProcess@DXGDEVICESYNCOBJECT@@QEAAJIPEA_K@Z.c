/*
 * XREFs of ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1C01DF9FC
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C01DF6EC (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0007090 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(
        DXGDEVICESYNCOBJECT *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  __int64 v6; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
  MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
  return (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_MONITORED_FENCE_STORAGE *, _QWORD, unsigned __int64 *))(*(_QWORD *)(v6 + 8) + 944LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
           MonitoredFenceStorage,
           a2,
           a3);
}
