void __fastcall VidMmGetDevicePagingQueue(
        struct VIDMM_DEVICE *a1,
        unsigned int a2,
        struct VIDMM_PAGING_QUEUE **a3,
        struct _VIDSCH_SYNC_OBJECT **a4)
{
  __int64 v5; // rcx

  v5 = 176LL * a2;
  *a3 = (struct VIDMM_PAGING_QUEUE *)(v5 + *((_QWORD *)a1 + 10));
  *a4 = *(struct _VIDSCH_SYNC_OBJECT **)(*((_QWORD *)a1 + 10) + v5 + 152);
}
