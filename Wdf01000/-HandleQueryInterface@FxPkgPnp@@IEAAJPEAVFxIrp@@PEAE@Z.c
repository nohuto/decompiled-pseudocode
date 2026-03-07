int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _SINGLE_LIST_ENTRY *v7; // rbx
  _SINGLE_LIST_ENTRY *v8; // rbp
  _QWORD *QuadPart; // r13
  const _GUID *InterfaceType; // rdi
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxCompanionTarget *v13; // rcx
  int Status; // edi
  _SINGLE_LIST_ENTRY *Next; // r15
  char v16; // r15
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v18; // rdx
  int v19; // eax
  _SINGLE_LIST_ENTRY *v20; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  size_t Next_low; // r8
  NTSTATUS v23; // eax
  void (__fastcall *v24)(_QWORD); // rax
  _IO_STACK_LOCATION *v25; // rcx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp+20h]

  m_Irp = Irp->m_Irp;
  *CompleteRequest = 0;
  Parameters = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  QuadPart = 0LL;
  InterfaceType = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( FxIsEqualGuid(InterfaceType, &FxPkgPnp::GUID_POWER_THREAD_INTERFACE) )
    return FxPkgPnp::HandleQueryInterfaceForPowerThread(this, Irp, CompleteRequest);
  if ( FxIsEqualGuid(InterfaceType, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD) )
  {
    if ( FxDevice::IsPdo(this->m_Device) )
      return FxPkgPdo::HandleQueryInterfaceForReenumerate((FxPkgPdo *)this, Irp, CompleteRequest);
  }
  else if ( FxIsEqualGuid(InterfaceType, &GUID_SECURE_DRIVER_INTERFACE) && this->m_CompanionTarget )
  {
    return FxCompanionTarget::HandleQueryInterfaceForSecureDriver(v13, Irp, CompleteRequest);
  }
  Status = Irp->m_Irp->IoStatus.Status;
  FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, v12, 0LL);
  Next = this->m_QueryInterfaceHead.Next;
  if ( Next )
  {
    while ( 1 )
    {
      v8 = Next - 5;
      if ( FxIsEqualGuid(
             Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryInterface.InterfaceType,
             (const _GUID *)&Next[-5]) )
      {
        break;
      }
      Next = Next->Next;
      if ( !Next )
        goto LABEL_12;
    }
    v20 = v8[2].Next;
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( v20 )
    {
      Next_low = LOWORD(v20->Next);
      if ( (unsigned __int16)Next_low > CurrentStackLocation->Parameters.QueryInterface.Size
        || WORD1(v20->Next) > CurrentStackLocation->Parameters.QueryInterface.Version )
      {
        Status = -1073741306;
LABEL_12:
        v8 = 0LL;
        goto LABEL_13;
      }
      if ( !LOBYTE(v8[6].Next) )
        memmove(QuadPart, v20, Next_low);
    }
    v7 = v8[4].Next;
    Status = 0;
    v16 = BYTE1(v8[6].Next);
  }
  else
  {
LABEL_13:
    v16 = 0;
  }
  this->m_QueryInterfaceLock.m_OwningThread = 0LL;
  KeSetEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( Status < 0 )
  {
    if ( v8 )
      goto LABEL_36;
  }
  else if ( v8 )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    if ( v7 )
    {
      v19 = ((__int64 (__fastcall *)(unsigned __int64, __int64, _QWORD *, _NAMED_PIPE_CREATE_PARAMETERS *))v7)(
              ObjectHandleUnchecked,
              v18,
              QuadPart,
              Parameters);
      Status = v19;
      if ( v19 < 0 && v19 != -1073741637 )
        goto LABEL_36;
    }
    else
    {
      Status = 0;
    }
    if ( v16 )
    {
      v23 = PnpPassThroughQI(this->m_Device, Irp);
    }
    else
    {
      v24 = (void (__fastcall *)(_QWORD))QuadPart[2];
      if ( v24 )
        v24(QuadPart[1]);
      if ( FxDevice::IsPdo(this->m_Device) )
        goto LABEL_36;
      Irp->m_Irp->IoStatus.Status = Status;
      v25 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v25[-1].MajorFunction = *(_OWORD *)&v25->MajorFunction;
      *(_OWORD *)&v25[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v25->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v25[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v25->Parameters.SetQuota + 6);
      v25[-1].FileObject = v25->FileObject;
      v25[-1].Control = 0;
      v23 = FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
    }
    Status = v23;
LABEL_36:
    *CompleteRequest = 1;
  }
  return Status;
}
