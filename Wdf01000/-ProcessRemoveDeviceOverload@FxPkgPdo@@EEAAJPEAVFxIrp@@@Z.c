__int64 __fastcall FxPkgPdo::ProcessRemoveDeviceOverload(FxPkgPdo *this, FxIrp *Irp)
{
  if ( this->m_CanBeDeleted )
  {
    IoReleaseRemoveLockAndWaitEx(
      (PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
      Irp->m_Irp,
      0x20u);
    FxPkgPnp::CleanupStateMachines(this, 1u);
    FxPkgPnp::DeleteDevice(this);
    IofCompleteRequest(Irp->m_Irp, 0);
    Irp->m_Irp = 0LL;
    return 0LL;
  }
  else
  {
    this->m_DeviceRemoveProcessed = 0LL;
    return FxPkgPnp::CompletePnpRequest(this, Irp, Irp->m_Irp->IoStatus.Status);
  }
}
