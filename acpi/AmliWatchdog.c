/*
 * XREFs of AmliWatchdog @ 0x1C0046E70
 * Callers:
 *     <none>
 * Callees:
 *     AmliWatchdogTimeoutAction @ 0x1C0046F84 (AmliWatchdogTimeoutAction.c)
 */

void __fastcall AmliWatchdog(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  KIRQL v5; // bl

  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
  *(_BYTE *)(*(_QWORD *)DeferredContext + 472LL) = 1;
  AmliWatchdogTimeoutAction(DeferredContext);
  KeReleaseSpinLock(&AcpiWatchdogLock, v5);
}
