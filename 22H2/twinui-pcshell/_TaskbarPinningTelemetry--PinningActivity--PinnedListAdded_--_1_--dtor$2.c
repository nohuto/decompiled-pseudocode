/*
 * XREFs of _TaskbarPinningTelemetry::PinningActivity::PinnedListAdded_::_1_::dtor$2 @ 0x18015AB0E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarPinningTelemetry::PinningActivity::PinnedListAdded_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(a2 + 128);
}
