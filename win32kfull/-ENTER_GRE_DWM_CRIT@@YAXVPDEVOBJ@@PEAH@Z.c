/*
 * XREFs of ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C001EFA4
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x1C001EC94 (GreSfmCloseCompositorRef.c)
 *     GreDesktopSwitch @ 0x1C002026C (GreDesktopSwitch.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C007CDBC (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C007DD9C (GreTransferSpriteStateToDwmState.c)
 *     GreDwmStartup @ 0x1C00C2644 (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C00C3164 (GreDwmShutdown.c)
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
