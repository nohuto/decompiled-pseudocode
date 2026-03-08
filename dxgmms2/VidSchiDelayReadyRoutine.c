/*
 * XREFs of VidSchiDelayReadyRoutine @ 0x1C00128A0
 * Callers:
 *     VidSchiCancelDelayTimerContext @ 0x1C0012824 (VidSchiCancelDelayTimerContext.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C00136BC (VidSchiUnwaitContext.c)
 */

void __fastcall VidSchiDelayReadyRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(DeferredContext[12] + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  if ( (DeferredContext[23] & 0x40) != 0 )
  {
    *((_DWORD *)DeferredContext + 46) &= ~0x40u;
    if ( (unsigned __int8)VidSchiUnwaitContext(DeferredContext, 28589LL) )
    {
      *(_QWORD *)(v5 + 1224) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1192), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
