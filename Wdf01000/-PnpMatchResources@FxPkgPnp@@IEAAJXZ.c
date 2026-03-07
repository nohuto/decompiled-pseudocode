__int64 __fastcall FxPkgPnp::PnpMatchResources(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v3; // r12d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // rdi
  int _a2; // esi
  const void *_a1; // rax
  unsigned __int16 v8; // r9
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  _LIST_ENTRY *i; // rax
  FxCmResList *m_Resources; // rax
  _LIST_ENTRY *v12; // r14
  _LIST_ENTRY **p_Blink; // r15
  _LIST_ENTRY **v14; // rbp
  _LIST_ENTRY *v15; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v16; // r13
  _LIST_ENTRY *v17; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *v19; // rcx
  const void *ObjectHandleUnchecked; // rax
  unsigned int Blink_high; // [rsp+80h] [rbp+8h]
  _LIST_ENTRY *v23; // [rsp+88h] [rbp+10h]
  FxCollectionInternal *v24; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  v3 = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x1Du, WPP_PnpStateMachine_cpp_Traceguids);
  this->m_PnpState.Value = this->m_PnpState.Value & 0xFFFFF3CF | 0x820;
  CurrentStackLocation = this->m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  _a2 = FxCmResList::BuildFromWdmList(
          this->m_ResourcesRaw,
          CurrentStackLocation->Parameters.StartDevice.AllocatedResources,
          0);
  if ( _a2 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v8 = 30;
LABEL_5:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, v8, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2);
    goto $Done_59;
  }
  _a2 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 0);
  if ( _a2 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v8 = 31;
    goto LABEL_5;
  }
  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
  {
    i[-5].Blink = 0LL;
    LOWORD(i[-2].Flink) = 0;
    BYTE4(i[-4].Blink) = 0;
    BYTE1(i[-3].Blink) = 0;
    LODWORD(i[-3].Flink) = 0;
    LODWORD(i[-4].Blink) = 0;
    BYTE1(i[-19].Blink) = 0;
  }
  m_Resources = this->m_Resources;
  v12 = &this->m_InterruptListHead;
  p_Blink = &m_Resources->m_ListHead.Flink[-1].Blink;
  v24 = &m_Resources->FxCollectionInternal;
  v14 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  if ( p_Blink == (_LIST_ENTRY **)&m_Resources->FxCollectionInternal )
    goto LABEL_20;
  while ( 1 )
  {
    v15 = *v14;
    v16 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*v14)[6].Blink;
    if ( v16->Type == 2 )
      break;
LABEL_19:
    p_Blink = &p_Blink[1][-1].Blink;
    v14 = &v14[1][-1].Blink;
    if ( p_Blink == (_LIST_ENTRY **)v24 )
      goto LABEL_20;
  }
  v12 = v12->Flink;
  if ( v12 != p_m_InterruptListHead )
  {
    v17 = *p_Blink;
    v23 = *p_Blink;
    Blink_high = HIWORD(v15[6].Blink);
    if ( (BYTE2((*p_Blink)[6].Blink) & 2) != 0 && HIWORD(v15[6].Blink) > 1u )
    {
      do
      {
        if ( v12 == p_m_InterruptListHead )
          break;
        FxInterrupt::AssignResources(
          (FxInterrupt *)&v12[-28].Blink,
          v16,
          (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v17[6].Blink);
        v12 = v12->Flink;
        ++v3;
        v17 = v23;
      }
      while ( v3 < Blink_high );
      v3 = 0;
    }
    else
    {
      FxInterrupt::AssignResources(
        (FxInterrupt *)&v12[-28].Blink,
        v16,
        (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v17[6].Blink);
    }
    goto LABEL_19;
  }
  ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0x20u, WPP_PnpStateMachine_cpp_Traceguids, ObjectHandleUnchecked);
LABEL_20:
  m_DeviceBase = this->m_DeviceBase;
  if ( BYTE1(m_DeviceBase[1].m_Globals) )
  {
    if ( (m_DeviceBase->m_AttachedDevice.m_DeviceObject->Characteristics & 1) != 0 )
      m_DeviceBase->m_DeviceObject.m_DeviceObject->Characteristics |= 1u;
    FxDevice::SetFilterIoType(this->m_Device);
  }
$Done_59:
  v19 = this->m_Globals;
  if ( v19->FxVerboseOn )
    WPP_IFR_SF_D(v19, 5u, 0xCu, 0x21u, WPP_PnpStateMachine_cpp_Traceguids, _a2);
  return (unsigned int)_a2;
}
