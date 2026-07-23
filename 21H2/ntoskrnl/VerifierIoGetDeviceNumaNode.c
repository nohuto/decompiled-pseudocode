/*
 * XREFs of VerifierIoGetDeviceNumaNode @ 0x1409D3B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceNumaNode()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceNumaNode)();
}
