/*
 * XREFs of InitKeyboard @ 0x1C007B470
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 * Callees:
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1C00201D8 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C0079414 (-GetBiosNumLockStatus@@YAXXZ.c)
 */

void InitKeyboard()
{
  __int64 v0; // rcx

  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    ClearCachedHotkeyModifiers(v0);
  }
}
