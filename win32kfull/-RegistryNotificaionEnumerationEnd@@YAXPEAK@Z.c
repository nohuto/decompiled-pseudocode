/*
 * XREFs of ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C00D0C74
 * Callers:
 *     GreAddFontResourceWInternal @ 0x1C00D0B00 (GreAddFontResourceWInternal.c)
 * Callees:
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C00D0D34 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 */

void __fastcall RegistryNotificaionEnumerationEnd(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = Gre::Base::Globals(a1);
  v3 = *((_QWORD *)v2 + 6);
  if ( v3 )
  {
    GreAcquireSemaphore(v3);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v2 + 6), 14LL);
    v5[0] = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v4) + 32) + 20272LL);
    if ( v5[0] )
      PUBLIC_PFTOBJ::bCleanupPFT(v5, 1LL, a1);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 6));
  }
}
