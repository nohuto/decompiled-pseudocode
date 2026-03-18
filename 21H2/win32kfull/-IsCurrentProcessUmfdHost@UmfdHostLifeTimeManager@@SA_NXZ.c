/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00C5360
 * Callers:
 *     NtGdiExtEscape @ 0x1C00108F0 (NtGdiExtEscape.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C5FC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreGetTextFaceW @ 0x1C001C7E0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreTextInitialized @ 0x1C00C4278 (GreTextInitialized.c)
 *     DereferenceW32Thread @ 0x1C00C4F00 (DereferenceW32Thread.c)
 *     W32pProcessCallout @ 0x1C00C4FD0 (W32pProcessCallout.c)
 *     W32pThreadCallout @ 0x1C00C5260 (W32pThreadCallout.c)
 *     FinishStockFontInit @ 0x1C00C81E0 (FinishStockFontInit.c)
 * Callees:
 *     <none>
 */

bool UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  bool v2; // bl

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v2 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PRKPROCESS)PsGetCurrentProcess(v1, v0);
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v2;
}
