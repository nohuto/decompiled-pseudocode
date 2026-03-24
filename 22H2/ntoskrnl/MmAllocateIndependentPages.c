/*
 * XREFs of MmAllocateIndependentPages @ 0x140762010
 * Callers:
 *     KeAllocateInterrupt @ 0x14037718C (KeAllocateInterrupt.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403B5E70 (KeAllocateProcessorProfileStructures.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B62E8 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F901C (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x14099F0D8 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
