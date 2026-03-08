/*
 * XREFs of MmAllocateIndependentPages @ 0x140869AC0
 * Callers:
 *     KeAllocateInterrupt @ 0x14028F83C (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x140371E4C (KiAllocateProcessorStateInitializationParameters.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403A4C70 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x140545BF4 (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x140A86364 (KiInitializePrcbContext.c)
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall MmAllocateIndependentPages(__int64 a1, __int64 a2)
{
  return MmAllocateIndependentPagesEx(a1, a2, 0LL, 0LL);
}
