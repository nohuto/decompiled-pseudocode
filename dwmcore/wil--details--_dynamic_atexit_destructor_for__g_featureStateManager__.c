/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x180120060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__()
{
  wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::destroy((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
}
