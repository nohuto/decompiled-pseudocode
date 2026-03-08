/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FD190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::UnmapPagingBuffer(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 13LL, 0LL, 0LL, 0LL);
}
