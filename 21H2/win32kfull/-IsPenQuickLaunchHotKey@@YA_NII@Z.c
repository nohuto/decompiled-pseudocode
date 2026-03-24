/*
 * XREFs of ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C0105CC8
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C01052A0 (xxxDoHotKeyStuff.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C0105C5C (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPenQuickLaunchHotKey(int a1, int a2)
{
  return a1 == 8 && (unsigned int)(a2 - 129) <= 2;
}
