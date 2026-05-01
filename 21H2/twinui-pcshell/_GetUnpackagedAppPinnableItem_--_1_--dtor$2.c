/*
 * XREFs of _GetUnpackagedAppPinnableItem_::_1_::dtor$2 @ 0x18013A90F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUnpackagedAppPinnableItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 104);
}
