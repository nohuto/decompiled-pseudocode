/*
 * XREFs of VerifierIoUnregisterShutdownNotification @ 0x140ACC4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoUnregisterShutdownNotification()
{
  return ((__int64 (*)(void))pXdvIoUnregisterShutdownNotification)();
}
