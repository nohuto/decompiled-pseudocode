/*
 * XREFs of FsRtlLookupBaseMcbEntry @ 0x1402C5840
 * Callers:
 *     FsRtlLookupLargeMcbEntry @ 0x14039D700 (FsRtlLookupLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupBaseMcbEntry(
        PBASE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  int v7; // ebp
  signed int v8; // r10d
  unsigned int v11; // r11d
  signed int v12; // edi
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // eax
  int v16; // edx
  _DWORD *Mapping; // r8
  int v18; // edx
  int v19; // eax
  LONGLONG v21; // r8

  v7 = 0;
  v8 = Mcb->PairCount - 1;
  v11 = Vbn;
  v12 = 0;
  if ( v8 < 0 )
    return 0;
  while ( 1 )
  {
    v13 = (v8 + v12) / 2;
    v14 = v13;
    if ( v13 )
    {
      v16 = v13 - 1;
      v15 = *((_DWORD *)Mcb->Mapping + 2 * (int)(v13 - 1));
    }
    else
    {
      v15 = 0;
      v16 = -1;
    }
    if ( v11 < v15 )
    {
      v8 = v16;
      goto LABEL_20;
    }
    Mapping = Mcb->Mapping;
    if ( v11 <= Mapping[2 * (int)v14] - 1 )
      break;
    v12 = v14 + 1;
LABEL_20:
    if ( v12 > v8 )
      return 0;
  }
  if ( Lbn )
  {
    v18 = Mapping[2 * v14 + 1];
    if ( v18 == -1 )
    {
      *Lbn = -1LL;
    }
    else
    {
      if ( (_DWORD)v14 )
        v19 = Mapping[2 * (unsigned int)(v14 - 1)];
      else
        v19 = 0;
      *Lbn = v11 + v18 - v19;
    }
  }
  if ( SectorCountFromLbn )
    *SectorCountFromLbn = *((_DWORD *)Mcb->Mapping + 2 * v14) - v11;
  if ( StartingLbn )
  {
    v21 = *((unsigned int *)Mcb->Mapping + 2 * v14 + 1);
    if ( (_DWORD)v21 == -1 )
      *StartingLbn = -1LL;
    else
      *StartingLbn = v21;
  }
  if ( SectorCountFromStartingLbn )
  {
    if ( (_DWORD)v14 )
      v7 = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v14 - 1));
    *SectorCountFromStartingLbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * v14) - v7);
  }
  if ( Index )
    *Index = v14;
  return 1;
}
