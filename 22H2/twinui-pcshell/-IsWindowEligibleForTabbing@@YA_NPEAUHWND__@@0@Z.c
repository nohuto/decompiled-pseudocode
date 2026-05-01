/*
 * XREFs of ?IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z @ 0x1802F2858
 * Callers:
 *     _lambda_50a8b7ede59db95d328254c88800d39b_::_lambda_invoker_cdecl_ @ 0x1802F1630 (_lambda_50a8b7ede59db95d328254c88800d39b_--_lambda_invoker_cdecl_.c)
 *     ??R_lambda_ed53dc686cf6ff589a02cff9f21397f4_@@QEBAHPEAUHWND__@@@Z @ 0x1802F1B1C (--R_lambda_ed53dc686cf6ff589a02cff9f21397f4_@@QEBAHPEAUHWND__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

bool __fastcall IsWindowEligibleForTabbing(HWND hWnd, HWND a2)
{
  LONG WindowLongW; // ebx
  bool result; // al
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  result = 0;
  if ( hWnd != a2 )
  {
    WindowLongW = GetWindowLongW(hWnd, -16);
    Rect = 0LL;
    if ( (((WindowLongW & 0x30000000) == 0x10000000) & ((GetWindowLongW(hWnd, -20) & 0x8000080) == 0)) != 0
      && GetWindowRect(hWnd, &Rect)
      && Rect.left != Rect.right
      && Rect.top != Rect.bottom
      && !GetWindow(hWnd, 4u) )
    {
      return 1;
    }
  }
  return result;
}
