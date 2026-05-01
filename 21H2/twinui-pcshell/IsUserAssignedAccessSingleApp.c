/*
 * XREFs of IsUserAssignedAccessSingleApp @ 0x1804E8004
 * Callers:
 *     ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x180277320 (-OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x18027D530 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18027D988 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18039D3E0 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4128 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4BAC (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5804 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1804E0B2C (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     GetAssignedAccessTypeForUser @ 0x1804E7D30 (GetAssignedAccessTypeForUser.c)
 *     GetSidStringFromToken @ 0x1804E7EC4 (GetSidStringFromToken.c)
 */

__int64 __fastcall IsUserAssignedAccessSingleApp(void *a1)
{
  unsigned int v1; // ebx
  LPWSTR v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  memset(v3, 0, 24);
  if ( (int)GetSidStringFromToken(a1, v3) >= 0 )
    LOBYTE(v1) = (unsigned int)GetAssignedAccessTypeForUser(v3[0]) == 1;
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)v3);
  return v1;
}
