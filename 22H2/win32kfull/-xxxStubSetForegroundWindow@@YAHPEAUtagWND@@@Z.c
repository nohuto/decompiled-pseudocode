/*
 * XREFs of ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C0125ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

_BOOL8 __fastcall xxxStubSetForegroundWindow(struct tagWND *a1)
{
  return xxxSetForegroundWindowWithOptions((__int64)a1, 2LL, 0LL, 1LL) != 0;
}
