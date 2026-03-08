/*
 * XREFs of VfFreeCrashDumpRegistersEx @ 0x140AC33E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VfFreeCrashDumpRegistersEx()
{
  return ((__int64 (*)(void))pXdvHalDmaFreeCrashDumpRegistersEx)();
}
