/*
 * XREFs of ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0038590
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0003E1C (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0041EE4 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0046154 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxMpDevice::Dispose(FxMpDevice *this)
{
  FxDisposeList *m_DisposeList; // rcx

  if ( _bittest16((const signed __int16 *)&this->24, 0xAu) )
    FxObject::CallCleanupCallbacks(this);
  FxObject::DestroyChildren(this);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList);
  ObfDereferenceObject(this->m_DeviceObject.m_DeviceObject);
  this->m_DeviceObject.m_DeviceObject = 0LL;
  this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  return 0;
}
