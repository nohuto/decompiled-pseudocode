/*
 * XREFs of __anonymous_namespace_::GetWicBitmapFromStreamReference_::_1_::dtor$6 @ 0x180149F47
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _anonymous_namespace_::GetWicBitmapFromStreamReference_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWICBitmapDecoder,wil::err_exception_policy>::~com_ptr_t<IWICBitmapDecoder,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
