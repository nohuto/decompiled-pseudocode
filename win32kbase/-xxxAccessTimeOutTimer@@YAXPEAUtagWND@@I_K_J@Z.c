void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rdx

  if ( (dword_1C02D159C & 1) != 0
    || (dword_1C02D1594 & 1) != 0
    || (dword_1C02D1574 & 1) != 0
    || (dword_1C02D155C & 1) != 0
    || (dword_1C02D49D4 & 1) != 0
    || (dword_1C02D154C & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    dword_1C02D159C &= ~1u;
    xxxTurnOffStickyKeys();
    dword_1C02D1574 &= ~1u;
    dword_1C02D155C &= ~1u;
    dword_1C02D49D4 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C02D154C &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (dword_1C02D1564 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v1, 0LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  }
  SetAccessEnabledFlag();
}
