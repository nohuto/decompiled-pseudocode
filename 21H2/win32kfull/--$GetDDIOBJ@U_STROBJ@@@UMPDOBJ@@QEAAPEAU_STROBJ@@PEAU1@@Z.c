/*
 * XREFs of ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C012AE8C
 * Callers:
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02B05CC (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02B3D60 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02B3E80 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02B3EF0 (NtGdiSTROBJ_vEnumStart.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_STROBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 200) )
    v3 = *(_QWORD *)(a1 + 192);
  else
    v3 = 0LL;
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint(
          "onecoreuap\\restricted\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          771);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "onecoreuap\\restricted\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        776);
    return 0LL;
  }
  return v3;
}
