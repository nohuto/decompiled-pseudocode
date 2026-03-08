/*
 * XREFs of IntPartCriticalFailure @ 0x140572584
 * Callers:
 *     IntPartCreate @ 0x140B43808 (IntPartCreate.c)
 *     IntpAllocateProcessorContext @ 0x140B439C8 (IntpAllocateProcessorContext.c)
 *     IntpAssignProcessorsToPartitions @ 0x140B43C54 (IntpAssignProcessorsToPartitions.c)
 *     IntpAddNextProcessorToPartition @ 0x140B43CE8 (IntpAddNextProcessorToPartition.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn IntPartCriticalFailure(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, 0x4001uLL, 0x105uLL, BugCheckParameter3, BugCheckParameter4);
}
