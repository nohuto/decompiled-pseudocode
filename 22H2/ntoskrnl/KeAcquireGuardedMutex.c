/*
 * XREFs of KeAcquireGuardedMutex @ 0x14026F9E0
 * Callers:
 *     PnpDeviceEventWorker @ 0x140634FF0 (PnpDeviceEventWorker.c)
 *     IoRegisterPlugPlayNotification @ 0x14069BFE0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x14071AD38 (PnpNotifyTargetDeviceChange.c)
 *     PnpProcessAssignResources @ 0x14073CA2C (PnpProcessAssignResources.c)
 *     PiUEventHandleVetoEvent @ 0x14076DDE8 (PiUEventHandleVetoEvent.c)
 *     PopRequestShutdownWait @ 0x1407ADB84 (PopRequestShutdownWait.c)
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si

  v2 = KeAbPreAcquire((ULONG_PTR)Mutex);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Mutex);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
