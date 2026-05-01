/*
 * XREFs of ??1?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180152BD0
 * Callers:
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$4 @ 0x180154875 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$4.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$1 @ 0x18015DA8F (_CPinList--_CreateTombstone_--_1_--dtor$1.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$3 @ 0x18015DAA7 (_CPinList--_CreateTombstone_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        __int64 a1)
{
  return wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
           a1,
           0LL);
}
