/*
 * XREFs of zzzEndDeferWinEventNotify @ 0x1C0048944
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0080DD0 (NtUserSetImeOwnerWindow.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0097F94 (zzzEnableDwmPointerSupport.c)
 *     xxxDwmStopRedirection @ 0x1C0098410 (xxxDwmStopRedirection.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00A924C (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00B7E98 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     xxxCreateCaret @ 0x1C00C6204 (xxxCreateCaret.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00D22F8 (xxxCreateWindowStation.c)
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 *     EditionEndDeferWinEventNotify @ 0x1C010CBB0 (EditionEndDeferWinEventNotify.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0118590 (-zzzShowCursor@@YAH_N@Z.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012E0FC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxHardErrorControl @ 0x1C023CD7C (xxxHardErrorControl.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00741F8 (xxxFlushDeferredWindowEvents.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void zzzEndDeferWinEventNotify()
{
  unsigned int DLT; // eax
  char *v1; // rbx
  int v2; // edi
  tagDomLock *v3; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]
  char v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  char v9; // [rsp+48h] [rbp-20h]

  DLT = DLT_WINEVENT::getDLT();
  v5 = 1;
  v1 = &v5;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v6 = gDomainDummyLock;
  v8 = 0LL;
  v2 = 0;
  v9 = 0;
  v7 = 0;
  do
  {
    v3 = (tagDomLock *)*((_QWORD *)v1 - 1);
    if ( v3 )
    {
      if ( *v1 )
        tagDomLock::LockExclusive(v3);
      else
        tagDomLock::LockShared(v3);
    }
    ++v2;
    v1 += 16;
  }
  while ( !v2 );
  v9 = 1;
  --gdwDeferWinEvent;
  if ( DomainLockRef )
  {
    if ( v5 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
