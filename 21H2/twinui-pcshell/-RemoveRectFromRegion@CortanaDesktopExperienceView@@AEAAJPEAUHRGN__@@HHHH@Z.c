/*
 * XREFs of ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1802801E8
 * Callers:
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1802796D0 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x180279BB8 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::RemoveRectFromRegion(
        CortanaDesktopExperienceView *this,
        HRGN a2,
        int a3,
        int a4,
        int x2,
        int y2)
{
  HRGN RectRgn; // rax
  HRGN v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  RectRgn = CreateRectRgn(a3, a4, x2, y2);
  v8 = RectRgn;
  if ( !RectRgn )
  {
    v9 = 2949LL;
LABEL_5:
    v10 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x80004005LL);
    goto LABEL_7;
  }
  if ( !CombineRgn(a2, a2, RectRgn, 4) )
  {
    v9 = 2950LL;
    goto LABEL_5;
  }
  v10 = 0;
LABEL_7:
  if ( v8 )
    DeleteObject(v8);
  return v10;
}
