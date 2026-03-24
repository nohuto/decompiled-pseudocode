/*
 * XREFs of VerifierIoGetDeviceNumaNode @ 0x1409D2B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceNumaNode()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceNumaNode)();
}
