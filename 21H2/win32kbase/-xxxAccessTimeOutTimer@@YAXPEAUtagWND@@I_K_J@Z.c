/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B99B0
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C0059750 (PostWinlogonMessage.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C005FA80 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01BAF10 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C020A3A8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C020AA7C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rdx

  if ( (xmmword_1C0295A4C & 1) != 0
    || (dword_1C0295A44 & 1) != 0
    || (dword_1C0295A24 & 1) != 0
    || (dword_1C0295A0C & 1) != 0
    || (dword_1C0298C94 & 1) != 0
    || (dword_1C02959FC & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    LODWORD(xmmword_1C0295A4C) = xmmword_1C0295A4C & 0xFFFFFFFE;
    xxxTurnOffStickyKeys();
    dword_1C0295A24 &= ~1u;
    dword_1C0295A0C &= ~1u;
    dword_1C0298C94 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C02959FC &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (qword_1C0295A14 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v1, 0LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  }
  SetAccessEnabledFlag();
}
