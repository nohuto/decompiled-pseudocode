__int64 __fastcall FxCompanionTarget::HandleQueryInterfaceForSecureDriver(
        FxCompanionTarget *this,
        FxIrp *Irp,
        unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _LARGE_INTEGER ByteOffset; // rax
  unsigned int v6; // ecx

  m_Irp = Irp->m_Irp;
  *CompleteRequest = 1;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.QueryInterface.Version == 1
    && CurrentStackLocation->Parameters.QueryInterface.Size >= 0x38u )
  {
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    *(_QWORD *)(ByteOffset.QuadPart + 16) = FxDeviceBase::AddChildList;
    *(_QWORD *)(ByteOffset.QuadPart + 24) = FxDeviceBase::AddChildList;
    v6 = 0;
    *(_QWORD *)(ByteOffset.QuadPart + 40) = 0LL;
    *(_QWORD *)(ByteOffset.QuadPart + 32) = 0LL;
    *(_QWORD *)(ByteOffset.QuadPart + 8) = 0LL;
    *(_DWORD *)ByteOffset.QuadPart = 65592;
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v6;
}
