/*
 * XREFs of ?RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800C56EC
 * Callers:
 *     ??$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@34@@Details@WRL@Microsoft@@YAJPEAPEAVIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@45@@Z @ 0x1800C15DC (--$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800C5784 (-RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@_ea_1800C5784.c)
 *     ??$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@XZ @ 0x180275EE8 (--$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VCCortanaW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::RuntimeClassInitialize(
        ShellFeedsDesktopExperienceView *this,
        struct IServiceProvider *a2,
        struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  wil::make_unique_nothrow<TwinUI::Cortana::CCortanaWNFService,>(&v8);
  v8 = 0LL;
  v4 = ShellFeedsDesktopExperienceView::RuntimeClassInitialize(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    `anonymous namespace'::g_shellFeedsExperienceView = this;
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  }
  return v5;
}
