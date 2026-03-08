/*
 * XREFs of atexit @ 0x140005920
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1400010D0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1400010F0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001110 (_dynamic_initializer_for__g_dwmAppHost__.c)
 *     _dynamic_initializer_for__g_spHotkeyCallback__ @ 0x140001140 (_dynamic_initializer_for__g_spHotkeyCallback__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x140001160 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     pre_c_initialization @ 0x140005260 (pre_c_initialization.c)
 * Callees:
 *     _onexit @ 0x1400058E0 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
