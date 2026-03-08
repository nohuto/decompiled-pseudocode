/*
 * XREFs of GreRemoveDisplayDriverRealizations @ 0x1C001B31C
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C007CC0C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 * Callees:
 *     <none>
 */

void __fastcall GreRemoveDisplayDriverRealizations(__int64 a1)
{
  __int64 v2; // rdi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx

  if ( a1 )
  {
    v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
    GreAcquireSemaphore(*(_QWORD *)(v2 + 13288));
    v4 = Gre::Base::Globals(v3);
    GreAcquireSemaphore(*((_QWORD *)v4 + 10));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v4 + 10), 1LL);
    GreAcquireSemaphore(*((_QWORD *)v4 + 15));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v4 + 15), 2LL);
    GreAcquireSemaphore(*((_QWORD *)v4 + 11));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v4 + 11), 3LL);
    GreAcquireSemaphore(*(_QWORD *)(a1 + 56));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *(_QWORD *)(a1 + 56), 4LL);
    GreAcquireSemaphore(*((_QWORD *)v4 + 14));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v4 + 14), 5LL);
    GreAcquireSemaphore(*((_QWORD *)v4 + 17));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemHT", *((_QWORD *)v4 + 17), 6LL);
    GreAcquireSemaphore(*(_QWORD *)(a1 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), 11LL);
    GreAcquireSemaphore(*((_QWORD *)v4 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
    GreAcquireSemaphore(*((_QWORD *)v4 + 5));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPalette", *((_QWORD *)v4 + 5), 13LL);
    GreAcquireSemaphore(*((_QWORD *)v4 + 6));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v4 + 6), 14LL);
    GreAcquireSemaphore(*((_QWORD *)v4 + 3));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemRFONTList", *((_QWORD *)v4 + 3), 15LL);
    GreAcquireHmgrSemaphore();
    bDynamicProcessAllDriverRealizations(a1, 0LL, 1LL);
    GreReleaseHmgrSemaphore();
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemRFONTList");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 3));
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 6));
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPalette");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 5));
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
    GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 48));
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemHT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 17));
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 14));
    EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()");
    GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 56));
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 11));
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 15));
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 10));
    EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEnableEUDC");
    GreReleaseSemaphoreInternal(*(_QWORD *)(v2 + 13288));
  }
}
