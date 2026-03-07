NTSTATUS __fastcall FxDefaultIrpHandler::Dispatch(FxDefaultIrpHandler *this, _IRP *Irp)
{
  char v4; // cl
  _IO_STACK_LOCATION *v5; // r9

  if ( (unsigned int)FxDevice::_RequiresRemLock(
                       Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
                       Irp->Tail.Overlay.CurrentStackLocation->MinorFunction) == 1 )
  {
    if ( v4 == 22 )
      PoStartNextPowerIrp(Irp);
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073741808;
    IofCompleteRequest(Irp, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  }
  else
  {
    if ( BYTE1(this->m_DeviceBase[1].m_Globals) )
    {
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = v5 + 1;
      return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
    }
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073741808;
    IofCompleteRequest(Irp, 0);
  }
  return -1073741808;
}
