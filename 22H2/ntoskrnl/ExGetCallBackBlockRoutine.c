/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140381AA0
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x1408D5950 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x1408D59DC (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D5BF8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D5EDC (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x1408D60F8 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D6154 (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6690 (MiScrubProcessPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6850 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D6D30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D6FF0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
