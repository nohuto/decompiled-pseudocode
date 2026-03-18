/*
 * XREFs of ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00071B0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C000B22C (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfMemoryCreate @ 0x1C000CE10 (imp_WdfMemoryCreate.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012F10 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0014028 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C00147CC (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     imp_WdfCollectionCreate @ 0x1C0014950 (imp_WdfCollectionCreate.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C001592C (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0017080 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfSpinLockCreate @ 0x1C0019640 (imp_WdfSpinLockCreate.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002EE20 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0031100 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00312A0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C00342C4 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0035794 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0035EBC (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     imp_WdfChildListCreate @ 0x1C00380A0 (imp_WdfChildListCreate.c)
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C003A5B4 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C003D8D0 (imp_WdfWmiInstanceCreate.c)
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
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C004EDA0 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C004F1D0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C0050104 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0050E14 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x1C00531FC (-DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0055358 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0055CD0 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     imp_WdfIoResourceListCreate @ 0x1C005C850 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C005DFD0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C005E240 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C005E500 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfStringCreate @ 0x1C005F4B0 (imp_WdfStringCreate.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0061094 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C00622F0 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C00676A8 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     FxUsbTargetDeviceCreate @ 0x1C006A510 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C006AA70 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006CEC4 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C006FF7C (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C00701BC (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0070ECC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C00722B4 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     imp_WdfIoQueueCreate @ 0x1C0074190 (imp_WdfIoQueueCreate.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0074DA8 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0077274 (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0078D7C (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C007F304 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C007F4B8 (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0080D30 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0084130 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C008490C (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0089D38 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008BED0 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00912A8 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 * Callees:
 *     <none>
 */

void __fastcall FxObject::ClearEvtCallbacks(FxObject *this)
{
  __int64 m_ObjectSize; // rax
  _QWORD *i; // rax

  m_ObjectSize = this->m_ObjectSize;
  if ( (_WORD)m_ObjectSize )
  {
    for ( i = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      i[3] = 0LL;
      i[2] = 0LL;
    }
  }
  this->m_ObjectFlags &= ~0x400u;
}
