/*
 * XREFs of VerifierIoRegisterShutdownNotification @ 0x1409D2E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterShutdownNotification()
{
  return ((__int64 (*)(void))pXdvIoRegisterShutdownNotification)();
}
