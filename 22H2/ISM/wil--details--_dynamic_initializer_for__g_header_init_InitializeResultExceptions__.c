/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__ @ 0x180001440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeResultExceptions__())(wil::details *__hidden this, unsigned __int16 *, unsigned __int64, bool *)
{
  __int64 (__fastcall *result)(wil::details *__hidden, unsigned __int16 *, unsigned __int64, bool *); // rax

  wil::details::g_pfnRethrow = (void (*)(void))wil::details::Rethrow;
  wil::details::g_pfnThrowResultException = (void (*)(const struct wil::FailureInfo *))wil::details::ThrowResultExceptionInternal;
  result = wil::details::ResultFromCaughtExceptionInternal;
  g_pfnResultFromCaughtExceptionInternal = (__int64)wil::details::ResultFromCaughtExceptionInternal;
  return result;
}
