void __fastcall VIDMM_PAGING_QUEUE::SetPagingFenceObject(
        VIDMM_PAGING_QUEUE *this,
        struct _VIDSCH_SYNC_OBJECT *a2,
        __int64 a3)
{
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
}
