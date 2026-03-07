__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FILE_OBJECT *v6; // r9
  $2577F5D74A6AFCBEE1DF62E423AAEAA5 *v7; // r15
  int v8; // eax
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rax
  int v11; // edx
  int _a2; // ebx
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r13
  _LIST_ENTRY *Blink; // r13
  int v15; // eax
  FxIoQueue *v16; // rdx
  const void *ObjectHandleUnchecked; // rax
  int v18; // edx
  unsigned __int8 v19; // r8
  FxFileObject *v20; // r12
  _LIST_ENTRY *v21; // rsi
  int v22; // eax
  _LIST_ENTRY *v23; // rax
  FxObject *m_Driver; // rcx
  const void *v25; // rax
  __int64 _a3; // rdx
  FxDevice *v27; // rcx
  _LIST_ENTRY *v28; // r13
  _LIST_ENTRY *v29; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v30; // xmm1_8
  FxObject *v31; // rax
  int v32; // eax
  FxRequest *v33; // rsi
  const void *v34; // rax
  _LIST_ENTRY *i; // r13
  bool v36; // zf
  _LIST_ENTRY *v37; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v38; // xmm1_8
  FxObject *v39; // rax
  unsigned __int8 v40; // r8
  const void *v41; // rax
  FxNonPagedObject *v42; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *v44; // rdx
  _IRP *m_Irp; // rax
  FxObject *v46; // rcx
  const void *v47; // rax
  __int64 v48; // rdx
  int v49; // eax
  FxIoQueue *m_DefaultQueueForCreates; // rcx
  const void *v51; // rax
  unsigned __int16 v52; // r9
  _LIST_ENTRY *v53; // rbx
  FxFileObject *v54; // r13
  FxFileObjectFileCreate *v55; // r12
  FxRequest *v56; // rax
  FxObject *v57; // rcx
  _LIST_ENTRY *v58; // rcx
  char v59; // al
  _LIST_ENTRY *v60; // rcx
  _LIST_ENTRY *v61; // rdx
  FxIoQueue *m_DriverCreatedQueue; // rax
  int v63; // ebx
  const void *v64; // rax
  int v65; // edx
  WDFDEVICE__ *v66; // rax
  WDFREQUEST__ *v67; // r8
  _LIST_ENTRY *v69; // [rsp+50h] [rbp-49h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+58h] [rbp-41h]
  WDFFILEOBJECT__ *v71; // [rsp+60h] [rbp-39h]
  _FILE_OBJECT *FileObject; // [rsp+68h] [rbp-31h]
  _FILE_OBJECT *FileObjecta; // [rsp+68h] [rbp-31h]
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+70h] [rbp-29h] BYREF
  FxFileObject *pFxFO; // [rsp+100h] [rbp+67h] BYREF
  FxRequest *outputRequest; // [rsp+108h] [rbp+6Fh] BYREF
  char v77; // [rsp+110h] [rbp+77h]
  FxRequest *pRequest; // [rsp+118h] [rbp+7Fh] BYREF

  m_Globals = this->m_Globals;
  globals = m_Globals;
  memset(&attributes, 0, sizeof(attributes));
  pFxFO = 0LL;
  v71 = 0LL;
  CurrentStackLocation = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  pRequest = 0LL;
  v77 = 0;
  LOBYTE(outputRequest) = 0;
  v6 = CurrentStackLocation->FileObject;
  FileObject = v6;
  v69 = 0LL;
  v7 = &this->96;
  v8 = _InterlockedIncrement(&this->m_OpenHandleCount);
  m_DeviceBase = this->m_DeviceBase;
  if ( BYTE4(m_DeviceBase[1].m_Globals) && v8 > 2 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
    WPP_IFR_SF_q(m_Globals, 2u, v11 + 13, v11 + 21, WPP_FxPkgGeneral_cpp_Traceguids, _a1);
    _a2 = -1073741790;
LABEL_4:
    FxPkgGeneral::DecrementOpenHandleCount(this);
    FxIrp->m_Irp->IoStatus.Status = _a2;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
    goto $RequestIsGone;
  }
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  attributes.Size = 56;
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
  {
    Blink = this->m_FileObjectInfoHeadList.Blink;
    v69 = Blink;
    if ( LODWORD(Blink[5].Blink) )
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
    p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
    attributes.ExecutionLevel = this->m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
  }
  v15 = FxFileObject::_CreateFileObject(
          (FxDevice *)m_DeviceBase,
          FxIrp->m_Irp,
          (_WDF_FILEOBJECT_CLASS)LODWORD(m_DeviceBase[1].m_DisposeSingleEntry.Next),
          &attributes,
          v6,
          &pFxFO);
  v16 = 0LL;
  _a2 = v15;
  if ( v15 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v7->m_DeviceBase);
    WPP_IFR_SF_qd(m_Globals, 2u, v18 + 13, v18 + 22, WPP_FxPkgGeneral_cpp_Traceguids, ObjectHandleUnchecked, _a2);
    v20 = pFxFO;
LABEL_53:
    if ( v20 )
    {
      v42 = v20->m_DeviceBase;
      LOBYTE(pFxFO) = 0;
      FxNonPagedObject::Lock(v42, (unsigned __int8 *)&pFxFO, v19);
      Flink = v20->m_Link.Flink;
      if ( Flink->Blink != &v20->m_Link || (v44 = v20->m_Link.Blink, v44->Flink != &v20->m_Link) )
        __fastfail(3u);
      v44->Flink = Flink;
      Flink->Blink = v44;
      FxNonPagedObject::Unlock(v20->m_DeviceBase, (unsigned __int8)pFxFO, (unsigned __int8)Flink);
      FxObject::ClearEvtCallbacks(v20);
      ((void (*)(void))v20->DeleteObject)();
    }
    goto LABEL_4;
  }
  v20 = pFxFO;
  if ( pFxFO )
  {
    v71 = (WDFFILEOBJECT__ *)FxObject::GetObjectHandleUnchecked(pFxFO);
    v21 = this->m_FileObjectInfoHeadList.Blink->Blink;
    while ( 1 )
    {
      if ( v21 == p_m_FileObjectInfoHeadList )
        goto LABEL_17;
      v69 = v21;
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&v21[5].Blink;
      if ( _mm_cvtsi128_si32(*(__m128i *)&attributes.Size) )
      {
        attributes.ParentObject = v16;
        attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
        attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
        v22 = FxObjectAllocateContext(v20, &attributes, 1u, 0LL);
        v16 = 0LL;
        _a2 = v22;
        if ( v22 < 0 )
          break;
      }
      v21 = v21->Blink;
      p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
    }
    v23 = v21[9].Blink;
    if ( v23 )
      m_Driver = (FxObject *)v23[1].Flink;
    else
      m_Driver = v7->m_DeviceBase->m_Driver;
    FxObject::GetObjectHandleUnchecked(m_Driver);
    v25 = (const void *)FxObject::GetObjectHandleUnchecked(v7->m_DeviceBase);
    WPP_IFR_SF_qqqd(globals, 2u, 0xDu, 0x17u, WPP_FxPkgGeneral_cpp_Traceguids, &v21[5].Blink, v25, _a3, _a2);
    goto LABEL_53;
  }
LABEL_17:
  if ( this->m_DriverCreatedQueue == v16 && (this->m_Flags & 0xC) == 0 )
  {
    if ( BYTE1(v7->m_DeviceBase[1].m_ChildEntry.Blink) == (_BYTE)v16 )
    {
      _a2 = (int)v16;
      FxIrp->m_Irp->IoStatus.Status = (int)v16;
      FxIrp->m_Irp->IoStatus.Information = (unsigned __int64)v16;
      IofCompleteRequest(FxIrp->m_Irp, 0);
      FxIrp->m_Irp = 0LL;
    }
    else
    {
      return (unsigned int)FxPkgGeneral::ForwardCreateRequest(this, FxIrp, FxPkgGeneral::_CreateCompletionRoutine, this);
    }
    return (unsigned int)_a2;
  }
  if ( p_m_FileObjectInfoHeadList->Flink == p_m_FileObjectInfoHeadList )
  {
    v27 = (FxDevice *)v7->m_DeviceBase;
    attributes = *(_WDF_OBJECT_ATTRIBUTES *)&v7->m_DeviceBase[2].m_ExecutionLevel;
  }
  else
  {
    v28 = this->m_FileObjectInfoHeadList.Blink;
    v69 = v28;
    if ( BYTE4(v28[9].Flink) == (_BYTE)v16 )
    {
      v31 = v7->m_DeviceBase;
      *(_OWORD *)&attributes.Size = *(_OWORD *)&v7->m_DeviceBase[2].m_ExecutionLevel;
      *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v31[5].m_ChildEntry.Blink;
      *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v31[5].m_DeviceBase;
      v30 = *(const _WDF_OBJECT_CONTEXT_TYPE_INFO **)&v31[6].m_Type;
    }
    else
    {
      v29 = v28[9].Blink;
      *(_LIST_ENTRY *)&attributes.Size = v29[2];
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v29[3];
      *(_LIST_ENTRY *)&attributes.ParentObject = v29[4];
      v30 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v29[5].Flink;
    }
    attributes.ContextTypeInfo = v30;
    v27 = (FxDevice *)v7->m_DeviceBase;
  }
  if ( v27->m_CxDeviceInfoListHead.Flink != &v27->m_CxDeviceInfoListHead )
  {
    attributes.ExecutionLevel = WdfExecutionLevelDispatch;
    attributes.SynchronizationScope = WdfSynchronizationScopeNone;
    attributes.ParentObject = v16;
  }
  v32 = FxRequest::_CreateForPackage(v27, &attributes, FxIrp->m_Irp, &pRequest);
  v33 = pRequest;
  _a2 = v32;
  if ( v32 < 0 )
  {
    v34 = (const void *)FxObject::GetObjectHandleUnchecked(v7->m_DeviceBase);
    WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v34, _a2);
$Error:
    if ( v33 )
    {
      FxObject::ClearEvtCallbacks(v33);
      ((void (*)(void))v33->DeleteObject)();
    }
    goto LABEL_53;
  }
  for ( i = this->m_FileObjectInfoHeadList.Blink->Blink; i != &this->m_FileObjectInfoHeadList; i = i->Blink )
  {
    v36 = BYTE4(i[9].Flink) == 0;
    v69 = i;
    pRequest = (FxRequest *)i;
    if ( v36 )
    {
      v39 = v7->m_DeviceBase;
      *(_OWORD *)&attributes.Size = *(_OWORD *)&v7->m_DeviceBase[2].m_ExecutionLevel;
      *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v39[5].m_ChildEntry.Blink;
      *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v39[5].m_DeviceBase;
      v38 = *(const _WDF_OBJECT_CONTEXT_TYPE_INFO **)&v39[6].m_Type;
    }
    else
    {
      v37 = i[9].Blink;
      *(_LIST_ENTRY *)&attributes.Size = v37[2];
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v37[3];
      *(_LIST_ENTRY *)&attributes.ParentObject = v37[4];
      v38 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v37[5].Flink;
    }
    attributes.ContextTypeInfo = v38;
    if ( attributes.Size )
    {
      attributes.ParentObject = 0LL;
      attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
      attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
      _a2 = FxObjectAllocateContext(v33, &attributes, 1u, 0LL);
      if ( _a2 < 0 )
      {
        m_Irp = pRequest->m_Irp.m_Irp;
        if ( m_Irp )
          v46 = *(FxObject **)&m_Irp->Flags;
        else
          v46 = v7->m_DeviceBase->m_Driver;
        FxObject::GetObjectHandleUnchecked(v46);
        v47 = (const void *)FxObject::GetObjectHandleUnchecked(v7->m_DeviceBase);
        WPP_IFR_SF_qid(globals, 2u, 0xDu, 0x19u, WPP_FxPkgGeneral_cpp_Traceguids, v47, v48, _a2);
        goto $Error;
      }
    }
  }
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v77 = 1;
  }
  if ( (this->m_Flags & 4) != 0 || !this->m_DriverCreatedQueue )
  {
    outputRequest = 0LL;
    if ( this->m_ExecutionLevel == WdfExecutionLevelPassive && KeGetCurrentIrql() >= 2u )
    {
      _a2 = -1073741808;
      v41 = (const void *)FxObject::GetObjectHandleUnchecked(v7->m_DeviceBase);
      WPP_IFR_SF_qid(globals, 2u, 0xDu, 0x1Au, WPP_FxPkgGeneral_cpp_Traceguids, v41, (__int64)FxIrp->m_Irp, -1073741808);
      goto $Error;
    }
    v49 = FxIoQueue::QueueRequest(this->m_DefaultQueueForCreates, v33, v40);
    m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
    _a2 = v49;
    if ( v49 < 0 )
    {
      v51 = (const void *)FxObject::GetObjectHandleUnchecked(m_DefaultQueueForCreates);
      v52 = 27;
LABEL_64:
      WPP_IFR_SF_qd(globals, 2u, 0xDu, v52, WPP_FxPkgGeneral_cpp_Traceguids, v51, _a2);
      goto $RequestIsGone;
    }
    if ( FxIoQueue::GetRequest(m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
      goto LABEL_94;
    LOBYTE(outputRequest) = 1;
  }
  if ( (this->m_Flags & 4) == 0 || (v53 = this->m_FileObjectInfoHeadList.Blink, v53 == &this->m_FileObjectInfoHeadList) )
  {
    v55 = (FxFileObjectFileCreate *)v69;
  }
  else
  {
    v54 = pFxFO;
    do
    {
      v55 = (FxFileObjectFileCreate *)v53;
      if ( !BYTE4(v53[9].Flink) )
        break;
      if ( v54 )
        v54->m_PkgContext = v53->Blink;
      v56 = (FxRequest *)FxObject::GetObjectHandleUnchecked(v33);
      v57 = v7->m_DeviceBase;
      pRequest = v56;
      FileObjecta = (_FILE_OBJECT *)FxObject::GetObjectHandleUnchecked(v57);
      if ( v53[2].Blink )
      {
        v58 = v53[2].Flink;
        LOBYTE(pFxFO) = 0;
        if ( v58 )
          ((void (__fastcall *)(_LIST_ENTRY *, FxFileObject **))v58->Flink[1].Flink)(v58, &pFxFO);
        v59 = ((__int64 (__fastcall *)(_FILE_OBJECT *, FxRequest *, WDFFILEOBJECT__ *))v53[2].Blink)(
                FileObjecta,
                pRequest,
                v71);
        v60 = v53[2].Flink;
        LOBYTE(pRequest) = v59;
        if ( v60 )
        {
          v61 = v60->Flink;
          LOBYTE(v61) = (_BYTE)pFxFO;
          ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *))v60->Flink[1].Blink)(v60, v61);
          v59 = (char)pRequest;
        }
        if ( v59 )
          goto LABEL_94;
      }
      v53 = v53->Blink;
    }
    while ( v53 != &this->m_FileObjectInfoHeadList );
  }
  m_DriverCreatedQueue = this->m_DriverCreatedQueue;
  if ( !m_DriverCreatedQueue )
  {
    if ( (this->m_Flags & 8) != 0 )
    {
      FxObject::GetObjectHandleUnchecked(v33);
      v66 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v7->m_DeviceBase);
      FxFileObjectFileCreate::Invoke(v55 + 1, v66, v67, v71);
    }
    else
    {
      if ( !BYTE1(v7->m_DeviceBase[1].m_ChildEntry.Blink) )
      {
        v65 = 0;
        goto LABEL_93;
      }
      FxPkgGeneral::ForwardCreateRequest(this, FxIrp, FxPkgGeneral::_CreateCompletionRoutine2, v33);
    }
LABEL_94:
    _a2 = 259;
    goto $RequestIsGone;
  }
  if ( (_BYTE)outputRequest )
  {
    v63 = FxIoQueue::ForwardRequest(this->m_DefaultQueueForCreates, this->m_DriverCreatedQueue, v33);
    if ( v63 < 0 )
    {
      v64 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DriverCreatedQueue);
      WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v64, v63);
      v65 = v63;
LABEL_93:
      FxRequest::Complete(v33, v65);
      goto LABEL_94;
    }
    goto LABEL_94;
  }
  _a2 = FxIoQueue::QueueRequest(m_DriverCreatedQueue, v33, v40);
  if ( _a2 < 0 )
  {
    v51 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DriverCreatedQueue);
    v52 = 29;
    goto LABEL_64;
  }
$RequestIsGone:
  if ( v77 )
    KeLeaveCriticalRegion();
  return (unsigned int)_a2;
}
