/*
 * XREFs of ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C0373280
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C0372E38 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C0373114 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateSubRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG left; // eax
  LONG right; // r9d
  LONG v6; // ecx
  LONG top; // edx
  LONG bottom; // r10d
  LONG v9; // r8d
  LONG v10; // ebx

  if ( ValidateRect(a1) )
  {
    left = a1->left;
    right = a2->right;
    if ( a1->left < right )
    {
      v6 = a1->right;
      if ( v6 > a2->left || v6 == left )
      {
        top = a1->top;
        bottom = a2->bottom;
        if ( top < bottom )
        {
          v9 = a1->bottom;
          v10 = a2->top;
          if ( (v9 > v10 || top == v9) && left >= a2->left && v6 <= right && top >= v10 && v9 <= bottom )
            return 1;
        }
      }
    }
    WdLogSingleEntry1(2LL, 2320LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid bounding rect", 2320LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
