/*
 * XREFs of ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C00AC5A4
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0013810 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(VIDMM_PAGING_QUEUE *this)
{
  return *((_QWORD *)this + 12);
}
