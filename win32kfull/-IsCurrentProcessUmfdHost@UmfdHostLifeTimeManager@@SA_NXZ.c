/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011E354
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     FinishStockFontInit @ 0x1C00B9D70 (FinishStockFontInit.c)
 *     NtGdiExtEscape @ 0x1C00BB120 (NtGdiExtEscape.c)
 *     GreTextInitialized @ 0x1C010FB94 (GreTextInitialized.c)
 * Callees:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C011F720 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011FF2C (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
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
