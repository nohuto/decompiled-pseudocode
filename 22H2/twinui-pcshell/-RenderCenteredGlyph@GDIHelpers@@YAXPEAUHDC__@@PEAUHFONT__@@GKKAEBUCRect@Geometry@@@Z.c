/*
 * XREFs of ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x1804907E4
 * Callers:
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1804906C4 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x18048646C (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 *     ?GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA?AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z @ 0x180490480 (-GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA-AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z.c)
 */

void __fastcall GDIHelpers::RenderCenteredGlyph(
        HDC hdc,
        HDC h,
        const struct tagRECT *a3,
        COLORREF a4,
        COLORREF color,
        const RECT *a6)
{
  HGDIOBJ v9; // rbx
  wchar_t chText[4]; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+38h] [rbp-30h] BYREF

  GDIHelpers::FillRectARGB(hdc, a6, a3, a4);
  v9 = SelectObject(hdc, h);
  SetBkColor(hdc, a4);
  SetTextColor(hdc, color);
  GDIHelpers::GetDrawTextRectForCenteredGlyph(&rc, hdc, 0xE784u, (__int64)a6);
  if ( rc.left < rc.right && rc.top < rc.bottom )
  {
    wcscpy(chText, L"");
    DrawTextW(hdc, chText, 1, &rc, 0x21u);
  }
  SelectObject(hdc, v9);
}
