/*
 * XREFs of ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C00529F0
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C0059C80 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?Dispose@FxUsbDevice@@MEAAEXZ @ 0x1C005D3F0 (-Dispose@FxUsbDevice@@MEAAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0046154 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxIoTarget::Dispose(FxIoTarget *this)
{
  if ( this->m_AddedToDeviceList )
    this->m_DeviceBase->RemoveIoTarget(this->m_DeviceBase, this);
  if ( _bittest16((const signed __int16 *)&this->24, 0xAu) )
    FxObject::CallCleanupCallbacks(this);
  this->Remove(this);
  return 0;
}
