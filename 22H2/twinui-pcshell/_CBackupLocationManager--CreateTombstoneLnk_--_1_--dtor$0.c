/*
 * XREFs of _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$0 @ 0x180154845
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 144);
}
