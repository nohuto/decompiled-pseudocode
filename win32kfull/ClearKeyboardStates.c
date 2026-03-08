/*
 * XREFs of ClearKeyboardStates @ 0x1C0020194
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1C00201D8 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 */

void __fastcall ClearKeyboardStates(__int64 a1)
{
  __int64 i; // rbx
  __int64 v2; // rax

  for ( i = 0LL; i < 64; ++i )
  {
    v2 = SGDGetUserSessionState(a1);
    *(_BYTE *)(v2 + i + 13992) &= 0xAAu;
  }
  ClearKeyboardToggleStates();
  ClearCachedHotkeyModifiers();
}
