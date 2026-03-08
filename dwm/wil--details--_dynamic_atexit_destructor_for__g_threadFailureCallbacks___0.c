/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks___0 @ 0x140007300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks___0()
{
  wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>(wil::details::g_threadFailureCallbacks);
}
