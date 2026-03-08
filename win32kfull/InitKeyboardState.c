/*
 * XREFs of InitKeyboardState @ 0x1C01299B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1C00201D8 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 */

void __fastcall InitKeyboardState(__int64 a1)
{
  ClearCachedHotkeyModifiers(a1);
}
