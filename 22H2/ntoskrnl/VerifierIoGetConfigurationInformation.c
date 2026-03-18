/*
 * XREFs of VerifierIoGetConfigurationInformation @ 0x140ACFED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetConfigurationInformation()
{
  return ((__int64 (*)(void))pXdvIoGetConfigurationInformation)();
}
