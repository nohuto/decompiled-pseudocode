/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01E6170
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0017E70 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B7A0 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E48F0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E5C10 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01E62D0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0241574 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void xxxTurnOffStickyKeys(void)
{
  unsigned int v0; // edx
  _BOOL8 (__fastcall **i)(struct tagKE *, __int64, __int64, __int64); // rax

  v0 = 0;
  for ( i = (_BOOL8 (__fastcall **)(struct tagKE *, __int64, __int64, __int64))off_1C0281D00; ; ++i )
  {
    ++v0;
    if ( *i == xxxStickyKeys )
      break;
    if ( v0 >= 5 )
      return;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, v0);
  dword_1C02D1594 &= ~1u;
  gLatchBits = 0;
  gLockBits = 0;
  ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
}
