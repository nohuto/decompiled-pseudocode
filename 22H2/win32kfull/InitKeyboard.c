/*
 * XREFs of InitKeyboard @ 0x1C003EF0C
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C0132780 (xxxRemoteReconnect.c)
 * Callees:
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C003CEA4 (-GetBiosNumLockStatus@@YAXXZ.c)
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1C006CF50 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 */

void InitKeyboard()
{
  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    ClearCachedHotkeyModifiers();
  }
}
