/*
 * XREFs of _GetUnpackagedAppPinnableItem_::_1_::dtor$3 @ 0x18013A7AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUnpackagedAppPinnableItem_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 64);
}
