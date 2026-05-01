/*
 * XREFs of _TabViewManager::CreateDwmSharedThumbnailVisual_::_1_::dtor$2 @ 0x1802DCC36
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TabViewManager::CreateDwmSharedThumbnailVisual_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 64));
}
