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
