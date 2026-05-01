/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1803A05E0
 * Callers:
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18039B744 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18039CED0 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18039D110 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18039F7C0 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x1803A0774 (PerSessionState--_DoesSessionKeyExist.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1803A0800 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_180652EB0;
  if ( !byte_180652EB0 )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !(unsigned __int8)PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_180652EB0 = result;
  }
  return result;
}
