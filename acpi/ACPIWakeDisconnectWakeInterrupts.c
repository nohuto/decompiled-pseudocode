__int64 __fastcall ACPIWakeDisconnectWakeInterrupts(struct _EX_RUNDOWN_REF *a1)
{
  PVOID *v2; // rbx
  char *v3; // rcx
  PVOID Entry[3]; // [rsp+20h] [rbp-18h] BYREF
  KIRQL Irql; // [rsp+40h] [rbp+8h] BYREF

  Irql = 0;
  if ( (a1[126].Count & 0x10000000000000LL) == 0 )
  {
    Entry[1] = Entry;
    Entry[0] = Entry;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate((__int64)a1, (__int64)Entry);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    v2 = (PVOID *)Entry[0];
    while ( v2 != Entry )
    {
      v3 = (char *)v2;
      v2 = (PVOID *)*v2;
      ACPIDereferenceWaitWakePowerRequest(v3);
    }
    ExWaitForRundownProtectionRelease(a1 + 125);
    ExRundownCompleted(a1 + 125);
    ExReInitializeRundownProtection(a1 + 125);
    a1[126].Count |= 0x10000000000000uLL;
  }
  return 0LL;
}
