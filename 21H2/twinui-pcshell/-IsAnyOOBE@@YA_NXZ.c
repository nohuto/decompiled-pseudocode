/*
 * XREFs of ?IsAnyOOBE@@YA_NXZ @ 0x1803BB7B4
 * Callers:
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C310C (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5724 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5804 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x180269A2C (-IsUserOOBE@@YA_NXZ.c)
 *     ?IsHolographicOOBE@@YA_NXZ @ 0x1803BB9BC (-IsHolographicOOBE@@YA_NXZ.c)
 *     ?IsMobileOOBE@@YA_NXZ @ 0x1803BBB84 (-IsMobileOOBE@@YA_NXZ.c)
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
