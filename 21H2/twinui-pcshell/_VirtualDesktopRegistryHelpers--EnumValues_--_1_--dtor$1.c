/*
 * XREFs of _VirtualDesktopRegistryHelpers::EnumValues_::_1_::dtor$1 @ 0x1804A47A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopRegistryHelpers::EnumValues_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(a2 + 80);
}
