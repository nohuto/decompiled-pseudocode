__int64 __fastcall FxPkgPnp::HandleQueryDeviceRelations(FxPkgPnp *this, FxIrp *Irp, FxRelatedDeviceList *List)
{
  __int64 result; // rax
  unsigned int v7; // r12d
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  unsigned __int64 ObjectHandleUnchecked; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *, _DEVICE_RELATION_TYPE); // rax
  unsigned int v11; // ebx
  unsigned int *Information; // rdi
  FxRelatedDevice *NextEntry; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  _DWORD *Pool2; // rbp
  __int64 i; // rbx
  unsigned __int8 m_Retries; // bl
  const void *_a1; // rax
  bool v20; // bl
  size_t v21; // rax
  FxRelatedDevice *v22; // rbx
  FxRelatedDevice *v23; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  DEVICE_RELATION_TYPE Type; // [rsp+98h] [rbp+20h]

  if ( !List )
    return 3221225659LL;
  v7 = 0;
  m_Globals = this->m_Globals;
  Type = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryDeviceRelations.Type;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceRelationsQuery.m_Method;
  if ( m_Method )
    ((void (__fastcall *)(unsigned __int64))m_Method)(ObjectHandleUnchecked);
  v11 = 0;
  Information = (unsigned int *)Irp->m_Irp->IoStatus.Information;
  FxTransactionedList::LockForEnum(List, m_Globals);
  NextEntry = 0LL;
  while ( 1 )
  {
    NextEntry = FxRelatedDeviceList::GetNextEntry(List, NextEntry);
    if ( !NextEntry )
      break;
    ++v11;
  }
  if ( v11 )
  {
    if ( Information )
      v11 += *Information;
  }
  else if ( !List->m_NeedReportMissing || Information )
  {
    FxTransactionedList::UnlockFromEnum(List, m_Globals);
    return 3221225659LL;
  }
  v14 = FxChildList::_ComputeRelationsSize(v11);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v14, v15);
  if ( Pool2 )
  {
    if ( Information && *Information )
    {
      v21 = FxChildList::_ComputeRelationsSize(*Information);
      memmove(Pool2, Information, v21);
    }
    v22 = 0LL;
    while ( 1 )
    {
      v23 = FxRelatedDeviceList::GetNextEntry(List, v22);
      v22 = v23;
      if ( !v23 )
        break;
      m_DeviceObject = v23->m_DeviceObject;
      if ( v23->m_State == RelatedDeviceStateNeedsReportPresent )
        v23->m_State = RelatedDeviceStateReportedPresent;
      *(_QWORD *)&Pool2[2 * *Pool2 + 2] = m_DeviceObject;
      ObfReferenceObject(m_DeviceObject);
      ++*Pool2;
    }
    List->m_Retries = 0;
    v20 = 0;
  }
  else
  {
    if ( Information )
    {
      for ( i = 0LL; (unsigned int)i < *Information; i = (unsigned int)(i + 1) )
        ObfDereferenceObject(*(PVOID *)&Information[2 * i + 2]);
    }
    ++List->m_Retries;
    v7 = -1073741670;
    m_Retries = List->m_Retries;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x1Eu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, Type, 0xC000009A);
    v20 = m_Retries < 3u;
  }
  FxTransactionedList::UnlockFromEnum(List, this->m_Globals);
  if ( Information )
    ExFreePoolWithTag(Information, 0);
  if ( v20 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, Type);
  result = v7;
  Irp->m_Irp->IoStatus.Status = v7;
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)Pool2;
  return result;
}
