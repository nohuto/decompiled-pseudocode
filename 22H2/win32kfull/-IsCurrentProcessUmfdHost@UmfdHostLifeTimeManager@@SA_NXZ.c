/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E3DCC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093A30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetTextFaceW @ 0x1C0097590 (GreGetTextFaceW.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C009B854 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     NtGdiExtEscape @ 0x1C00A7450 (NtGdiExtEscape.c)
 *     GreTextInitialized @ 0x1C00E31F8 (GreTextInitialized.c)
 *     DereferenceW32Thread @ 0x1C00E39A0 (DereferenceW32Thread.c)
 *     W32pProcessCallout @ 0x1C00E3A50 (W32pProcessCallout.c)
 *     W32pThreadCallout @ 0x1C00E3CD0 (W32pThreadCallout.c)
 *     FinishStockFontInit @ 0x1C00E44C0 (FinishStockFontInit.c)
 * Callees:
 *     <none>
 */

bool UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  bool v3; // bl

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v3 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess(v1, v0, v2);
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v3;
}
