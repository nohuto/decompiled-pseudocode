/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C01B9960
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01BA950 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C005FA20 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C020A3A8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C020AA7C (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // rdx

  dword_1C0295A24 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C0295A24 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v0, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
}
