/*
 * XREFs of CmSiRWLockAcquireExclusive @ 0x1406A419C
 * Callers:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14020C564 (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1402B2CD4 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1403889B4 (CmSiSetProcessWorkingSetMaximum.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 *     CmpDumpKeyToBuffer @ 0x140AF28C4 (CmpDumpKeyToBuffer.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmSiRWLockAcquireExclusive(unsigned __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = KeAbPreAcquire((__int64)a1, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
