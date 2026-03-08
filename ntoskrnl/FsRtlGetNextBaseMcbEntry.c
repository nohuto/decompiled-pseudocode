/*
 * XREFs of FsRtlGetNextBaseMcbEntry @ 0x1402D6970
 * Callers:
 *     FsRtlGetNextLargeMcbEntry @ 0x1403A1210 (FsRtlGetNextLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlGetNextBaseMcbEntry(
        PBASE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  int v5; // r10d
  __int64 v9; // r8
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // edx

  v5 = 0;
  if ( RunIndex < Mcb->PairCount )
  {
    v9 = RunIndex - 1;
    if ( RunIndex )
      v10 = *((_DWORD *)Mcb->Mapping + 2 * v9);
    else
      v10 = 0;
    *(_DWORD *)Vbn = v10;
    *((_DWORD *)Vbn + 1) = (v10 != -1) - 1;
    v11 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex + 1);
    *(_DWORD *)Lbn = v11;
    *((_DWORD *)Lbn + 1) = (v11 != -1) - 1;
    if ( RunIndex )
      v5 = *((_DWORD *)Mcb->Mapping + 2 * v9);
    v12 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex) - v5;
    LOBYTE(v5) = 1;
    *SectorCount = v12;
  }
  return v5;
}
