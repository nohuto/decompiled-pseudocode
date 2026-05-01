/*
 * XREFs of ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1802127F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutParser::SetCurrentRegion(__int64 a1, __int64 *a2)
{
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
           (LPVOID *)(a1 + 152),
           a2);
}
