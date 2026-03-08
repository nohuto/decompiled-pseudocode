/*
 * XREFs of VerifierIoStartNextPacket @ 0x140ACC460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoStartNextPacket()
{
  return ((__int64 (*)(void))pXdvIoStartNextPacket)();
}
