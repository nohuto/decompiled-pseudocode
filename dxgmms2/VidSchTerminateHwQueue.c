/*
 * XREFs of VidSchTerminateHwQueue @ 0x1C0045300
 * Callers:
 *     VidSchCreateHwQueue @ 0x1C0044060 (VidSchCreateHwQueue.c)
 *     VidSchTerminateAdapter @ 0x1C0108B80 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x1C00427B0 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0042C68 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchFlushHwQueue @ 0x1C0107860 (VidSchFlushHwQueue.c)
 */

void __fastcall VidSchTerminateHwQueue(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)a1 + 5);
  VidSchFlushHwQueue();
  if ( (*(_DWORD *)(v1 + 56) & 1) != 0 && *((_QWORD *)a1 + 14) )
  {
    ((void (__fastcall *)(_QWORD))DxgCoreInterface[25])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 24LL) + 8LL));
    *((_QWORD *)a1 + 14) = 0LL;
  }
  VidSchiRemoveHwQueueFromSyncPoints(a1);
  VidSchiDecrementHwQueueReference((char *)a1);
}
