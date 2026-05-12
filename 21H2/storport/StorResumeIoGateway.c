/*
 * XREFs of StorResumeIoGateway @ 0x1C004E48C
 * Callers:
 *     RaidResumeAdapterQueue @ 0x1C0014204 (RaidResumeAdapterQueue.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0032DE8 (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorResumeIoGateway(PKSPIN_LOCK SpinLock, char a2)
{
  char v3; // al
  signed __int32 v4; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 && SpinLock )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v3 = 1;
  }
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)SpinLock + 11, 0xFFFFFFFF);
  if ( v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)(v4 - 1);
}
