/*
 * XREFs of ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C00735DC
 * Callers:
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C006A1BC (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B510 (-PnpEventStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F928 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004FE14 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxPkgPnp::NotifyResourceobjectsToReleaseResources(FxPkgPnp *this)
{
  _LIST_ENTRY *p_m_InterruptListHead; // r15
  _LIST_ENTRY *i; // r14
  int Flink_high; // edi
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx

  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
  {
    Flink_high = HIDWORD(i[-4].Flink);
    memset(&i[-6].Blink, 0, 0x40uLL);
    LODWORD(i[-6].Blink) = 64;
    i[-2].Blink = 0LL;
    HIDWORD(i[-4].Flink) = Flink_high;
  }
  m_DmaEnablerList = this->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    FxTransactionedList::UnlockFromEnum(this->m_DmaEnablerList, this->m_Globals);
  }
}
