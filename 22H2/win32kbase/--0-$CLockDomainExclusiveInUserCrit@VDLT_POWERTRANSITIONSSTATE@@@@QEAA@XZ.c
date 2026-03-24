/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C01185F8
 * Callers:
 *     UserPowerInfoCallout @ 0x1C004FC50 (UserPowerInfoCallout.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

PVOID **__fastcall CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>::CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>(
        PVOID **a1)
{
  PVOID *DomainLockRef; // rax

  DomainLockRef = (PVOID *)GetDomainLockRef(13);
  *a1 = DomainLockRef;
  if ( DomainLockRef == gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
    DomainLockRef = *a1;
  }
  tagDomLock::LockExclusive((PERESOURCE *)DomainLockRef);
  return a1;
}
