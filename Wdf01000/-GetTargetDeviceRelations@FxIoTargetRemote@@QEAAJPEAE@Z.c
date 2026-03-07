__int64 __fastcall FxIoTargetRemote::GetTargetDeviceRelations(FxIoTargetRemote *this, unsigned __int8 *Close)
{
  _IRP *v4; // rbx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  PIRP v6; // rax
  PIRP v7; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v9; // esi
  _DEVICE_OBJECT **Information; // rcx
  const void *_a1; // rax
  FxAutoIrp irp; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(this->m_TargetDevice);
  v6 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v7 = v6;
  if ( v6 )
  {
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    v4 = v6;
    irp.m_Irp = v6;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    v6->IoStatus.Status = -1073741637;
    v9 = FxIrp::SendIrpSynchronously(&irp, AttachedDeviceReference);
    if ( v9 >= 0 )
    {
      Information = (_DEVICE_OBJECT **)v4->IoStatus.Information;
      this->m_TargetPdo = Information[1];
      ExFreePoolWithTag(Information, 0);
    }
    if ( v9 != -1073741670 )
    {
      v9 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v9 = -1073741670;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1, -1073741670);
    v7 = 0LL;
  }
  *Close = 1;
LABEL_8:
  ObfDereferenceObject(AttachedDeviceReference);
  if ( v7 )
    IoFreeIrp(v4);
  return (unsigned int)v9;
}
