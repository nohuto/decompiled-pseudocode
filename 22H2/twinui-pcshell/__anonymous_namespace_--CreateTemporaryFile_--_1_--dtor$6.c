/*
 * XREFs of __anonymous_namespace_::CreateTemporaryFile_::_1_::dtor$6 @ 0x180148E6A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _anonymous_namespace_::CreateTemporaryFile_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>((__int64 *)(a2 + 208));
}
