/*
 * XREFs of xxxFillWindow @ 0x1C00FC114
 * Callers:
 *     NtUserFillWindow @ 0x1C0011640 (NtUserFillWindow.c)
 *     xxxDWP_EraseBkgnd @ 0x1C00A4F54 (xxxDWP_EraseBkgnd.c)
 * Callees:
 *     xxxPaintRect @ 0x1C0007680 (xxxPaintRect.c)
 *     UT_GetParentDCClipBox @ 0x1C00FC19C (UT_GetParentDCClipBox.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(__int64 a1, __int64 a2, HDC a3, HBRUSH a4)
{
  __int64 v8; // rcx
  RECT v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0LL;
  if ( !(unsigned int)UT_GetParentDCClipBox(a2, a3, &v10) )
    return 1LL;
  v8 = a2;
  if ( a1 )
    v8 = a1;
  return xxxPaintRect(v8, a2, a3, a4, &v10);
}
