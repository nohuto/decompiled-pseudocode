/*
 * XREFs of ACPIWakeInitializePmeRouting @ 0x1C0045E28
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C0099894 (PcisuppAcquirePciInterfaces.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008822C (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIWakeInitializePmeRouting(PDEVICE_OBJECT DeviceObject)
{
  void *Pool2; // rbx
  int v4; // edi
  KIRQL v5; // si
  _QWORD v6[9]; // [rsp+20h] [rbp-58h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( PciPmeInterface )
    return 0LL;
  Pool2 = (void *)ExAllocatePool2(64LL, 64LL, 1097884481LL);
  if ( !Pool2 )
    return 3221225626LL;
  v6[4] = 0LL;
  v6[1] = &GUID_PCI_PME_INTERFACE;
  LOWORD(v6[0]) = 2075;
  LODWORD(v6[2]) = 65600;
  v6[3] = Pool2;
  v4 = ACPIInternalSendSynchronousIrp(DeviceObject);
  if ( v4 >= 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    if ( PciPmeInterfaceInstantiated )
    {
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      PciPmeInterfaceInstantiated = 1;
      PciPmeInterface = Pool2;
    }
    KeReleaseSpinLock(&AcpiPowerLock, v5);
  }
  else
  {
    ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v4;
}
