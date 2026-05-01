/*
 * XREFs of _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$1 @ 0x1801549C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 48);
}
