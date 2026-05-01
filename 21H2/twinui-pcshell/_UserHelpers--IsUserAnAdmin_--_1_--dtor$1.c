/*
 * XREFs of _UserHelpers::IsUserAnAdmin_::_1_::dtor$1 @ 0x1800A7DEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserHelpers::IsUserAnAdmin_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(a2 + 56);
}
