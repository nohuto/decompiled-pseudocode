/*
 * XREFs of MiGetAwePageSize @ 0x14064836C
 * Callers:
 *     MiAllocateFastAwePages @ 0x140A3D534 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x140A3E848 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x140A3E8D0 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140A3EB08 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x140A3F0EC (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A3F148 (MiReferenceIncomingPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A3FC10 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A3FEC0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAwePageSize(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
