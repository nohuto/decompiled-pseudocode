/*
 * XREFs of _lambda_7ebe327a947a791a3f61eeb2c5c67313_::__lambda_7ebe327a947a791a3f61eeb2c5c67313_ @ 0x180135A18
 * Callers:
 *     wil::details::lambda_call__lambda_7ebe327a947a791a3f61eeb2c5c67313___::_lambda_call__lambda_7ebe327a947a791a3f61eeb2c5c67313___ @ 0x180135D38 (wil--details--lambda_call__lambda_7ebe327a947a791a3f61eeb2c5c67313___--_lambda_call__lambda_7ebe.c)
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x180138B94 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_7ebe327a947a791a3f61eeb2c5c67313_::__lambda_7ebe327a947a791a3f61eeb2c5c67313_(__int64 a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)(a1 + 32));
  return std::wstring::_Tidy_deallocate((_QWORD *)a1);
}
