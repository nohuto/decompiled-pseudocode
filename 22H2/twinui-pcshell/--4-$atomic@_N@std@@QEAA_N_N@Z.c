/*
 * XREFs of ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x18028EC70
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FC880 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803B84E4 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z @ 0x1803BD9C8 (-OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::atomic<bool>::operator=(_BYTE *a1, char a2)
{
  *a1 = a2;
  return a2;
}
