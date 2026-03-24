/*
 * XREFs of MiReturnProcessCommitment @ 0x140550684
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6850 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), -a2);
}
