/*
 * XREFs of ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0064A70
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C006CC10 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?Dispose@FxUsbDevice@@MEAAEXZ @ 0x1C0070580 (-Dispose@FxUsbDevice@@MEAAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0059E94 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxIoTarget::Dispose(FxIoTarget *this)
{
  if ( this->m_AddedToDeviceList )
    this->m_DeviceBase->RemoveIoTarget(this->m_DeviceBase, this);
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  this->Remove(this);
  return 0;
}
