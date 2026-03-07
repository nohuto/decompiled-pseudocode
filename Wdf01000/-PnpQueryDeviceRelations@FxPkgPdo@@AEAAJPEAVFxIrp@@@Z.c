int __fastcall FxPkgPdo::PnpQueryDeviceRelations(FxPkgPdo *this, FxIrp *Irp)
{
  int Status; // ebx
  unsigned int Length; // ecx
  __int64 Pool2; // r14
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  _IRP *m_Irp; // rax
  const void *_a1; // rax
  FxRelatedDeviceList *m_RemovalDeviceList; // r8

  Status = Irp->m_Irp->IoStatus.Status;
  Length = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length == 1 || Length == 3 )
    {
      if ( Length == 3 )
        m_RemovalDeviceList = this->m_RemovalDeviceList;
      else
        m_RemovalDeviceList = this->m_EjectionDeviceList;
      Status = FxPkgPnp::HandleQueryDeviceRelations(this, Irp, m_RemovalDeviceList);
      if ( Status == -1073741637 )
        Status = Irp->m_Irp->IoStatus.Status;
    }
    else if ( Length == 4 )
    {
      Pool2 = ExAllocatePool2(256LL, 16LL, this->m_Globals->Tag);
      if ( Pool2 )
      {
        m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
        ObfReferenceObject(m_DeviceObject);
        m_Irp = Irp->m_Irp;
        *(_QWORD *)(Pool2 + 8) = m_DeviceObject;
        Status = 0;
        *(_DWORD *)Pool2 = 1;
        m_Irp->IoStatus.Information = Pool2;
      }
      else
      {
        Status = -1073741670;
        Irp->m_Irp->IoStatus.Information = 0LL;
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xBu, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, _a1, -1073741670);
      }
    }
  }
  else
  {
    Status = FxPkgPnp::HandleQueryBusRelations(this, Irp);
  }
  return FxPkgPnp::CompletePnpRequest(this, Irp, Status);
}
