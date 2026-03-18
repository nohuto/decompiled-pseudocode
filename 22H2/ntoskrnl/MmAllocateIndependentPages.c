/*
 * XREFs of MmAllocateIndependentPages @ 0x14086C6F0
 * Callers:
 *     KeAllocateInterrupt @ 0x14032065C (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x140376790 (HvlStartBootLogicalProcessors.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x14037709C (KiAllocateProcessorStateInitializationParameters.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403A9A80 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x140548094 (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x140A89784 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x14086C70C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
