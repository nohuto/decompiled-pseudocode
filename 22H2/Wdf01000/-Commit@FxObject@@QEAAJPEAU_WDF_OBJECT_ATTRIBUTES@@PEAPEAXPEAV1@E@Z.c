/*
 * XREFs of ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00071B0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C000B22C (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfMemoryCreate @ 0x1C000CE10 (imp_WdfMemoryCreate.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012F10 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0013B34 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C00147CC (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     imp_WdfCollectionCreate @ 0x1C0014950 (imp_WdfCollectionCreate.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0014BDC (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0017080 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfSpinLockCreate @ 0x1C0019640 (imp_WdfSpinLockCreate.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002EE20 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0031100 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00312A0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C00342C4 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0035794 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0035EBC (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     imp_WdfChildListCreate @ 0x1C00380A0 (imp_WdfChildListCreate.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C003A46C (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C003E4DC (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C003F120 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0047E70 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0049960 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfDriverCreate @ 0x1C004BEB0 (imp_WdfDriverCreate.c)
 *     imp_WdfLookasideListCreate @ 0x1C004C8E0 (imp_WdfLookasideListCreate.c)
 *     imp_WdfMemoryCreateFromLookaside @ 0x1C004CC50 (imp_WdfMemoryCreateFromLookaside.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C004CE50 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C004D060 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C004D63C (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004E398 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004E634 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C004F1D0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C0050104 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0050E14 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C00528A0 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C0052A84 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0052C94 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     imp_WdfIoResourceListCreate @ 0x1C005C850 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C005DFD0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C005E240 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C005E500 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfStringCreate @ 0x1C005F4B0 (imp_WdfStringCreate.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C00622F0 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C00676A8 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     FxUsbTargetDeviceCreate @ 0x1C006A510 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C006AA70 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C006FBD8 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C006FF7C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C00701BC (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0070ECC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C00722B4 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0074DA8 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0080D30 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0084130 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0089D38 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008A7DC (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008A9B0 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008BED0 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008BFF8 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A2A4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDqD @ 0x1C005696C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005A340 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6D24 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxObject::Commit(
        FxObject *this,
        _FX_DRIVER_GLOBALS *Attributes,
        void **ObjectHandle,
        FxObject *Parent,
        unsigned __int8 AssignDriverAsDefaultParent)
{
  void *v5; // rbp
  FxObject *flags; // rdi
  unsigned __int64 globals; // r14
  __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  KIRQL v15; // al
  KIRQL v16; // r13
  KIRQL v17; // r8
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  int v20; // r15d
  __int64 m_ObjectSize; // rax
  char *v22; // rax
  void (__fastcall *v23)(void *); // rcx
  void (__fastcall *v24)(void *); // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  const _GUID *v27; // [rsp+20h] [rbp-78h]
  FxObject *v28; // [rsp+50h] [rbp-48h] BYREF
  FxObject **v29; // [rsp+58h] [rbp-40h] BYREF
  __int16 v30; // [rsp+60h] [rbp-38h]
  __int16 v31; // [rsp+62h] [rbp-36h]
  int v32; // [rsp+64h] [rbp-34h]
  KIRQL v33; // [rsp+A0h] [rbp+8h]

  v5 = 0LL;
  flags = 0LL;
  v28 = 0LL;
  if ( !this->m_ObjectSize )
    return 3221225480LL;
  if ( Attributes && Attributes->DestroyEvent.m_Event.Header.LockNV == 2 )
  {
    FxObject::MarkPassiveCallbacks(this, ObjectLock);
    flags = v28;
  }
  if ( Parent )
  {
    flags = Parent;
    v28 = Parent;
  }
  else if ( Attributes && (globals = (unsigned __int64)Attributes->DestroyEvent.m_Event.Header.WaitListHead.Flink) != 0 )
  {
    LOWORD(v12) = 0;
    flags = (FxObject *)(~globals & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (globals & 1) != 0 )
    {
      v12 = LOWORD(flags->__vftable);
      flags = (FxObject *)((char *)flags - v12);
    }
    if ( flags->m_Type == 4096 )
    {
      v28 = flags;
    }
    else
    {
      v31 = v12;
      v29 = &v28;
      v30 = 4096;
      v32 = 0;
      if ( flags->QueryInterface(flags, (FxQueryInterfaceParams *)&v29) < 0 )
      {
        WPP_IFR_SF_qDqD(
          flags->m_Globals,
          (unsigned __int8)Attributes,
          v13,
          v14,
          v27,
          (const void *)globals,
          0x1000u,
          flags,
          flags->m_Type);
        FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, globals, 0x1000uLL);
      }
      flags = v28;
    }
  }
  else if ( AssignDriverAsDefaultParent )
  {
    if ( !this->m_ParentObject )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->Driver != this )
      {
        flags = m_Globals->Driver;
        v28 = flags;
      }
    }
  }
  if ( flags )
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    v16 = v15;
    if ( this->m_ObjectState == 1 )
    {
      if ( this->m_ParentObject )
      {
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v15);
        return (unsigned int)-1071644147;
      }
      else
      {
        v17 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
        v33 = v17;
        if ( flags->m_ObjectState == 1 )
        {
          Blink = flags->m_ChildListHead.Blink;
          p_m_ChildEntry = &this->m_ChildEntry;
          if ( Blink->Flink != &flags->m_ChildListHead )
            __fastfail(3u);
          p_m_ChildEntry->Flink = &flags->m_ChildListHead;
          this->m_ChildEntry.Blink = Blink;
          Blink->Flink = p_m_ChildEntry;
          flags->m_ChildListHead.Blink = p_m_ChildEntry;
          if ( !this->m_DeviceBase )
            this->m_DeviceBase = flags->m_DeviceBase;
          KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v17);
          v20 = 0;
          this->m_ParentObject = flags;
        }
        else
        {
          FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
          KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v33);
          v20 = -1073741738;
        }
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v16);
        if ( v20 >= 0 )
          goto LABEL_22;
      }
    }
    else
    {
      FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAssignParentObject);
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v16);
      return (unsigned int)-1073741738;
    }
    return (unsigned int)v20;
  }
LABEL_22:
  if ( Attributes )
  {
    m_ObjectSize = this->m_ObjectSize;
    if ( (_WORD)m_ObjectSize )
      v22 = (char *)this + m_ObjectSize;
    else
      v22 = 0LL;
    v23 = *(void (__fastcall **)(void *))&Attributes->Refcnt;
    if ( v23 )
      *((_QWORD *)v22 + 3) = v23;
    v24 = (void (__fastcall *)(void *))Attributes->Linkage.Blink;
    if ( v24 )
    {
      *((_QWORD *)v22 + 2) = v24;
      this->m_ObjectFlags |= 0x400u;
    }
  }
  this->m_ObjectFlags |= 8u;
  if ( this->m_ObjectSize )
    v5 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( ObjectHandle )
    *ObjectHandle = v5;
  if ( this->m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyLeakDetectionConsiderObject(this, Attributes);
  return 0LL;
}
