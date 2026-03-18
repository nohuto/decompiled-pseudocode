/*
 * XREFs of IntPartCriticalFailure @ 0x140574A94
 * Callers:
 *     IntPartCreate @ 0x140B53D98 (IntPartCreate.c)
 *     IntpAllocateProcessorContext @ 0x140B53F58 (IntpAllocateProcessorContext.c)
 *     IntpAssignProcessorsToPartitions @ 0x140B541E4 (IntpAssignProcessorsToPartitions.c)
 *     IntpAddNextProcessorToPartition @ 0x140B54278 (IntpAddNextProcessorToPartition.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall __noreturn IntPartCriticalFailure(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, 0x4001uLL, 0x105uLL, BugCheckParameter3, BugCheckParameter4);
}
