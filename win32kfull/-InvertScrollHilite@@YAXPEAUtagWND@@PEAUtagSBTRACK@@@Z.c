/*
 * XREFs of ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C022BE5C
 * Callers:
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022C83C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022BEFC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall InvertScrollHilite(struct tagWND *a1, const struct tagRECT *a2)
{
  int *p_left; // rdi
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
