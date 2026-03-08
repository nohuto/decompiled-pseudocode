/*
 * XREFs of CmpLockSiloKeyLockTrackerShared @ 0x1408463F8
 * Callers:
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall CmpLockSiloKeyLockTrackerShared(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)a1, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v3, (__int64)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
