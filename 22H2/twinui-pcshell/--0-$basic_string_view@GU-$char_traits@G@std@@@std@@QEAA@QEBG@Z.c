/*
 * XREFs of ??0?$basic_string_view@GU?$char_traits@G@std@@@std@@QEAA@QEBG@Z @ 0x18021D27C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::basic_string_view<unsigned short>::basic_string_view<unsigned short,std::char_traits<unsigned short>>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax

  *a1 = a2;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  a1[1] = v2;
  return a1;
}
