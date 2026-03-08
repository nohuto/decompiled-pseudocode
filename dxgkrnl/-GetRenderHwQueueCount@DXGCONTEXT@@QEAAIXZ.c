/*
 * XREFs of ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0314790
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0165934 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C022405E (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::GetRenderHwQueueCount(DXGCONTEXT *this)
{
  unsigned int v1; // edx
  _QWORD **v2; // rcx
  _QWORD *v3; // rax

  v1 = 0;
  v2 = (_QWORD **)((char *)this + 408);
  v3 = *v2;
  while ( v3 != v2 && v3 )
  {
    v3 = (_QWORD *)*v3;
    ++v1;
  }
  return v1;
}
