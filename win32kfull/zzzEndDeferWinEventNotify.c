/*
 * XREFs of zzzEndDeferWinEventNotify @ 0x1C002EF28
 * Callers:
 *     xxxCreateCaret @ 0x1C000F3B4 (xxxCreateCaret.c)
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0026AC0 (NtUserSetImeOwnerWindow.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     EditionEndDeferWinEventNotify @ 0x1C002EF10 (EditionEndDeferWinEventNotify.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxDwmStopRedirection @ 0x1C007B850 (xxxDwmStopRedirection.c)
 *     zzzEnableDwmPointerSupport @ 0x1C007F1FC (zzzEnableDwmPointerSupport.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0097D18 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxCreateWindowStation @ 0x1C00BE56C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 *     zzzReattachThreads @ 0x1C00CD3A8 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00CD7DC (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C00F2A60 (-zzzShowCursor@@YAH_N@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0221CE0 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0224188 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxAddShadow @ 0x1C0224364 (xxxAddShadow.c)
 *     xxxHardErrorControl @ 0x1C0226A64 (xxxHardErrorControl.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00D8F74 (xxxFlushDeferredWindowEvents.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
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
