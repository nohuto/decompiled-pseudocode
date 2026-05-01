/*
 * XREFs of _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$6 @ 0x1801549FD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 152);
}
