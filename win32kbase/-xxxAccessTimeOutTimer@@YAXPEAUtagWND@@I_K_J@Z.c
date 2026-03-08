/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E48F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0017820 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C0090D50 (PostWinlogonMessage.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01E6170 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0241574 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C0241DC8 (ApiSetEditionPostRitSound.c)
 */

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
