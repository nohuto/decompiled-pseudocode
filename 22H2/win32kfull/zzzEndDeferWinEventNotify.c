/*
 * XREFs of zzzEndDeferWinEventNotify @ 0x1C006DEA4
 * Callers:
 *     xxxCreateWindowStation @ 0x1C000C6EC (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0011DA8 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzCancelJournalling @ 0x1C00292F8 (zzzCancelJournalling.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00296FC (zzzEnableDwmPointerSupport.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0035730 (NtUserSetImeOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036CF0 (zzzSetWindowCompositionCloak.c)
 *     zzzLockWindowUpdate2 @ 0x1C003DD5C (zzzLockWindowUpdate2.c)
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006DF90 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     xxxCapture @ 0x1C00C02CC (xxxCapture.c)
 *     xxxDwmStopRedirection @ 0x1C00E9620 (xxxDwmStopRedirection.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F1018 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxCreateCaret @ 0x1C0113A44 (xxxCreateCaret.c)
 *     EditionEndDeferWinEventNotify @ 0x1C0122170 (EditionEndDeferWinEventNotify.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C01256F4 (-zzzShowCursor@@YAH_N@Z.c)
 *     xxxAddShadow @ 0x1C013D9EC (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013DD1C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxHardErrorControl @ 0x1C02418AC (xxxHardErrorControl.c)
 * Callees:
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0052608 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C0B9C (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00C0D74 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00C0DC8 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0111AE0 (xxxFlushDeferredWindowEvents.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void zzzEndDeferWinEventNotify()
{
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rbx
  __int64 v2; // [rsp+40h] [rbp+8h]

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
  {
    LODWORD(v2) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
  }
  tagDomLock::LockExclusive(DomainLockRef);
  --gdwDeferWinEvent;
  tagDomLock::UnLockExclusive(DomainLockRef);
}
