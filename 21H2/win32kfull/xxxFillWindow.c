/*
 * XREFs of xxxFillWindow @ 0x1C00454D4
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x1C0046028 (xxxDWP_EraseBkgnd.c)
 *     NtUserFillWindow @ 0x1C0150860 (NtUserFillWindow.c)
 * Callees:
 *     xxxPaintRect @ 0x1C004555C (xxxPaintRect.c)
 *     UT_GetParentDCClipBox @ 0x1C007DC08 (UT_GetParentDCClipBox.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF

  v4 = a1;
  if ( !a1 )
    v4 = a2;
  v9 = 0LL;
  if ( (unsigned int)UT_GetParentDCClipBox(a2, a3, &v9) )
    return xxxPaintRect(v4, a2, a3, a4, &v9);
  else
    return 1LL;
}
