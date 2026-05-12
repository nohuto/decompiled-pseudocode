/*
 * XREFs of StorSetIoGatewayBusy @ 0x1C004E4DC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     StorSetIoGatewayNotBusy @ 0x1C004E5F0 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall StorSetIoGatewayBusy(KSPIN_LOCK *SpinLock, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // edx
  bool v6; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( SpinLock )
  {
    v2 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !*((_DWORD *)SpinLock + 10) )
    {
      v5 = *((_DWORD *)SpinLock + 48);
      if ( v5 )
      {
        if ( a2 <= v5 )
          v2 = v5 - a2;
        *((_DWORD *)SpinLock + 8) = v2;
        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
        v6 = *((_DWORD *)SpinLock + 48) == 0;
        *((_DWORD *)SpinLock + 10) = 1;
        if ( v6 )
        {
          ++GatewayBusyStateRaceConditionCount;
          StorSetIoGatewayNotBusy(SpinLock);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
}
