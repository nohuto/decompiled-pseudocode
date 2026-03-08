/*
 * XREFs of _dynamic_atexit_destructor_for__g_spHotkeyCallback__ @ 0x140007340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_spHotkeyCallback__()
{
  return wil::com_ptr_t<HotKeyCallback,wil::err_returncode_policy>::~com_ptr_t<HotKeyCallback,wil::err_returncode_policy>(&g_spHotkeyCallback);
}
