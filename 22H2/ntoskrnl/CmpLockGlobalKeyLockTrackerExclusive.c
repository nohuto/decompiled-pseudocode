/*
 * XREFs of CmpLockGlobalKeyLockTrackerExclusive @ 0x1408494B0
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x1408492DC (CmpGlobalLockKeyForWrite.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1BE74 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 CmpLockGlobalKeyLockTrackerExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpKeyLockTracker, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpKeyLockTracker, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpKeyLockTracker, result, (__int64)&CmpKeyLockTracker);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
