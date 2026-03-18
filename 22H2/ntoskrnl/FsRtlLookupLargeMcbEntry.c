/*
 * XREFs of FsRtlLookupLargeMcbEntry @ 0x1403A1C60
 * Callers:
 *     FsRtlLookupMcbEntry @ 0x14053CCB0 (FsRtlLookupMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     FsRtlLookupBaseMcbEntry @ 0x14032F4C0 (FsRtlLookupBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLargeMcbEntry(
        PLARGE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCountFromLbn) = FsRtlLookupBaseMcbEntry(
                                 &Mcb->BaseMcb,
                                 Vbn,
                                 Lbn,
                                 SectorCountFromLbn,
                                 StartingLbn,
                                 SectorCountFromStartingLbn,
                                 Index);
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return (unsigned __int8)SectorCountFromLbn;
}
