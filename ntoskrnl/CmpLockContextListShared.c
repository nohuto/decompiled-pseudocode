/*
 * XREFs of CmpLockContextListShared @ 0x140738ED8
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x1406E1220 (CmpCallbackFillObjectContext.c)
 *     CmpGetCallbackObjectContext @ 0x140738A30 (CmpGetCallbackObjectContext.c)
 *     CmSetCallbackObjectContext @ 0x140738C30 (CmSetCallbackObjectContext.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

signed __int64 CmpLockContextListShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v1, (__int64)&CmpContextListLock);
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  return result;
}
