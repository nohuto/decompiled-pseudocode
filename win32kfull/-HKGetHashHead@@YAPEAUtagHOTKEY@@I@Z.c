/*
 * XREFs of ?HKGetHashHead@@YAPEAUtagHOTKEY@@I@Z @ 0x1C0098A7C
 * Callers:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C00989D0 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 * Callees:
 *     <none>
 */

struct tagHOTKEY *__fastcall HKGetHashHead(__int64 a1)
{
  return *(struct tagHOTKEY **)(SGDGetUserSessionState(a1) + 8 * (a1 & 0x7F) + 12736);
}
