/*
 * XREFs of ?ShowBorder@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4ShellExperienceViewBorderAccentState@5678@@Z @ 0x1800C66D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18000CCF0 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::ShowBorder(__int64 a1, unsigned int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = CSingleViewShellExperience::ShowBorder(a1 + 48, a2, a3 != 0 ? 5 : 0, 0LL, 0);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsshellexperienceview.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
