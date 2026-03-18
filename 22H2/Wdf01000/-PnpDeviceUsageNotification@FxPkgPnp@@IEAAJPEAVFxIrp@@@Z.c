/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00810DC
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C00830F0 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C00019B8 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0004B54 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000598C (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010A9C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010B60 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0013EA0 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C0014268 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0017610 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C002F86C (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0041384 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_qqddd @ 0x1C0059310 (WPP_IFR_SF_qqddd.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C00793A4 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C007FE8C (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C008280C (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0082E4C (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C0083400 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_DDDDDDD @ 0x1C0083588 (WPP_IFR_SF_DDDDDDD.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C008ABE8 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0091494 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  CCHAR m_DeviceObject; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v6; // esi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int _a6; // r13d
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r14d
  unsigned __int8 v10; // al
  _DEVICE_OBJECT **v11; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  FxDevice *m_Device; // rcx
  __int64 v16; // r8
  _IRP *v17; // rax
  const void *v18; // rax
  int v19; // edx
  _FX_DRIVER_GLOBALS *v20; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rax
  FxRelatedDevice *v22; // rbx
  FxRelatedDeviceList *v23; // rcx
  FxRelatedDevice *NextEntry; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  CCHAR StackSize; // bl
  bool v27; // cc
  _IRP *v28; // rax
  const void *v29; // rax
  int v30; // edx
  FxRelatedDeviceList *v31; // r12
  FxRelatedDevice *v32; // r13
  FxRelatedDevice *v33; // rax
  FxRelatedDevice *v34; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int32 v36; // eax
  __int64 v37; // r8
  _IO_STACK_LOCATION *v38; // rcx
  FxRelatedDevice *v39; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  _WDF_SPECIAL_FILE_TYPE v41; // eax
  __int64 v42; // r8
  void (__fastcall *v43)(__int64, _QWORD, __int64); // r9
  __int64 v44; // r10
  _WDF_SPECIAL_FILE_TYPE v45; // eax
  __int64 v46; // r8
  __int64 (__fastcall *v47)(__int64, _QWORD, __int64); // r9
  __int64 v48; // r10
  __int64 v49; // r8
  _IO_STACK_LOCATION *v50; // rcx
  unsigned int v51; // r9d
  FxRelatedDevice *v52; // rax
  FxPowerPolicyOwnerSettings *v53; // rcx
  _FX_DRIVER_GLOBALS *v54; // rcx
  _FX_DRIVER_GLOBALS *v55; // rcx
  unsigned int v56; // ebx
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  MxAutoWorkItem workItem; // [rsp+60h] [rbp-19h] BYREF
  FxRelatedDeviceList *v60; // [rsp+68h] [rbp-11h]
  FxAutoIrp relatedIrp; // [rsp+70h] [rbp-9h] BYREF
  FxAutoIrp parentIrp; // [rsp+78h] [rbp-1h] BYREF
  FxRelatedDevice *v63; // [rsp+80h] [rbp+7h]
  unsigned __int8 Lock; // [rsp+E0h] [rbp+67h]
  char v65; // [rsp+E0h] [rbp+67h]
  MxDeviceObject dependentDevice; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int OldFlags; // [rsp+F0h] [rbp+77h]
  MxDeviceObject topOfParentStack; // [rsp+F8h] [rbp+7Fh] BYREF

  m_DeviceObject = 0;
  relatedIrp.m_Irp = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Eu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
    m_Globals = this->m_Globals;
  }
  v6 = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  _a6 = CurrentStackLocation->Parameters.SetLock.Lock;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_DDDDDDD(
      m_Globals,
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
  if ( (unsigned int)(_a5 - 1) <= 5 )
  {
    if ( (_BYTE)_a6 )
    {
      if ( BYTE1(this->m_DeviceBase[1].m_Globals) )
        goto LABEL_11;
      v10 = this->m_SpecialSupport[_a5 - 1];
    }
    else
    {
      v10 = 1;
    }
    if ( v10 )
    {
LABEL_11:
      if ( !Mx::MxHasEnoughRemainingThreadStack()
        && (FxDevice::IsPdo(this->m_Device) || this->m_UsageDependentDeviceList) )
      {
        v6 = MxWorkItem::Allocate(&workItem, v11[18], v11);
        if ( v6 < 0 )
        {
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            v13,
            0xCu,
            0x41u,
            (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
            ObjectHandleUnchecked,
            *(const void **)(v13 + 144),
            _a5,
            _a6,
            v6);
          goto LABEL_92;
        }
      }
      v14 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, _a6);
      m_Device = this->m_Device;
      OldFlags = v14;
      if ( FxDevice::IsPdo(m_Device) )
      {
        topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v16 + 224) + 144LL));
        v17 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
        if ( v17 )
        {
          parentIrp.m_Irp = v17;
          v6 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 0);
        }
        else
        {
          v6 = -1073741670;
          v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            v19,
            0xCu,
            0x42u,
            (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
            v18,
            topOfParentStack.m_DeviceObject,
            _a5,
            _a6,
            v19);
        }
        ObfDereferenceObject(topOfParentStack.m_DeviceObject);
        topOfParentStack.m_DeviceObject = 0LL;
        if ( v6 < 0 )
        {
          v20 = this->m_Globals;
          if ( v20->FxVerboseOn )
            WPP_IFR_SF_d(v20, 5u, 0xCu, 0x43u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v6);
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, v14);
          goto LABEL_92;
        }
      }
      m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
      v22 = 0LL;
      v60 = m_UsageDependentDeviceList;
      if ( m_UsageDependentDeviceList )
      {
        FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
        while ( 1 )
        {
          v23 = this->m_UsageDependentDeviceList;
          LOBYTE(dependentDevice.m_DeviceObject) = m_DeviceObject;
          NextEntry = FxRelatedDeviceList::GetNextEntry(v23, v22);
          v22 = 0LL;
          v63 = NextEntry;
          if ( !NextEntry )
            break;
          AttachedDeviceReference = IoGetAttachedDeviceReference(NextEntry->m_DeviceObject);
          StackSize = AttachedDeviceReference->StackSize;
          ObfDereferenceObject(AttachedDeviceReference);
          m_DeviceObject = StackSize;
          v27 = StackSize <= SLOBYTE(dependentDevice.m_DeviceObject);
          v22 = v63;
          if ( v27 )
            m_DeviceObject = (CCHAR)dependentDevice.m_DeviceObject;
        }
      }
      else
      {
        v60 = 0LL;
      }
      if ( m_DeviceObject > 0 )
      {
        v28 = IoAllocateIrp(m_DeviceObject, 0);
        if ( !v28 )
        {
          v6 = -1073741670;
          v29 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          WPP_IFR_SF_qddd(
            this->m_Globals,
            v30,
            0xCu,
            0x44u,
            (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
            v29,
            _a5,
            _a6,
            v30);
          v31 = v60;
LABEL_86:
          if ( v31 )
            FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
          v54 = this->m_Globals;
          if ( v54->FxVerboseOn )
            WPP_IFR_SF_d(v54, 5u, 0xCu, 0x45u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v6);
          goto LABEL_92;
        }
        dependentDevice.m_DeviceObject = 0LL;
        v32 = 0LL;
        relatedIrp.m_Irp = v28;
        while ( 1 )
        {
          v33 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v32);
          v32 = v33;
          if ( !v33 )
            break;
          dependentDevice.m_DeviceObject = v33->m_DeviceObject;
          v6 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 0);
          if ( v6 < 0 )
          {
            while ( 1 )
            {
              v34 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v22);
              v22 = v34;
              if ( !v34 || v34 == v32 )
                break;
              dependentDevice.m_DeviceObject = v34->m_DeviceObject;
              SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
            }
            v22 = 0LL;
            break;
          }
        }
        LOBYTE(_a6) = Lock;
      }
      if ( v6 < 0 )
      {
        v31 = v60;
        goto LABEL_86;
      }
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      v65 = 0;
      if ( m_Owner )
      {
        v6 = FxPowerIdleMachine::PowerReferenceWorker(
               &m_Owner->m_PowerIdleMachine,
               1u,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL);
        if ( v6 < 0 )
        {
          Irp->m_Irp->IoStatus.Status = v6;
LABEL_47:
          if ( v6 < 0 )
            goto LABEL_60;
          if ( (_BYTE)_a6 )
          {
            if ( !this->m_HasPowerThread )
            {
              v36 = FxPkgPnp::_UsageToSpecialType(_a5) - 1;
              if ( !v36 || (unsigned int)(v36 - 1) < 2 )
              {
                v6 = this->QueryForPowerThread(this);
                if ( v6 >= 0 )
                  goto LABEL_65;
                if ( FxDevice::IsPdo(this->m_Device) )
                {
                  topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v37 + 224) + 144LL));
                  SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
                  ObfDereferenceObject(topOfParentStack.m_DeviceObject);
                }
                else
                {
                  v38 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
                  *(_OWORD *)&v38[-1].MajorFunction = *(_OWORD *)&v38->MajorFunction;
                  *(_OWORD *)&v38[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v38->Parameters.NotifyDirectoryEx.CompletionFilter;
                  *(_OWORD *)(&v38[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v38->Parameters.SetQuota + 6);
                  v38[-1].FileObject = v38->FileObject;
                  v38[-1].Control = 0;
                  Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
                  Irp->m_Irp->IoStatus.Status = 0;
                  FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
                }
                Irp->m_Irp->IoStatus.Status = v6;
              }
            }
          }
          if ( v6 < 0 )
          {
LABEL_60:
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, OldFlags);
            v31 = v60;
            if ( v60 )
            {
              for ( dependentDevice.m_DeviceObject = 0LL;
                    ;
                    SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u) )
              {
                v39 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v22);
                v22 = v39;
                if ( !v39 )
                  break;
                dependentDevice.m_DeviceObject = v39->m_DeviceObject;
              }
            }
LABEL_83:
            if ( v65 )
              FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
            goto LABEL_86;
          }
LABEL_65:
          v31 = v60;
          FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          if ( this->m_DeviceUsageNotification.m_Method )
          {
            v41 = FxPkgPnp::_UsageToSpecialType(_a5);
            LOBYTE(v42) = _a6;
            v43(v44, (unsigned int)v41, v42);
            m_DeviceBase = this->m_DeviceBase;
          }
          FxObject::GetObjectHandleUnchecked(m_DeviceBase);
          if ( this->m_DeviceUsageNotificationEx.m_Method )
          {
            v45 = FxPkgPnp::_UsageToSpecialType(_a5);
            LOBYTE(v46) = _a6;
            v6 = v47(v48, (unsigned int)v45, v46);
          }
          else
          {
            v6 = 0;
          }
          if ( v6 >= 0 )
          {
            FxPkgPnp::CommitUsageNotification(this, _a5, OldFlags);
            v53 = this->m_PowerPolicyMachine.m_Owner;
            if ( v53 && _a5 == DeviceUsageTypeDumpFile )
            {
              if ( (_BYTE)_a6 )
                FxPowerIdleMachine::PowerReferenceWorker(
                  &v53->m_PowerIdleMachine,
                  0,
                  FxPowerReferenceDefault,
                  0LL,
                  0,
                  0LL);
              else
                FxPowerIdleMachine::IoDecrement(&v53->m_PowerIdleMachine, 0LL, 0, 0LL);
            }
          }
          else
          {
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v49 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v50 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v50[-1].MajorFunction = *(_OWORD *)&v50->MajorFunction;
              *(_OWORD *)&v50[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v50->Parameters.NotifyDirectoryEx.CompletionFilter;
              *(_OWORD *)(&v50[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v50->Parameters.SetQuota + 6);
              v50[-1].FileObject = v50->FileObject;
              v50[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = 0;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            v51 = OldFlags;
            Irp->m_Irp->IoStatus.Status = v6;
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, v51);
            if ( v31 )
            {
              for ( dependentDevice.m_DeviceObject = 0LL;
                    ;
                    SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u) )
              {
                v52 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v22);
                v22 = v52;
                if ( !v52 )
                  break;
                dependentDevice.m_DeviceObject = v52->m_DeviceObject;
              }
            }
          }
          goto LABEL_83;
        }
        v65 = 1;
      }
      Irp->m_Irp->IoStatus.Status = v6;
      v6 = this->SendIrpSynchronously(this, Irp);
      goto LABEL_47;
    }
  }
  v55 = this->m_Globals;
  v6 = -1073741822;
  if ( v55->FxVerboseOn )
    WPP_IFR_SF_dd(v55, 5u, 0xCu, 0x40u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
LABEL_92:
  v56 = FxPkgPnp::CompletePnpRequest(this, Irp, v6);
  MxWorkItem::Free(&workItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v56;
}
