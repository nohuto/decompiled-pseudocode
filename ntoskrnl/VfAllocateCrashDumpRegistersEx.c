/*
 * XREFs of VfAllocateCrashDumpRegistersEx @ 0x140AC2420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfDisableHalVerifier @ 0x1405CC438 (VfDisableHalVerifier.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegistersEx(__int64 a1)
{
  if ( KeGetCurrentIrql() == 15 )
    VfDisableHalVerifier();
  return ((__int64 (__fastcall *)(__int64))pXdvHalDmaAllocateCrashDumpRegistersEx)(a1);
}
