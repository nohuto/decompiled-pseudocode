/*
 * XREFs of _GetPinnablePidl_::_1_::dtor$2 @ 0x18013A153
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPinnablePidl_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 48);
}
