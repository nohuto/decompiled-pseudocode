/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem_SuppressPrivateApiUse__ @ 0x180001EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem_SuppressPrivateApiUse__())(wil::details *__hidden this, struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int)
{
  void (__fastcall *result)(wil::details *__hidden, struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int); // rax

  wil::details::g_pfnGetModuleName = (const char *(*)(void))wil::details::GetCurrentModuleName;
  wil::details::g_pfnDebugBreak = wil::details::DebugBreak;
  result = wil::details::WilDynamicLoadRaiseFailFastException;
  wil::details::g_pfnRaiseFailFastException = (void (*)(struct _EXCEPTION_RECORD *, struct _CONTEXT *, unsigned int))wil::details::WilDynamicLoadRaiseFailFastException;
  return result;
}
