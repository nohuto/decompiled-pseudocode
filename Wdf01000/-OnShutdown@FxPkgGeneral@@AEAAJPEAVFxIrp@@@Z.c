__int64 __fastcall FxPkgGeneral::OnShutdown(FxPkgGeneral *this, FxIrp *FxIrp)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  unsigned int v5; // ebx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  _IRP *m_Irp; // rcx

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  v5 = 0;
  m_Method = this->m_EvtDeviceShutdown.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)ObjectHandleUnchecked);
  m_Irp = FxIrp->m_Irp;
  if ( BYTE1(this->m_DeviceBase[1].m_Globals) )
  {
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    m_Irp->IoStatus.Status = 0;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  return v5;
}
