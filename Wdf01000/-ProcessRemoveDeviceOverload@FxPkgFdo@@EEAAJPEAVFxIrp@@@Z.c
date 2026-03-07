__int64 __fastcall FxPkgFdo::ProcessRemoveDeviceOverload(FxPkgFdo *this, FxIrp *Irp)
{
  FxIrp *v3; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx

  v3 = Irp;
  IoReleaseRemoveLockAndWaitEx(
    (PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
    Irp->m_Irp,
    0x20u);
  FxPkgPnp::CleanupStateMachines(this, 1u);
  CurrentStackLocation = v3->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  LODWORD(v3) = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, v3->m_Irp);
  FxPkgPnp::DeleteDevice(this);
  return (unsigned int)v3;
}
