/*
 * XREFs of ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C007B590
 * Callers:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007B3E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCBA8 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187504 (--1CInpLockGuardShared@@QEAA@XZ.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C007B5E0 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInpLockGuard::UnLock(CInpLockGuard *this)
{
  struct _ERESOURCE *v2; // rcx

  if ( !(unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 129LL);
  v2 = *(struct _ERESOURCE **)this;
  *((_QWORD *)this + 1) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v2);
}
