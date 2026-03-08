/*
 * XREFs of AcpiAllocateGsivForSecondaryInterrupt @ 0x1C0083BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 AcpiAllocateGsivForSecondaryInterrupt()
{
  return ((__int64 (*)(void))HalPrivateDispatchTable[63])();
}
