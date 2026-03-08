/*
 * XREFs of CreateBitmapStrip @ 0x1C010E370
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     xxxSetWindowNCMetrics @ 0x1C010CBC8 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     CleanupOEMBitmaps @ 0x1C010E300 (CleanupOEMBitmaps.c)
 *     GreTextInitialized @ 0x1C010FB94 (GreTextInitialized.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C01166A8 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 */

__int64 CreateBitmapStrip()
{
  int v0; // esi
  __int64 v1; // rbx
  int i; // edi

  if ( !(unsigned int)GreTextInitialized() )
    return 1LL;
  CleanupOEMBitmaps();
  v0 = 0;
  v1 = 0LL;
  for ( i = 29; i < 39; i += 2 )
  {
    if ( *(_QWORD *)(v1 + gcachedCaptions[0]) )
      HMAssignmentUnlock(&gcachedCaptions[2 * v0]);
    ++v0;
    *(_DWORD *)(v1 + gcachedCaptions[0] + 8) = i;
    v1 += 16LL;
  }
  return CreateDPIBitmapStrip(0);
}
