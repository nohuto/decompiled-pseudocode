/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x180120040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__()
{
  wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::destroy((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
}
