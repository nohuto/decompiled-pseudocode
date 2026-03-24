/*
 * XREFs of ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C007CC70
 * Callers:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007CAC0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCD08 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187434 (--1CInpLockGuardShared@@QEAA@XZ.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C007CCC0 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
