/*
 * XREFs of ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180277670
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x180016EB0 (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180075778 (-PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnWorkAreaChanged(SearchAppDesktopExperienceView *this)
{
  SearchAppDesktopExperienceView *v1; // rdi
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (SearchAppDesktopExperienceView *)((char *)this - 16);
  if ( SearchAppDesktopExperienceView::IsViewVisible((SearchAppDesktopExperienceView *)((char *)this - 16))
    && *((_BYTE *)this + 189) )
  {
    v3 = SearchAppDesktopExperienceView::PositionAlongsideStart(v1);
    if ( v3 < 0 )
    {
      v4 = 531LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v3 = SearchAppDesktopExperienceView::PositionCortanaWindow(v1, 1, 0);
    if ( v3 < 0 )
    {
      v4 = 532LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
