/*
 * XREFs of xxxInvalidateWallpaperWindow @ 0x1C00F57E4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 */

void xxxInvalidateWallpaperWindow()
{
  __int64 v0; // rax
  __int64 v1; // rax
  struct tagWND *v2; // rcx

  v0 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v0 )
  {
    v1 = *(_QWORD *)(v0 + 8);
    v2 = *(struct tagWND **)(v1 + 184);
    if ( v2 || (v2 = *(struct tagWND **)(v1 + 24)) != 0LL )
      xxxInternalInvalidate(v2, (HRGN)1, 0x405u);
  }
}
