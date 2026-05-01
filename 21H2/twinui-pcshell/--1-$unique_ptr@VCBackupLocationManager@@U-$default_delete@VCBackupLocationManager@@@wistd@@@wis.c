/*
 * XREFs of ??1?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@QEAA@XZ @ 0x180152D50
 * Callers:
 *     _CPinnedList::InternalModify_::_1_::dtor$6 @ 0x180158FF7 (_CPinnedList--InternalModify_--_1_--dtor$6.c)
 *     _CPinnedList::PinShellLink_::_1_::dtor$1 @ 0x18015AA58 (_CPinnedList--PinShellLink_--_1_--dtor$1.c)
 *     _CPinList::_CreateTombstone_::_1_::dtor$0 @ 0x18015DBF3 (_CPinList--_CreateTombstone_--_1_--dtor$0.c)
 * Callees:
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x18015326C (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 */

CBackupLocationManager *__fastcall wistd::unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>::~unique_ptr<CBackupLocationManager,wistd::default_delete<CBackupLocationManager>>(
        CBackupLocationManager **a1,
        unsigned int a2)
{
  CBackupLocationManager *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CBackupLocationManager *)CBackupLocationManager::`scalar deleting destructor'(result, a2);
  return result;
}
