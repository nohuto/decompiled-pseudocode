/*
 * XREFs of MiReturnProcessCommitment @ 0x1406566D8
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1406F78B0 (MiChargeFullProcessCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42390 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), -a2);
}
