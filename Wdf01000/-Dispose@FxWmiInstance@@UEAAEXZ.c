/*
 * XREFs of ?Dispose@FxWmiInstance@@UEAAEXZ @ 0x1C0028BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C0028554 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 */

unsigned __int8 __fastcall FxWmiInstance::Dispose(FxWmiInstance *this, __int64 a2, unsigned __int8 a3)
{
  FxWmiProvider::RemoveInstance(this->m_Provider, this, a3);
  this->m_Provider->Release(
    this->m_Provider,
    this,
    52,
    "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp");
  return 1;
}
