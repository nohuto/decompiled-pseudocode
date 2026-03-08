/*
 * XREFs of FsRtlGetNextLargeMcbEntry @ 0x1403A1210
 * Callers:
 *     FsRtlGetNextMcbEntry @ 0x14053A690 (FsRtlGetNextMcbEntry.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlGetNextBaseMcbEntry @ 0x1402D6970 (FsRtlGetNextBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlGetNextLargeMcbEntry(
        PLARGE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlGetNextBaseMcbEntry(&Mcb->BaseMcb, RunIndex, Vbn, Lbn, SectorCount);
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
