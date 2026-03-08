/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1400072E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  return wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::~ProcessLocalStorage<wil::details_abi::ProcessLocalData>((__int64)&wil::details::g_processLocalData);
}
