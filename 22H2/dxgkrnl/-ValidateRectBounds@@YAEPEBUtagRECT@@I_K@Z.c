/*
 * XREFs of ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C0377848
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C03774F8 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C03777D4 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateRectBounds(const struct tagRECT *a1, unsigned int right, unsigned __int64 a3)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  const wchar_t *v9; // r9

  if ( !ValidateRect(a1) )
    return 0;
  if ( !right )
    right = a1->right;
  v6 = right * (unsigned __int64)(unsigned int)(a1->bottom - 1);
  if ( v6 > 0xFFFFFFFF )
  {
    v8 = 2300LL;
    WdLogSingleEntry1(2LL, 2300LL);
  }
  else
  {
    v7 = (unsigned int)(v6 + a1->right);
    if ( (unsigned int)v7 >= (unsigned int)v6 )
    {
      if ( v7 <= a3 )
        return 1;
      v8 = 2310LL;
      WdLogSingleEntry1(2LL, 2310LL);
      v9 = L"Rect is out of  bounds";
      goto LABEL_12;
    }
    v8 = 2305LL;
    WdLogSingleEntry1(2LL, 2305LL);
  }
  v9 = L"Invalid computed size";
LABEL_12:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
