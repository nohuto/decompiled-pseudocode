/*
 * XREFs of ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x1C001425C
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C000E95C (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x1C00141E8 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPenQuickLaunchHotKey(int a1, char a2)
{
  return a1 == 8 && (unsigned __int8)(a2 + 127) <= 2u;
}
