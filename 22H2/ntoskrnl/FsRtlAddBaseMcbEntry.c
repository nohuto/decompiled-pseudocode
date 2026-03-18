/*
 * XREFs of FsRtlAddBaseMcbEntry @ 0x14033A350
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x14033A370 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  return FsRtlAddBaseMcbEntryEx(Mcb, Vbn, Lbn, SectorCount) >= 0;
}
