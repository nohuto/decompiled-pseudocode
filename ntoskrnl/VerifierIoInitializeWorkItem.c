/*
 * XREFs of VerifierIoInitializeWorkItem @ 0x140AC7FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoInitializeWorkItem()
{
  return ((__int64 (*)(void))pXdvIoInitializeWorkItem)();
}
