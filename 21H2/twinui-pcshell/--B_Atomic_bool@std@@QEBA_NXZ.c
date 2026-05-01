/*
 * XREFs of ??B_Atomic_bool@std@@QEBA_NXZ @ 0x18028EEA8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FC9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BB284 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x1803BBD30 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5804 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Atomic_bool::operator bool(_BYTE *a1)
{
  return *a1 != 0;
}
