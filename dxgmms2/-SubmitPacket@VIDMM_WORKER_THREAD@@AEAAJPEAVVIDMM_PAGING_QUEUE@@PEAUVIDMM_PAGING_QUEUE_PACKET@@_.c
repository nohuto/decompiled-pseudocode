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
