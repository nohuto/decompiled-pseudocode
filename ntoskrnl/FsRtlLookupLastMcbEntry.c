/*
 * XREFs of FsRtlLookupLastMcbEntry @ 0x14053A7B0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlLookupLastLargeMcbEntry @ 0x14053A730 (FsRtlLookupLastLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlLookupLastMcbEntry(PMCB Mcb, PVBN Vbn, PLBN Lbn)
{
  BOOLEAN result; // al
  LBN v6; // ecx
  LONGLONG v7[3]; // [rsp+20h] [rbp-18h] BYREF
  LONGLONG v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v7[0] = 0LL;
  result = FsRtlLookupLastLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, &v8, v7);
  if ( result )
  {
    *Vbn = v8;
    v6 = v7[0];
    if ( LODWORD(v7[0]) == -1 )
      v6 = 0;
    *Lbn = v6;
  }
  return result;
}
