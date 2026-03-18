/*
 * XREFs of ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x1C0031DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C003258C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDmaEnabler::Dispose(FxDmaEnabler *this)
{
  FxDmaEnabler::ReleaseResources(this);
  if ( (*((_BYTE *)this + 380) & 1) != 0 )
    this->m_DeviceBase->RemoveDmaEnabler(this->m_DeviceBase, this);
  return 1;
}
