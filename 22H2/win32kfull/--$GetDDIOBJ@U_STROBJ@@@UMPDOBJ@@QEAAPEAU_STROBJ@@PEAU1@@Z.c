/*
 * XREFs of ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02C6CF4
 * Callers:
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02C7270 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngTextOut @ 0x1C02CBFB0 (NtGdiEngTextOut.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02CD8C0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02CD9D0 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02CDA30 (NtGdiSTROBJ_vEnumStart.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_STROBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 200) )
    result = *(_QWORD *)(a1 + 192);
  else
    result = 0LL;
  if ( (*(_DWORD *)(a1 + 428) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
