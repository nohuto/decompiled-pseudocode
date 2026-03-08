/*
 * XREFs of FsRtlGetNextMcbEntry @ 0x14053A690
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlGetNextLargeMcbEntry @ 0x1403A1210 (FsRtlGetNextLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlGetNextMcbEntry(PMCB Mcb, ULONG RunIndex, PVBN Vbn, PLBN Lbn, PULONG SectorCount)
{
  BOOLEAN result; // al
  LBN v8; // ecx
  LONGLONG v9; // [rsp+30h] [rbp-28h] BYREF
  LONGLONG v10; // [rsp+38h] [rbp-20h] BYREF
  LONGLONG v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11[0] = 0LL;
  result = FsRtlGetNextLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, RunIndex, &v9, &v10, v11);
  if ( result )
  {
    *Vbn = v9;
    v8 = v10;
    if ( (_DWORD)v10 == -1 )
      v8 = 0;
    *Lbn = v8;
    *SectorCount = v11[0];
  }
  return result;
}
