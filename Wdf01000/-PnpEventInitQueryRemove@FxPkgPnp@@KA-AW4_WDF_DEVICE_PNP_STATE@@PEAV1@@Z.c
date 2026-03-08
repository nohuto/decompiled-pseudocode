/*
 * XREFs of ?PnpEventInitQueryRemove@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventInitQueryRemove(FxPkgPnp *This)
{
  _IRP *m_PendingPnPIrp; // rax
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  m_PendingPnPIrp = This->m_PendingPnPIrp;
  This->m_PendingPnPIrp = 0LL;
  irp.m_Irp = m_PendingPnPIrp;
  m_PendingPnPIrp->IoStatus.Status = 0;
  This->FireAndForgetIrp(This, &irp);
  return 314LL;
}
