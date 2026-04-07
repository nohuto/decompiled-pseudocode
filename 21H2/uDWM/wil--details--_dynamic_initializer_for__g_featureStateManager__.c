/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800428BC (--0FeatureStateManager@details@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details::FeatureStateManager::FeatureStateManager((wil::details::FeatureStateManager *)wil::details::g_featureStateManager);
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
