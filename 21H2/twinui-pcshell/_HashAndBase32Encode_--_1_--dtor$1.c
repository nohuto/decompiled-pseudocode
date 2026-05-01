/*
 * XREFs of _HashAndBase32Encode_::_1_::dtor$1 @ 0x1804CFC56
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall HashAndBase32Encode_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,int (*)(unsigned __int64),&int CryptDestroyHash(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,int (*)(unsigned __int64),&int CryptDestroyHash(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>((HCRYPTHASH *)(a2 + 48));
}
