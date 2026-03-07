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
