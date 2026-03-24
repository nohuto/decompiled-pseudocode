/*
 * XREFs of ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E411C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetTextFaceW @ 0x1C0097620 (GreGetTextFaceW.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C009B8E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     NtGdiExtEscape @ 0x1C00A75A0 (NtGdiExtEscape.c)
 *     GreTextInitialized @ 0x1C00E3548 (GreTextInitialized.c)
 *     DereferenceW32Thread @ 0x1C00E3CF0 (DereferenceW32Thread.c)
 *     W32pProcessCallout @ 0x1C00E3DA0 (W32pProcessCallout.c)
 *     W32pThreadCallout @ 0x1C00E4020 (W32pThreadCallout.c)
 *     FinishStockFontInit @ 0x1C00E4810 (FinishStockFontInit.c)
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
