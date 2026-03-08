/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C01E48A0
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01E5AD0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0017850 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0241574 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C0241DC8 (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // rdx

  dword_1C02D1574 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C02D1574 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v0, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
}
