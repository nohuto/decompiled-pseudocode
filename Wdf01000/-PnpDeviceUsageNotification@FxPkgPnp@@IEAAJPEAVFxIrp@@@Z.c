__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  FxIrp *v2; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v5; // esi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int _a6; // r13d
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r14d
  _FX_DRIVER_GLOBALS *v9; // rcx
  $2577F5D74A6AFCBEE1DF62E423AAEAA5 *v10; // r15
  _FX_DRIVER_GLOBALS *v11; // rcx
  unsigned int v12; // ebx
  _DEVICE_OBJECT **v14; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  FxDevice *m_DeviceBase; // rcx
  __int64 v19; // r8
  _IRP *v20; // rax
  const void *v21; // rax
  int v22; // edx
  _FX_DRIVER_GLOBALS *v23; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rax
  CCHAR v25; // bl
  FxRelatedDevice *v26; // r12
  FxRelatedDevice *NextEntry; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  char StackSize; // bl
  CCHAR m_DeviceObject; // cl
  _IRP *v31; // rax
  const void *v32; // rax
  int v33; // edx
  FxRelatedDevice *v34; // r13
  FxRelatedDevice *v35; // rax
  FxRelatedDevice *v36; // rbx
  FxRelatedDevice *v37; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  char v39; // bl
  char v40; // r12
  FxIrp *v41; // rdx
  __int32 v42; // eax
  __int64 v43; // r8
  _DEVICE_OBJECT *v44; // rax
  FxIrp *v45; // rbx
  FxIrp *v46; // r8
  _IO_STACK_LOCATION *v47; // rcx
  _IRP *m_Irp; // rax
  FxRelatedDevice *v49; // r13
  FxRelatedDevice *v50; // rax
  _WDF_SPECIAL_FILE_TYPE v51; // eax
  __int64 v52; // r8
  void (__fastcall *v53)(__int64, _QWORD, __int64); // r9
  __int64 v54; // r10
  _WDF_SPECIAL_FILE_TYPE v55; // eax
  __int64 v56; // r8
  __int64 (__fastcall *v57)(__int64, _QWORD, __int64); // r9
  __int64 v58; // r10
  __int64 v59; // r8
  int v60; // r9d
  _DEVICE_OBJECT *v61; // rax
  _IO_STACK_LOCATION *v62; // rcx
  unsigned int v63; // r9d
  FxRelatedDevice *v64; // r14
  FxRelatedDevice *v65; // rax
  FxPowerPolicyOwnerSettings *v66; // r15
  FxPowerPolicyOwnerSettings *v67; // rcx
  int v68; // eax
  FxTagTracker *m_TagTracker; // rcx
  _FX_DRIVER_GLOBALS *v70; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  MxDeviceObject topOfParentStack; // [rsp+60h] [rbp-19h] BYREF
  MxAutoWorkItem workItem; // [rsp+68h] [rbp-11h] BYREF
  FxRelatedDeviceList *v74; // [rsp+70h] [rbp-9h]
  FxAutoIrp relatedIrp; // [rsp+78h] [rbp-1h] BYREF
  FxAutoIrp parentIrp; // [rsp+80h] [rbp+7h] BYREF
  FxRelatedDevice *Entry; // [rsp+88h] [rbp+Fh]
  MxDeviceObject dependentDevice; // [rsp+E0h] [rbp+67h] BYREF
  FxIrp *OriginalIrp; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 Lock; // [rsp+F0h] [rbp+77h]
  unsigned int OldFlags; // [rsp+F8h] [rbp+7Fh]

  OriginalIrp = Irp;
  v2 = Irp;
  relatedIrp.m_Irp = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Eu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
  v5 = 0;
  CurrentStackLocation = v2->m_Irp->Tail.Overlay.CurrentStackLocation;
  _a6 = CurrentStackLocation->Parameters.SetLock.Lock;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  v9 = this->m_Globals;
  if ( v9->FxVerboseOn )
    WPP_IFR_SF_DDDDDDD(
      v9,
      this->m_SpecialSupport[3],
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[2],
      traceGuid,
      _a5,
      _a6,
      this->m_SpecialSupport[0],
      this->m_SpecialSupport[2],
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[3],
      this->m_SpecialSupport[5]);
  if ( (unsigned int)(_a5 - 1) > 5
    || (v10 = &this->96, (_BYTE)_a6) && !BYTE1(v10->m_DeviceBase[1].m_Globals) && !this->m_SpecialSupport[_a5 - 1] )
  {
    v11 = this->m_Globals;
    v5 = -1073741822;
    if ( v11->FxVerboseOn )
      WPP_IFR_SF_dd(v11, 5u, 0xCu, 0x40u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
    goto LABEL_11;
  }
  if ( !Mx::MxHasEnoughRemainingThreadStack() && (FxDevice::IsPdo(v10->m_Device) || this->m_UsageDependentDeviceList) )
  {
    v5 = MxWorkItem::Allocate(&workItem, v14[18], v14);
    if ( v5 < 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
      WPP_IFR_SF_qqddd(
        this->m_Globals,
        v16,
        0xCu,
        0x41u,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v16 + 144),
        _a5,
        _a6,
        v5);
      goto LABEL_11;
    }
  }
  v17 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, _a6);
  m_DeviceBase = (FxDevice *)v10->m_DeviceBase;
  OldFlags = v17;
  if ( FxDevice::IsPdo(m_DeviceBase) )
  {
    topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v19 + 224) + 144LL));
    v20 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
    if ( v20 )
    {
      parentIrp.m_Irp = v20;
      v5 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, v2, 0);
    }
    else
    {
      v5 = -1073741670;
      v21 = (const void *)FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
      WPP_IFR_SF_qqddd(
        this->m_Globals,
        v22,
        0xCu,
        0x42u,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        v21,
        topOfParentStack.m_DeviceObject,
        _a5,
        _a6,
        v22);
    }
    ObfDereferenceObject(topOfParentStack.m_DeviceObject);
    topOfParentStack.m_DeviceObject = 0LL;
    if ( v5 < 0 )
    {
      v23 = this->m_Globals;
      if ( v23->FxVerboseOn )
        WPP_IFR_SF_D(v23, 5u, 0xCu, 0x43u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v5);
      FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, v17);
      goto LABEL_11;
    }
  }
  m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
  v25 = 0;
  Entry = 0LL;
  LOBYTE(dependentDevice.m_DeviceObject) = 0;
  v74 = m_UsageDependentDeviceList;
  if ( !m_UsageDependentDeviceList )
  {
    v74 = 0LL;
    goto LABEL_47;
  }
  FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
  v26 = Entry;
  while ( 1 )
  {
    NextEntry = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v26);
    v26 = NextEntry;
    if ( !NextEntry )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(NextEntry->m_DeviceObject);
    StackSize = AttachedDeviceReference->StackSize;
    ObfDereferenceObject(AttachedDeviceReference);
    m_DeviceObject = StackSize;
    if ( StackSize <= SLOBYTE(dependentDevice.m_DeviceObject) )
      m_DeviceObject = (CCHAR)dependentDevice.m_DeviceObject;
    v25 = m_DeviceObject;
    LOBYTE(dependentDevice.m_DeviceObject) = m_DeviceObject;
  }
  v2 = OriginalIrp;
  if ( v25 <= 0 )
  {
LABEL_47:
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    v39 = 0;
    if ( m_Owner )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 16, 5);
      v5 = FxPowerIdleMachine::PowerReferenceWorker(
             &this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine,
             1u,
             FxPowerReferenceDefault,
             0LL,
             0,
             0LL);
      if ( v5 < 0 )
      {
        v2->m_Irp->IoStatus.Status = v5;
        goto LABEL_63;
      }
      v39 = 1;
    }
    v40 = v39;
    v41 = OriginalIrp;
    OriginalIrp->m_Irp->IoStatus.Status = v5;
    v5 = this->SendIrpSynchronously(this, v41);
    if ( v5 >= 0 )
    {
      if ( !(_BYTE)_a6
        || this->m_HasPowerThread
        || (v42 = FxPkgPnp::_UsageToSpecialType(_a5) - 1) != 0 && (unsigned int)(v42 - 1) >= 2
        || (v5 = this->QueryForPowerThread(this), v5 >= 0) )
      {
        FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
        if ( this->m_DeviceUsageNotification.m_Method )
        {
          v51 = FxPkgPnp::_UsageToSpecialType(_a5);
          LOBYTE(v52) = _a6;
          v53(v54, (unsigned int)v51, v52);
        }
        FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
        if ( this->m_DeviceUsageNotificationEx.m_Method )
        {
          v55 = FxPkgPnp::_UsageToSpecialType(_a5);
          LOBYTE(v56) = _a6;
          v5 = v57(v58, (unsigned int)v55, v56);
          if ( v5 < 0 )
          {
            if ( FxDevice::IsPdo(v10->m_Device) )
            {
              v61 = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v59 + 224) + 144LL));
              v2 = OriginalIrp;
              topOfParentStack.m_DeviceObject = v61;
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, OriginalIrp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v2 = OriginalIrp;
              v62 = OriginalIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v62[-1].MajorFunction = *(_OWORD *)&v62->MajorFunction;
              *(_OWORD *)&v62[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v62->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v62[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v62->Parameters.SetQuota + 6);
              v62[-1].FileObject = v62->FileObject;
              v62[-1].Control = v60;
              v2->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = v60;
              v2->m_Irp->IoStatus.Status = v60;
              FxIrp::SendIrpSynchronously(v2, v10->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            v63 = OldFlags;
            v2->m_Irp->IoStatus.Status = v5;
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, v63);
            v64 = 0LL;
            if ( v74 )
            {
              for ( OriginalIrp = 0LL;
                    ;
                    SendDeviceUsageNotification((MxDeviceObject *)&OriginalIrp, &relatedIrp, &workItem, v2, 1u) )
              {
                v65 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v64);
                v64 = v65;
                if ( !v65 )
                  break;
                OriginalIrp = (FxIrp *)v65->m_DeviceObject;
              }
            }
            goto LABEL_89;
          }
        }
        else
        {
          v5 = 0;
        }
        FxPkgPnp::CommitUsageNotification(this, _a5, OldFlags);
        v66 = this->m_PowerPolicyMachine.m_Owner;
        if ( v66 && _a5 == DeviceUsageTypeDumpFile )
        {
          v67 = this->m_PowerPolicyMachine.m_Owner;
          if ( (_BYTE)_a6 )
          {
            LODWORD(dependentDevice.m_DeviceObject) = 0;
            v68 = FxPowerIdleMachine::IoIncrementWithFlags(
                    &v67->m_PowerIdleMachine,
                    FxPowerReferenceDefault,
                    (unsigned int *)&dependentDevice);
            m_TagTracker = v66->m_PowerIdleMachine.m_TagTracker;
            if ( m_TagTracker && (!v68 || v68 == 259) )
              FxTagTracker::UpdateTagHistory(
                m_TagTracker,
                0LL,
                0,
                0LL,
                TagAddRef,
                (unsigned int)dependentDevice.m_DeviceObject);
          }
          else
          {
            FxPowerIdleMachine::IoDecrement(&v67->m_PowerIdleMachine, 0LL, 0, 0LL);
          }
        }
        v2 = OriginalIrp;
        goto LABEL_89;
      }
      if ( FxDevice::IsPdo(v10->m_Device) )
      {
        v44 = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v43 + 224) + 144LL));
        v45 = OriginalIrp;
        topOfParentStack.m_DeviceObject = v44;
        SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, OriginalIrp, 1u);
        ObfDereferenceObject(topOfParentStack.m_DeviceObject);
      }
      else
      {
        v46 = OriginalIrp;
        v47 = OriginalIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v47[-1].MajorFunction = *(_OWORD *)&v47->MajorFunction;
        *(_OWORD *)&v47[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v47->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v47[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v47->Parameters.SetQuota + 6);
        v47[-1].FileObject = v47->FileObject;
        v47[-1].Control = 0;
        v46->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
        v46->m_Irp->IoStatus.Status = 0;
        FxIrp::SendIrpSynchronously(v46, v10->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
        v45 = OriginalIrp;
      }
      m_Irp = v45->m_Irp;
      v39 = v40;
      m_Irp->IoStatus.Status = v5;
    }
    v2 = OriginalIrp;
LABEL_63:
    FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, OldFlags);
    Entry = 0LL;
    if ( v74 )
    {
      dependentDevice.m_DeviceObject = 0LL;
      v49 = Entry;
      while ( 1 )
      {
        v50 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v49);
        v49 = v50;
        if ( !v50 )
          break;
        dependentDevice.m_DeviceObject = v50->m_DeviceObject;
        SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, v2, 1u);
      }
    }
LABEL_89:
    if ( v39 )
      FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
    goto LABEL_91;
  }
  v31 = IoAllocateIrp(v25, 0);
  if ( v31 )
  {
    dependentDevice.m_DeviceObject = 0LL;
    v34 = 0LL;
    relatedIrp.m_Irp = v31;
    do
    {
      v35 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v34);
      v34 = v35;
      if ( !v35 )
      {
        LOBYTE(_a6) = Lock;
        goto LABEL_47;
      }
      dependentDevice.m_DeviceObject = v35->m_DeviceObject;
      v5 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, v2, 0);
    }
    while ( v5 >= 0 );
    v36 = 0LL;
    while ( 1 )
    {
      v37 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v36);
      v36 = v37;
      if ( !v37 || v37 == v34 )
        break;
      dependentDevice.m_DeviceObject = v37->m_DeviceObject;
      SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, v2, 1u);
    }
LABEL_91:
    if ( !v74 )
      goto LABEL_93;
    goto LABEL_92;
  }
  v5 = -1073741670;
  v32 = (const void *)FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
  WPP_IFR_SF_qddd(this->m_Globals, v33, 0xCu, 0x44u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v32, _a5, _a6, v33);
LABEL_92:
  FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
LABEL_93:
  v70 = this->m_Globals;
  if ( v70->FxVerboseOn )
    WPP_IFR_SF_D(v70, 5u, 0xCu, 0x45u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v5);
LABEL_11:
  v12 = FxPkgPnp::CompletePnpRequest(this, v2, v5);
  MxWorkItem::Free(&workItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v12;
}
