/*
 * XREFs of ?InvokeClient@FxPnpDeviceSelfManagedIoCleanup@@MEAAJXZ @ 0x1C000FD60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoCleanup::InvokeClient(FxPowerDeviceWakeFromSxTriggered *this)
{
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  m_Method = this->m_Method;
  if ( m_Method )
    m_Method(this->m_Device);
  return 0LL;
}
