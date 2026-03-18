/*
 * XREFs of MiGetAwePageSize @ 0x14064A988
 * Callers:
 *     MiAllocateFastAwePages @ 0x140A40214 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x140A41528 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x140A415B0 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140A417E8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140A41B00 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x140A41DCC (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A41E28 (MiReferenceIncomingPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42390 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A428F0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A42BA0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAwePageSize(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
