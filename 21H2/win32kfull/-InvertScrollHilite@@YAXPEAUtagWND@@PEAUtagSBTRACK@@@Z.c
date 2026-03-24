/*
 * XREFs of ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C02447F8
 * Callers:
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245214 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00675D0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     NtGdiPatBlt @ 0x1C00B42B0 (NtGdiPatBlt.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0244898 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall InvertScrollHilite(struct tagWND *a1, const struct tagRECT *a2)
{
  LONG *p_left; // rdi
  struct tagSBTRACK *v5; // rdx
  HDC DCEx; // rbx

  p_left = &a2[2].left;
  if ( !IsRectEmptyInl(a2 + 2) )
  {
    if ( (*(_DWORD *)v5 & 8) != 0 )
    {
      RecalcTrackRect(v5);
      a2->left &= ~8u;
    }
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    NtGdiPatBlt(DCEx, *p_left, p_left[1], p_left[2] - *p_left, p_left[3] - p_left[1], 5570569);
    _ReleaseDC(DCEx);
  }
}
