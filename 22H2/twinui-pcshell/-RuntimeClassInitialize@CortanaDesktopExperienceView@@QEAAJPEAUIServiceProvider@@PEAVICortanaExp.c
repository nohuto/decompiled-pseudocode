/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1802802E8
 * Callers:
 *     ??$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180278C28 (--$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@XZ @ 0x180275D38 (--$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VCCortanaW.c)
 *     ??_GCCortanaWNFService@Cortana@TwinUI@@QEAAPEAXI@Z @ 0x1802762AC (--_GCCortanaWNFService@Cortana@TwinUI@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x180278788 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1802803A4 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_1802803A4.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(
        CortanaDesktopExperienceView *this,
        struct IServiceProvider *a2,
        struct TwinUI::Cortana::ICortanaExperienceManagerNotification *a3)
{
  __int64 *v6; // rax
  __int64 v7; // rbp
  TwinUI::Cortana::CCortanaWNFService *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v12[2]; // [rsp+20h] [rbp-18h] BYREF
  void *v13; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  TwinUI::Cortana::CCortanaWNFService *v15; // [rsp+58h] [rbp+20h] BYREF

  v6 = wil::make_unique_nothrow<TwinUI::Cortana::CCortanaWNFService,>((__int64 *)&v15);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v15;
  v15 = 0LL;
  if ( v8 )
    TwinUI::Cortana::CCortanaWNFService::`scalar deleting destructor'(v8);
  v13 = 0LL;
  *(_QWORD *)v12 = v7;
  v9 = ((__int64 (__fastcall *)(CortanaDesktopExperienceView *, struct IServiceProvider *, struct TwinUI::Cortana::ICortanaExperienceManagerNotification *, int *))CortanaDesktopExperienceView::RuntimeClassInitialize)(
         this,
         a2,
         a3,
         v12);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v9);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    &v13,
    0LL);
  return v10;
}
