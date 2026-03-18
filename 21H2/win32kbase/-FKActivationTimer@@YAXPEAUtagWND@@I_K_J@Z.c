/*
 * XREFs of ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B9070
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0209254 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C020A3A8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x1C020A4F4 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x1C020AA7C (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C020B760 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall FKActivationTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  char v4; // al

  if ( gFilterKeysState == 1 )
    goto LABEL_20;
  if ( gFilterKeysState != 2 )
  {
    if ( gFilterKeysState != 3 )
    {
      if ( gFilterKeysState == 4 )
      {
        HIDWORD(xmmword_1C0295A4C) = 0;
        Value = 0;
        DWORD1(xmmword_1C0295A4C) = 2000;
        if ( (xmmword_1C0295A4C & 0x10) != 0 )
          ApiSetEditionPostRitSound(5LL, a2, 3LL);
      }
      return;
    }
    if ( (xmmword_1C0295A4C & 0x10) != 0 )
      ApiSetEditionPostRitSound(5LL, a2, 2LL);
    HIDWORD(xmmword_1C0295A4C) = 0;
    DWORD1(xmmword_1C0295A4C) = 0;
    Value = 1000;
LABEL_20:
    ++gFilterKeysState;
    gtmridFKActivation = ApiSetEditionSetAccessibilityTimer(a3, 4000LL, FKActivationTimer);
    return;
  }
  v4 = xmmword_1C0295A4C;
  if ( (xmmword_1C0295A4C & 1) == 0 )
  {
    if ( (xmmword_1C0295A4C & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, a2, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(2LL);
    goto LABEL_20;
  }
  LODWORD(xmmword_1C0295A4C) = xmmword_1C0295A4C & 0xFFFFFFFE;
  if ( (v4 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, a2, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
  if ( gtmridFKResponse )
  {
    ApiSetEditionKillAccessibilityTimer();
    gtmridFKResponse = 0LL;
  }
  if ( gtmridFKAcceptanceDelay )
  {
    ApiSetEditionKillAccessibilityTimer();
    gtmridFKAcceptanceDelay = 0LL;
  }
}
