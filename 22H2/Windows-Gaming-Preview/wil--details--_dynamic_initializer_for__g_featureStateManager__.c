/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  xmmword_18005A0C8 = 0LL;
  xmmword_18005A0D8 = 0LL;
  InitializeCriticalSectionEx(&stru_18005A0E8, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_18005A110 = 0LL;
  xmmword_18005A120 = 0LL;
  xmmword_18005A130 = 0LL;
  xmmword_18005A140 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
