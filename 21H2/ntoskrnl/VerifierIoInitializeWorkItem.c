/*
 * XREFs of VerifierIoInitializeWorkItem @ 0x140A8A6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoInitializeWorkItem()
{
  return ((__int64 (*)(void))pXdvIoInitializeWorkItem)();
}
