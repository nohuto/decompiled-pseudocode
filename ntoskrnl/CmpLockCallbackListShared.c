/*
 * XREFs of CmpLockCallbackListShared @ 0x140738E68
 * Callers:
 *     CmSetCallbackObjectContext @ 0x140738C30 (CmSetCallbackObjectContext.c)
 *     CmpEnumerateCallback @ 0x140880C70 (CmpEnumerateCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

signed __int64 CmpLockCallbackListShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v1, (__int64)&CmpCallbackListLock);
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  return result;
}
