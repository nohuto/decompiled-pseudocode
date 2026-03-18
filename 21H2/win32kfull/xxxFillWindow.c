/*
 * XREFs of xxxFillWindow @ 0x1C00C1AAC
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x1C00C2600 (xxxDWP_EraseBkgnd.c)
 *     NtUserFillWindow @ 0x1C01522D0 (NtUserFillWindow.c)
 * Callees:
 *     UT_GetParentDCClipBox @ 0x1C005F9E0 (UT_GetParentDCClipBox.c)
 *     xxxPaintRect @ 0x1C00C1B34 (xxxPaintRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagWND *v5; // rcx
  RECT v7; // [rsp+30h] [rbp-48h] BYREF

  v7 = 0LL;
  if ( !(unsigned int)UT_GetParentDCClipBox(a2, a3, &v7.left) )
    return 1LL;
  v5 = (struct tagWND *)a2;
  if ( a1 )
    v5 = a1;
  return xxxPaintRect(v5, &v7);
}
