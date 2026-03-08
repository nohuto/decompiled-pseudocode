/*
 * XREFs of CmpLockSiloKeyLockTrackerExclusive @ 0x1408463A4
 * Callers:
 *     CmpStartSiloKeyLockTracker @ 0x1408168F8 (CmpStartSiloKeyLockTracker.c)
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A191F8 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpLockSiloKeyLockTrackerExclusive(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)a1, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  return result;
}
