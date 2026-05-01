/*
 * XREFs of ??$?9GU?$char_traits@G@std@@$00@std@@YA_NV?$basic_string_view@GU?$char_traits@G@std@@@0@0@Z @ 0x180129B04
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

char __fastcall std::operator!=<unsigned short,std::char_traits<unsigned short>,1>(__int64 *a1, unsigned __int16 **a2)
{
  return std::_Traits_equal<std::char_traits<unsigned short>>(
           *a1,
           a1[1],
           *a2,
           _mm_srli_si128(*(__m128i *)a2, 8).m128i_i64[0]) ^ 1;
}
