/*
 * XREFs of ACPIWakeEnableDisablePciDevice @ 0x1C0045BB4
 * Callers:
 *     ACPIWaitWakeEnableOnPowerUp @ 0x1C0044AB0 (ACPIWaitWakeEnableOnPowerUp.c)
 *     ACPIWakeDisableAsync @ 0x1C0044CC8 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0045348 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0045850 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIWakeEnableDisablePciDevice(__int64 a1, char a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // di
  PVOID v7; // rdx

  if ( PciPmeInterfaceInstantiated )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = *(_QWORD *)(a1 + 784);
    v6 = v4;
    if ( v5 )
    {
      if ( PciPmeInterfaceInstantiated )
      {
        v7 = PciPmeInterface;
        LOBYTE(v7) = a2;
        (*((void (__fastcall **)(__int64, PVOID))PciPmeInterface + 6))(v5, v7);
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  }
}
