__int64 __fastcall FxWmiIrpHandler::Dispatch(FxWmiIrpHandler *this, _IRP *Irp)
{
  unsigned __int8 v4; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  FxWmiProvider *ProviderLocked; // rsi
  _LIST_ENTRY **InstanceReferencedLocked; // r13
  unsigned __int8 _a3; // bl
  unsigned __int64 v9; // r12
  $2577F5D74A6AFCBEE1DF62E423AAEAA5 *v10; // r14
  const void *_a1; // rax
  __int64 v12; // r8
  _FX_DRIVER_GLOBALS *v13; // r10
  unsigned __int8 v14; // r8
  NTSTATUS Status; // ebx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  char v17; // r15
  char v18; // bp
  int (__fastcall *Handler)(FxWmiIrpHandler *, _IRP *, FxWmiProvider *, FxWmiInstance *); // rax
  NTSTATUS v20; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  char v24; // [rsp+98h] [rbp+10h]
  char v25; // [rsp+A0h] [rbp+18h]

  irql = 0;
  FX_TRACK_DRIVER(this->m_Globals);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  ProviderLocked = 0LL;
  InstanceReferencedLocked = 0LL;
  v25 = 0;
  v24 = 0;
  _a3 = CurrentStackLocation->MinorFunction;
  v9 = _a3;
  v10 = &this->96;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
    WPP_IFR_SF_qqcq(v13, 5u, 0xDu, 0xEu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, *(const void **)(v12 + 144), _a3, Irp);
  }
  if ( _a3 > 9u && _a3 != 11
    || (_DEVICE_OBJECT *)CurrentStackLocation->Parameters.WMI.ProviderId != v10->m_DeviceBase->m_DeviceObject.m_DeviceObject )
  {
LABEL_28:
    m_DeviceObject = v10->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    if ( m_DeviceObject )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(m_DeviceObject, Irp);
      goto LABEL_31;
    }
LABEL_30:
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
    goto LABEL_31;
  }
  if ( _a3 == 8 || _a3 == 11 )
  {
    Status = 0;
    goto LABEL_19;
  }
  FxNonPagedObject::Lock(this, &irql, v4);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(
                     this,
                     (_GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName);
  if ( ProviderLocked )
  {
    Status = 0;
    if ( !FxWmiIrpHandler::m_WmiDispatchTable[v9].CheckInstance
      || (Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters, (Parameters[1].ReadMode & 0x80u) != 0)
      && (InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(
                                       ProviderLocked,
                                       Parameters[1].MaximumInstances,
                                       (void *)v9)) != 0LL )
    {
      FxObject::AddRef(
        ProviderLocked,
        (void *)v9,
        735,
        "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
      goto LABEL_16;
    }
    Status = -1073741162;
  }
  else
  {
    Status = -1073741163;
  }
  ProviderLocked = 0LL;
LABEL_16:
  FxNonPagedObject::Unlock(this, irql, v14);
  if ( Status < 0 )
  {
    v17 = v25;
    v18 = 1;
    Irp->IoStatus.Status = Status;
    goto $Done_13;
  }
LABEL_19:
  Handler = FxWmiIrpHandler::m_WmiDispatchTable[v9].Handler;
  if ( Handler )
  {
    v20 = Handler(this, Irp, ProviderLocked, (FxWmiInstance *)InstanceReferencedLocked);
    v18 = v24;
    v17 = 1;
    Status = v20;
  }
  else
  {
    v18 = v24;
    v17 = v24;
  }
$Done_13:
  if ( InstanceReferencedLocked )
    ((void (__fastcall *)(_LIST_ENTRY **, unsigned __int64, __int64, const char *))(*InstanceReferencedLocked)[1].Flink)(
      InstanceReferencedLocked,
      v9,
      765LL,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( ProviderLocked )
    ProviderLocked->Release(
      ProviderLocked,
      (void *)v9,
      770,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( !v17 )
  {
    if ( v18 )
      goto LABEL_30;
    goto LABEL_28;
  }
LABEL_31:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&v10->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return (unsigned int)Status;
}
