/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x1403A60B0
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x14053A8C0 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x1402D0270 (FsRtlRemoveBaseMcbEntry.c)
 */

void __stdcall FsRtlRemoveLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  unsigned int v3; // edi
  unsigned int v4; // esi

  v3 = SectorCount;
  v4 = Vbn;
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlRemoveBaseMcbEntry(&Mcb->BaseMcb, v4, v3);
  ExReleaseFastMutex(Mcb->GuardedMutex);
}
