/*
 * XREFs of ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B5CE0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0206BD0 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0207254 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x1C0207294 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x1C0207580 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C0207894 (ApiSetEditionSetAccessibilityTimer.c)
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
        dword_1C0290608 = 0;
        dword_1C029060C = 0;
        Value = 2000;
        if ( (dword_1C02905FC & 0x10) != 0 )
          ApiSetEditionPostRitSound(5LL, a2, 3LL);
      }
      return;
    }
    if ( (dword_1C02905FC & 0x10) != 0 )
      ApiSetEditionPostRitSound(5LL, a2, 2LL);
    dword_1C0290608 = 0;
    Value = 0;
    dword_1C029060C = 1000;
LABEL_20:
    ++gFilterKeysState;
    gtmridFKActivation = ApiSetEditionSetAccessibilityTimer(a3, 4000LL, FKActivationTimer);
    return;
  }
  v4 = dword_1C02905FC;
  if ( (dword_1C02905FC & 1) == 0 )
  {
    if ( (dword_1C02905FC & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, a2, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(2LL);
    goto LABEL_20;
  }
  dword_1C02905FC &= ~1u;
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
