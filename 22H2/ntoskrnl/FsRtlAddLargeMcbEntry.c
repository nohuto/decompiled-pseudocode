/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x140339D60
 * Callers:
 *     FsRtlAddMcbEntry @ 0x14053CB10 (FsRtlAddMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x14033A370 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  ExReleaseFastMutex(Mcb->GuardedMutex);
  return SectorCount;
}
