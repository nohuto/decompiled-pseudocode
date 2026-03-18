/*
 * XREFs of CmpLockCallbackListExclusive @ 0x140851E08
 * Callers:
 *     CmpInsertCallbackInListByAltitude @ 0x140851D3C (CmpInsertCallbackInListByAltitude.c)
 *     CmUnRegisterCallback @ 0x140A0F270 (CmUnRegisterCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 CmpLockCallbackListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpCallbackListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpCallbackListLock, result, (__int64)&CmpCallbackListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
