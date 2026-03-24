/*
 * XREFs of AMLIGetParent @ 0x1C001B348
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C001622C (OSNotifyCreateProcessor.c)
 *     IsPciDeviceWorker @ 0x1C00166E0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C0017710 (IsPciBusAsyncWorker.c)
 *     GetOpRegionScope @ 0x1C0017C54 (GetOpRegionScope.c)
 *     OSNotifyCreateOperationRegion @ 0x1C00182E8 (OSNotifyCreateOperationRegion.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00184A0 (PciConfigSpaceHandlerWorker.c)
 *     OSNotifyCreateDevice @ 0x1C001B3BC (OSNotifyCreateDevice.c)
 *     AMLIIterateParentNext @ 0x1C002F1F4 (AMLIIterateParentNext.c)
 *     CmosConfigSpaceHandler @ 0x1C004F2A0 (CmosConfigSpaceHandler.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050FF0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00516B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0051860 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     OSNotifyDeviceCheck @ 0x1C0058AC4 (OSNotifyDeviceCheck.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005B9C0 (AcpiSetupNativeMethodContext.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005CA50 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C005ECB0 (ACPIRootIrpQueryPower.c)
 *     ACPIRootInitialize @ 0x1C0097FAC (ACPIRootInitialize.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ACD30 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetParent(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( v3 )
  {
    dword_1C0082908 = 0;
    v3 += 120LL;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
