/*
 * XREFs of _CPinList::_CreateTombstone_::_1_::dtor$0 @ 0x18015DBF3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CBackupLocationManager *__fastcall CPinList::_CreateTombstone_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>::~unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>(
           (CBackupLocationManager **)(a2 + 64),
           a2);
}
