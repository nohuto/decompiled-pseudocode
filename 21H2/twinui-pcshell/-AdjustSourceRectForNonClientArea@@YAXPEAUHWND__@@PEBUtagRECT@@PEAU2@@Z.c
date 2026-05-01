/*
 * XREFs of ?AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z @ 0x180437598
 * Callers:
 *     ?ExecuteTag@CAppArrangementSingleTransitionTarget@@UEAAJXZ @ 0x1804376B0 (-ExecuteTag@CAppArrangementSingleTransitionTarget@@UEAAJXZ.c)
 *     ?ExecuteTag@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJXZ @ 0x180437870 (-ExecuteTag@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

void __fastcall AdjustSourceRectForNonClientArea(HWND hWnd, const struct tagRECT *a2, struct tagRECT *a3)
{
  __int128 pvAttribute; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(hWnd, 9u, &pvAttribute, 0x10u) >= 0 )
  {
    Rect = 0LL;
    if ( GetWindowRect(hWnd, &Rect) )
      OffsetRect(a3, pvAttribute - Rect.left, DWORD1(pvAttribute) - Rect.top);
  }
}
