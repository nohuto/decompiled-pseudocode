/*
 * XREFs of ?IsAnyOOBE@@YA_NXZ @ 0x1803BB4E4
 * Callers:
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C2E3C (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5454 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5534 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x18026987C (-IsUserOOBE@@YA_NXZ.c)
 *     ?IsHolographicOOBE@@YA_NXZ @ 0x1803BB6EC (-IsHolographicOOBE@@YA_NXZ.c)
 *     ?IsMobileOOBE@@YA_NXZ @ 0x1803BB8B4 (-IsMobileOOBE@@YA_NXZ.c)
 */

char IsAnyOOBE(void)
{
  char v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( IsUserOOBE() || v2 || (unsigned int)OOBEComplete(&v2) && !v2 || IsMobileOOBE() || IsHolographicOOBE() )
    return 1;
  return v0;
}
