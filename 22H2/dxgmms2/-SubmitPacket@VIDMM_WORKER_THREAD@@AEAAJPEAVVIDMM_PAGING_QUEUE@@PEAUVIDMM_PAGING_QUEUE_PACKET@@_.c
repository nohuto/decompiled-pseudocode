/*
 * XREFs of ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B83D4
 * Callers:
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00B7AC4 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     McTemplateK0ppx_EtwWriteTransfer @ 0x1C0024FB0 (McTemplateK0ppx_EtwWriteTransfer.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x1C002503C (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0081088 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C00BA5FC (-GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ.c)
 */

__int64 __fastcall VIDMM_WORKER_THREAD::SubmitPacket(
        VIDMM_GLOBAL **this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3,
        bool a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // esi
  struct VIDMM_DEVICE *VidMmDevice; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppx_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, a2, a3, *((_QWORD *)a3 + 5));
  v10 = (int *)((char *)a3 + 48);
  if ( *((_BYTE *)a3 + 24) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
    v13[3] = *v10;
    v13[4] = a3;
    v13[5] = *((_QWORD *)a3 + 8);
    v13[6] = *((_QWORD *)a3 + 7);
    v13[7] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v13);
    v14 = VIDMM_GLOBAL::ProcessDeferredCommand(
            *this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            a5,
            *((_BYTE *)a3 + 25),
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11),
            a4,
            a6);
    VidMmDevice = VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(a3);
    VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(
      *((VIDMM_PROCESS_ADAPTER_INFO **)VidMmDevice + 2),
      v16,
      v17);
  }
  else
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
    v20[3] = *v10;
    v20[4] = a3;
    v20[5] = *((unsigned __int8 *)a3 + 25);
    v20[6] = *((_QWORD *)a3 + 4);
    WdLogEvent5_WdEvent(v20);
    *a5 = 0;
    *a6 = 0LL;
    LOBYTE(v21) = *((_BYTE *)a3 + 25);
    v14 = VIDMM_GLOBAL::ProcessSystemCommand(
            (unsigned __int64)*this,
            (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)a3 + 48),
            v21,
            *((_QWORD *)a3 + 4),
            *((struct _VIDSCH_SYNC_OBJECT **)a2 + 11));
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppxx_EtwWriteTransfer(v18, &EventPagingQueueComplete, v19, a2, a3, *((_QWORD *)a3 + 5), 0LL);
  return v14;
}
