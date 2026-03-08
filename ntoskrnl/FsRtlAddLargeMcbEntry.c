/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x1402D00C0
 * Callers:
 *     FsRtlAddMcbEntry @ 0x14053A670 (FsRtlAddMcbEntry.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1402D06D0 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return SectorCount;
}
