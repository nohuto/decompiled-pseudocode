/*
 * XREFs of ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00EDB78
 * Callers:
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00ED340 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     McTemplateK0ppx_EtwWriteTransfer @ 0x1C002F688 (McTemplateK0ppx_EtwWriteTransfer.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x1C002F714 (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00EEFF0 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C00F12E8 (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

__int64 __fastcall VIDMM_WORKER_THREAD::SubmitPacket(
        VIDMM_GLOBAL **this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3,
        unsigned __int8 a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  int *v10; // rbp
  unsigned int v11; // ebp
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8

  if ( (byte_1C00769C1 & 1) != 0 )
    McTemplateK0ppx_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, a2, a3, *((_QWORD *)a3 + 5));
  v10 = (int *)((char *)a3 + 48);
  if ( *((_BYTE *)a3 + 24) )
  {
    WdLogSingleEntry5(4LL, *v10, a3, *((_QWORD *)a3 + 8), *((_QWORD *)a3 + 7), *((_QWORD *)a3 + 4));
    v11 = VIDMM_GLOBAL::ProcessDeferredCommand(
            *this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            a5,
            *((_BYTE *)a3 + 25),
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11),
            a4,
            a6);
    VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a3);
    VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(*((VIDMM_PROCESS_ADAPTER_INFO **)VidMmDevice
                                                                                 + 2));
  }
  else
  {
    WdLogSingleEntry4(4LL, *v10, a3, *((unsigned __int8 *)a3 + 25), *((_QWORD *)a3 + 4));
    *a5 = 0;
    *a6 = 0LL;
    LOBYTE(v15) = *((_BYTE *)a3 + 25);
    v11 = VIDMM_GLOBAL::ProcessSystemCommand(
            *this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            v15,
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11));
  }
  if ( (byte_1C00769C1 & 1) != 0 )
    McTemplateK0ppxx_EtwWriteTransfer(v13, &EventPagingQueueComplete, v14, a2, a3, *((_QWORD *)a3 + 5), 0LL);
  return v11;
}
