/*
 * XREFs of CmpLockAppHiveLoadList @ 0x1406BE50C
 * Callers:
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 CmpLockAppHiveLoadList()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpAppHiveLoadListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpAppHiveLoadListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpAppHiveLoadListLock, result, (__int64)&CmpAppHiveLoadListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
