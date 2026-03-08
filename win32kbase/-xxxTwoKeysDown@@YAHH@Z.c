/*
 * XREFs of ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01E61D0
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E5C10 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01E62D0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0241574 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C0241DC8 (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall xxxTwoKeysDown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = dword_1C02D1594;
  v5 = a1;
  if ( (dword_1C02D1594 & 0x100) != 0 )
  {
    dword_1C02D1594 &= ~1u;
    if ( (v4 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, a2, 0LL);
    *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13832) = 0;
    *(_BYTE *)(SGDGetUserSessionState(v7, v6, v8, v9) + 13833) = 0;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, v5);
  gLatchBits = 0;
  gLockBits = 0;
  ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  return dword_1C02D1594 & 1;
}
