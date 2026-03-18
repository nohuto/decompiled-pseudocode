/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x1403AB680
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x14053CD60 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x140339F10 (FsRtlRemoveBaseMcbEntry.c)
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
