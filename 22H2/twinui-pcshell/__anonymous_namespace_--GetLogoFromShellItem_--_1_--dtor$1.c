/*
 * XREFs of __anonymous_namespace_::GetLogoFromShellItem_::_1_::dtor$1 @ 0x1801397E3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _anonymous_namespace_::GetLogoFromShellItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWICBitmapDecoder,wil::err_exception_policy>::~com_ptr_t<IWICBitmapDecoder,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
