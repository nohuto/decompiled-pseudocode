/*
 * XREFs of FsRtlLookupMcbEntry @ 0x14053A810
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlLookupLargeMcbEntry @ 0x14039D700 (FsRtlLookupLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupMcbEntry(PMCB Mcb, VBN Vbn, PLBN Lbn, PULONG SectorCount, PULONG Index)
{
  BOOLEAN result; // al
  LBN v8; // ecx
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  LONGLONG v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  result = FsRtlLookupLargeMcbEntry(
             &Mcb->DummyFieldThatSizesThisStructureCorrectly,
             Vbn,
             &v10,
             (PLONGLONG)((unsigned __int64)&v9 & -(__int64)(SectorCount != 0LL)),
             0LL,
             0LL,
             Index);
  if ( result )
  {
    v8 = v10;
    if ( (_DWORD)v10 == -1 )
      v8 = 0;
    *Lbn = v8;
    if ( SectorCount )
      *SectorCount = v9;
  }
  return result;
}
