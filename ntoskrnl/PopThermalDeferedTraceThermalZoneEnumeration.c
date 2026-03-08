/*
 * XREFs of PopThermalDeferedTraceThermalZoneEnumeration @ 0x14039CB48
 * Callers:
 *     PopDiagInitialize @ 0x140B442C4 (PopDiagInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14039CBDC (PopDiagTraceThermalZoneEnumeration.c)
 */

void PopThermalDeferedTraceThermalZoneEnumeration()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
    if ( (*((_BYTE *)i + 65) & 0x12) == 2 )
      PopDiagTraceThermalZoneEnumeration(i);
    PopReleaseRwLock((ULONG_PTR)(i + 54));
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
