/*
 * XREFs of ACPIWaitWakeEnableOnPowerUp @ 0x1C0044AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C0045BB4 (ACPIWakeEnableDisablePciDevice.c)
 */

void __fastcall ACPIWaitWakeEnableOnPowerUp(__int64 a1, __int64 a2, int a3)
{
  KIRQL v5; // al
  __int64 v6; // rdx
  __int64 *v7; // rbx
  KIRQL v8; // si

  (*(void (__fastcall **)(__int64, _QWORD))(a2 + 8))(a1, *(_QWORD *)a2);
  if ( a3 >= 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v7 = (__int64 *)AcpiPowerWaitWakeList;
    v8 = v5;
    while ( v7 != &AcpiPowerWaitWakeList )
    {
      if ( v7[5] == a1 )
      {
        LOBYTE(v6) = 1;
        ACPIWakeEnableDisablePciDevice(a1, v6);
      }
      v7 = (__int64 *)*v7;
    }
    KeReleaseSpinLock(&AcpiPowerLock, v8);
  }
}
