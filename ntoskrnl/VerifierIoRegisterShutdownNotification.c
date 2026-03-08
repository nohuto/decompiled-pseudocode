/*
 * XREFs of VerifierIoRegisterShutdownNotification @ 0x140ACC270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterShutdownNotification()
{
  return ((__int64 (*)(void))pXdvIoRegisterShutdownNotification)();
}
