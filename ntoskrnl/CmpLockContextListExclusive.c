/*
 * XREFs of CmpLockContextListExclusive @ 0x140738BC4
 * Callers:
 *     CmpFreeCallbackObjectContexts @ 0x140738AB4 (CmpFreeCallbackObjectContexts.c)
 *     CmSetCallbackObjectContext @ 0x140738C30 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 CmpLockContextListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpContextListLock, result, (__int64)&CmpContextListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
