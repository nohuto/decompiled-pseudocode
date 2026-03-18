/*
 * XREFs of ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C0078F70
 * Callers:
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x1C0038E50 (imp_WdfPdoClearEjectionRelationsDevices.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010A9C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010B60 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0062124 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0091494 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

void __fastcall FxPkgPdo::ClearEjectionDevicesList(FxPkgPdo *this)
{
  FxRelatedDeviceList *m_EjectionDeviceList; // rcx
  FxRelatedDevice *NextEntry; // rax
  FxTransactionedList *v4; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx

  m_EjectionDeviceList = this->m_EjectionDeviceList;
  if ( m_EjectionDeviceList )
  {
    FxTransactionedList::LockForEnum(m_EjectionDeviceList, this->m_Globals);
    while ( 1 )
    {
      NextEntry = FxRelatedDeviceList::GetNextEntry(this->m_EjectionDeviceList, 0LL);
      m_Globals = this->m_Globals;
      if ( !NextEntry )
        break;
      FxTransactionedList::SearchForAndRemove(v4, m_Globals, NextEntry->m_DeviceObject);
    }
    FxTransactionedList::UnlockFromEnum(v4, m_Globals);
  }
}
