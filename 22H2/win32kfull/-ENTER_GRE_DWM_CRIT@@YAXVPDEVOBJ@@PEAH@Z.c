/*
 * XREFs of ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C007A88C
 * Callers:
 *     GreDwmShutdown @ 0x1C0054344 (GreDwmShutdown.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00587CC (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00597AC (GreTransferSpriteStateToDwmState.c)
 *     GreDesktopSwitch @ 0x1C006CE0C (GreDesktopSwitch.c)
 *     GreSfmCloseCompositorRef @ 0x1C0079C9C (GreSfmCloseCompositorRef.c)
 *     GreDwmStartup @ 0x1C00B10F8 (GreDwmStartup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENTER_GRE_DWM_CRIT(Gre::Base *a1, _DWORD *a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi

  *a2 = 0;
  v4 = Gre::Base::Globals(a1);
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v4 + 10))
    && !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v4 + 10)) )
  {
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v4 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v4 + 10));
    *a2 = 1;
  }
  GreAcquireSemaphore(*((_QWORD *)v4 + 15));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v4 + 15), 2LL);
  GreAcquireSemaphore(*((_QWORD *)v4 + 11));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v4 + 11), 3LL);
  GreAcquireSemaphore(*((_QWORD *)a1 + 7));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)a1 + 7), 4LL);
  GreAcquireSemaphore(*((_QWORD *)v4 + 14));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v4 + 14), 5LL);
  GreAcquireSemaphore(*((_QWORD *)v4 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
  GreAcquireSemaphore(*((_QWORD *)a1 + 6));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)a1 + 6), 11LL);
}
