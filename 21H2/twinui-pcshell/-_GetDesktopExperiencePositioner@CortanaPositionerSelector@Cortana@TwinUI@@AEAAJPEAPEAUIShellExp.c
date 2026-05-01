/*
 * XREFs of ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x180268880
 * Callers:
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x180268550 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180278DD8 (--$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a2)
{
  __int64 *v2; // rbx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v4; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v4 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*((_QWORD *)this + 2);
  if ( v4 )
    goto LABEL_5;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  v11 = *((_QWORD *)this + 5);
  v6 = *((_QWORD *)this + 4);
  *v2 = 0LL;
  v12 = v6;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CortanaDesktopExperienceView,Windows::Internal::Shell::Experience::IShellExperiencePositioner,IServiceProvider * &,TwinUI::Cortana::ICortanaExperienceManagerNotification * &>(
         v2,
         &v12,
         &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD39,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v7);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
      (const char *)v8);
    return v8;
  }
  v4 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v2;
  if ( *v2 )
  {
LABEL_5:
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v2;
  }
  *a2 = v4;
  return 0LL;
}
