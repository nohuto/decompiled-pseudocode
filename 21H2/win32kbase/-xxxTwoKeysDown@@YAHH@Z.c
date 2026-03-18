/*
 * XREFs of ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01BAF70
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01BAA50 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01BB060 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C020A3A8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C020AA7C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall xxxTwoKeysDown(int a1, __int64 a2)
{
  char v2; // al

  v2 = dword_1C0295A44;
  if ( (dword_1C0295A44 & 0x100) != 0 )
  {
    dword_1C0295A44 &= ~1u;
    if ( (v2 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, a2, 0LL);
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, a1);
  gLatchBits = 0;
  gLockBits = 0;
  ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  return dword_1C0295A44 & 1;
}
