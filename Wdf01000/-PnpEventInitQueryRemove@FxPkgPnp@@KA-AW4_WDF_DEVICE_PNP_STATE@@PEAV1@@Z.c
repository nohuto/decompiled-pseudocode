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
