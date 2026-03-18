/*
 * XREFs of ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C03777D4
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C03774F8 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C0377848 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C0377940 (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall ValidateRect(const struct tagRECT *a1)
{
  if ( a1->left <= a1->right && a1->top <= a1->bottom )
    return 1;
  WdLogSingleEntry1(2LL, 2267LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid rect", 2267LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
