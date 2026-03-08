/*
 * XREFs of FsRtlLookupLastBaseMcbEntry @ 0x1402DA240
 * Callers:
 *     FsRtlLookupLastLargeMcbEntry @ 0x14053A730 (FsRtlLookupLastLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupLastBaseMcbEntry(PBASE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ULONG PairCount; // eax
  int v4; // r9d
  _DWORD *Mapping; // r8
  __int64 v8; // r11
  unsigned int v9; // ecx
  int v10; // ebx

  PairCount = Mcb->PairCount;
  v4 = 0;
  if ( PairCount )
  {
    Mapping = Mcb->Mapping;
    v8 = PairCount - 1;
    v9 = -1;
    v10 = Mapping[2 * v8 + 1];
    if ( v10 != -1 )
    {
      if ( PairCount != 1 )
        v4 = Mapping[2 * PairCount - 4];
      v9 = Mapping[2 * v8] - v4 + v10 - 1;
    }
    LOBYTE(v4) = 1;
    *Lbn = v9;
    *Vbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * (Mcb->PairCount - 1)) - 1);
  }
  return v4;
}
