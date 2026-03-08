/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FC480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_SEGMENT::ReserveTemporaryResource(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 13LL, 0LL, 0LL, 0LL);
  return 3221225473LL;
}
