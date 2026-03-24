/*
 * XREFs of VerifierIoSetShareAccess @ 0x1409D3050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoSetShareAccess()
{
  return ((__int64 (*)(void))pXdvIoSetShareAccess)();
}
