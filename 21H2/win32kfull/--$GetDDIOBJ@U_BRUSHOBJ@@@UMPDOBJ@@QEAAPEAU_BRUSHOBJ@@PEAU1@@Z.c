/*
 * XREFs of ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C012905C
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C0127170 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C01281A0 (NtGdiEngBitBlt.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C0128640 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02B0AF0 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02B0BF0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02B0C70 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02B0D00 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiEngFillPath @ 0x1C02B16C0 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C02B1CF0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B1F10 (NtGdiEngPaint.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2510 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2830 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 152) )
  {
    v3 = *(_QWORD *)(a1 + 144);
  }
  else if ( a2 == *(_QWORD *)(a1 + 168) )
  {
    v3 = *(_QWORD *)(a1 + 160);
  }
  else
  {
    v3 = 0LL;
  }
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
