/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeResultHeader__ @ 0x140001010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *wil::details::_dynamic_initializer_for__g_header_init_InitializeResultHeader__()
{
  void *result; // rax

  wil::details::g_pfnGetContextAndNotifyFailure = (__int64)wil::details::GetContextAndNotifyFailure;
  wil::details_abi::g_pProcessLocalData = (__int64)&wil::details::g_processLocalData;
  result = &wil::details::g_threadFailureCallbacks;
  wil::details::g_pThreadFailureCallbacks = (__int64)&wil::details::g_threadFailureCallbacks;
  return result;
}
