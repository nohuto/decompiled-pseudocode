void __fastcall FxPkgPnp::PnpFinishProcessingIrp(FxPkgPnp *this, unsigned __int8 IrpMustBePresent)
{
  _IRP *m_PendingPnPIrp; // rdx
  unsigned int Status; // r8d
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  m_PendingPnPIrp = this->m_PendingPnPIrp;
  if ( m_PendingPnPIrp )
  {
    if ( m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation->MinorFunction && m_PendingPnPIrp->IoStatus.Status >= 0 )
    {
      this->m_PnpMachine.m_FireAndForget = 1;
    }
    else
    {
      this->m_PendingPnPIrp = 0LL;
      Status = m_PendingPnPIrp->IoStatus.Status;
      irp.m_Irp = m_PendingPnPIrp;
      FxPkgPnp::CompletePnpRequest(this, &irp, Status);
    }
  }
}
