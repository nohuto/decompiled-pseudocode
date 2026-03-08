/*
 * XREFs of BgpFwAcquireLock @ 0x140381C60
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x140381288 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1403812F4 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140567430 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140567D34 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x14066F460 (BgDisplaySafeToPowerOffScreen.c)
 *     BgLibraryEnable @ 0x14066F498 (BgLibraryEnable.c)
 *     BgDisplayProgressIndicator @ 0x140AE9040 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140AE907C (BgDisplayBackgroundUpdate.c)
 *     AnFwFadeCompletion @ 0x140AE9FB8 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEA110 (AnFwpFadeAnimationTimer.c)
 *     AnFwpProgressIndicatorTimer @ 0x140AEA710 (AnFwpProgressIndicatorTimer.c)
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 *     BgConsoleGetInterface @ 0x140AEB5EC (BgConsoleGetInterface.c)
 *     BgpConsoleInitialize @ 0x140AEB6E0 (BgpConsoleInitialize.c)
 *     ResFwBackgroundTransition @ 0x140AEBAF8 (ResFwBackgroundTransition.c)
 *     ResFwpPageOutBackground @ 0x140AEBBF0 (ResFwpPageOutBackground.c)
 *     BgLibraryDisable @ 0x140AEC480 (BgLibraryDisable.c)
 *     BgDisplayFade @ 0x140AEC4BC (BgDisplayFade.c)
 *     BgConsoleDestroyInterface @ 0x140AEC504 (BgConsoleDestroyInterface.c)
 *     BgAcquireSpinLock @ 0x140AEE180 (BgAcquireSpinLock.c)
 *     BgDisplayString @ 0x140AEE1B8 (BgDisplayString.c)
 *     BgFreeContext @ 0x140AEE228 (BgFreeContext.c)
 *     BgGetContext @ 0x140AEE26C (BgGetContext.c)
 *     BgLibraryDestroy @ 0x140AEE2D8 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140AEE344 (BgMarkHiberPhase.c)
 *     BgSetBootGraphicsInformation @ 0x140AEE394 (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x140AEE3F0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140AEE4C0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140AEE870 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140AEE9E0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140AEEA50 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140AEECD0 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140AEED80 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AEF1E0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeTestSpinLock @ 0x1402053F0 (KeTestSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 */

void BgpFwAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v2; // rax

  if ( (dword_140C0E3B0 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( !KeTestSpinLock(&qword_140D0C0B0) )
        ;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          LODWORD(v2) = 4;
          if ( CurrentIrql != 2 )
            v2 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v2;
        }
      }
    }
    KxAcquireSpinLock(&qword_140D0C0B0);
    byte_140C709F4 = CurrentIrql;
  }
}
