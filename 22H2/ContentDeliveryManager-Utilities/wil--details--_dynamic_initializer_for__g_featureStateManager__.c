/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180003B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18019B508 = 0LL;
  xmmword_18019B4D8 = 0LL;
  xmmword_18019B4E8 = 0LL;
  xmmword_18019B4F8 = 0LL;
  InitializeCriticalSectionEx(&stru_18019B510, 0, 0);
  qword_18019B578 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_18019B538 = 0LL;
  xmmword_18019B548 = 0LL;
  xmmword_18019B558 = 0LL;
  xmmword_18019B568 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
