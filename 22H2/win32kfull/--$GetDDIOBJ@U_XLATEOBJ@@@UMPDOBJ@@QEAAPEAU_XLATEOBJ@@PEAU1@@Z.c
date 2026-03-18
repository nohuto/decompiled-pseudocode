/*
 * XREFs of ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C6D88
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02C8580 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02C8940 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02C8FB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x1C02C9C50 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x1C02CA710 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CAB20 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CB070 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CC410 (NtGdiEngTransparentBlt.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02CE1E0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02CE300 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02CE370 (NtGdiXLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 216) )
    result = *(_QWORD *)(a1 + 208);
  else
    result = 0LL;
  if ( (*(_DWORD *)(a1 + 428) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
