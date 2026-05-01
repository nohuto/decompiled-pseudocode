/*
 * XREFs of ?ShowBorderWithRect@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4ShellExperienceViewBorderAccentState@5678@UColor@UI@8@URect@Foundation@8@@Z @ 0x1800C6730
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18000CCF0 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::ShowBorderWithRect(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = CSingleViewShellExperience::ShowBorder(
         a1 + 48,
         a2,
         a3 != 0 ? 5 : 0,
         BYTE1(a4) | (BYTE2(a4) << 8) | (a4 >> 8) & 0xFF0000,
         0);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsshellexperienceview.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
