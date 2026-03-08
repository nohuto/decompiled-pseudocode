/*
 * XREFs of CmpLockGlobalKeyLockTrackerExclusive @ 0x140846350
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x14084617C (CmpGlobalLockKeyForWrite.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A19124 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
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
