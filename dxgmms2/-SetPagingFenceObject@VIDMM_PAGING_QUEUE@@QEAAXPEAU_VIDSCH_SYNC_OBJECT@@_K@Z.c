/*
 * XREFs of ?SetPagingFenceObject@VIDMM_PAGING_QUEUE@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00F14DC
 * Callers:
 *     VidMmSetPagingFenceObject @ 0x1C0018B70 (VidMmSetPagingFenceObject.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGING_QUEUE::SetPagingFenceObject(
        VIDMM_PAGING_QUEUE *this,
        struct _VIDSCH_SYNC_OBJECT *a2,
        __int64 a3)
{
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
}
