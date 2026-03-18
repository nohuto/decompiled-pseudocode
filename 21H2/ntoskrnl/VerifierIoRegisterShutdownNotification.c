/*
 * XREFs of VerifierIoRegisterShutdownNotification @ 0x140A8E940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterShutdownNotification()
{
  return ((__int64 (*)(void))pXdvIoRegisterShutdownNotification)();
}
