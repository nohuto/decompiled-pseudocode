/*
 * XREFs of CmpLockCallbackListExclusive @ 0x14084E9C8
 * Callers:
 *     CmpInsertCallbackInListByAltitude @ 0x14084E8FC (CmpInsertCallbackInListByAltitude.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
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
