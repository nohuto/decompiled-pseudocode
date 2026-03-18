/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0079B78
 * Callers:
 *     NtGdiExtEscape @ 0x1C0076E90 (NtGdiExtEscape.c)
 *     GreTextInitialized @ 0x1C007A410 (GreTextInitialized.c)
 *     FinishStockFontInit @ 0x1C00863A0 (FinishStockFontInit.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0079BC0 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0079C18 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

bool UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(void)
{
  bool IsCurrentProcessUmfdHostNoLock; // bl
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v2);
  IsCurrentProcessUmfdHostNoLock = UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock();
  if ( v2 )
  {
    GreReleasePushLockShared(v2);
    KeLeaveCriticalRegion();
  }
  return IsCurrentProcessUmfdHostNoLock;
}
