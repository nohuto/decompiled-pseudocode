// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::UnmapPagingBuffer(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 13LL, 0LL, 0LL, 0LL);
}
