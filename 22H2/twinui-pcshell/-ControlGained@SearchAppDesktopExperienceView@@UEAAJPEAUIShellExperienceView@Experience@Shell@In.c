/*
 * XREFs of ?ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x180081DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180016EF8 (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180019FAC (-EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18007CE74 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180081FB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180082008 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_180082008.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1800820A4 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ControlGained(__int64 a1, __int64 a2)
{
  __int64 *v4; // r15
  _OWORD *v5; // rax
  _OWORD *v6; // rbx
  _OWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  _OWORD *v10; // rax
  _OWORD *v11; // rbx
  _OWORD *v12; // rsi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+28h] [rbp-28h]
  __int128 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v4 = (__int64 *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 152) )
    return 0LL;
  SearchAppDesktopExperienceView::SetExplicitDismissEnabled((SearchAppDesktopExperienceView *)a1, 0);
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=(v4, a2);
  LODWORD(v17) = 0;
  *(_QWORD *)&v18 = a1;
  *((_QWORD *)&v18 + 1) = SearchAppDesktopExperienceView::OnViewChanged;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v7 = 0LL;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>(v5);
    v6[1] = v18;
    *((_QWORD *)v6 + 4) = v17;
    *(_QWORD *)v6 = off_1804FFBD0;
    v7 = v6;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)*v4 + 152LL))(*v4, v7, a1 + 160);
  v9 = v8;
  if ( v8 >= 0 )
  {
    LODWORD(v17) = 0;
    *(_QWORD *)&v19 = a1;
    *((_QWORD *)&v19 + 1) = SearchAppDesktopExperienceView::OnViewEvent;
    v10 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    v12 = 0LL;
    if ( v10 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>(v10);
      v11[1] = v19;
      *((_QWORD *)v11 + 4) = v17;
      *(_QWORD *)v11 = off_1804FFB80;
      v12 = v11;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)*v4 + 168LL))(*v4, v12, a1 + 168);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v13);
      if ( !v12 )
        goto LABEL_21;
    }
    else
    {
      SearchAppDesktopExperienceView::OnViewPropertiesChanging((SearchAppDesktopExperienceView *)a1);
      v14 = SearchAppDesktopExperienceView::EnsureInputHostManager((SearchAppDesktopExperienceView *)a1);
      v9 = v14;
      if ( v14 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 112) + 24LL))(
                *(_QWORD *)(a1 + 112),
                a1 + 48,
                a1 + 228);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D0,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
            (const char *)(unsigned int)v15);
        if ( v12 )
          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v12 + 16LL))(v12);
        if ( v7 )
          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CF,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v14);
      if ( !v12 )
      {
LABEL_21:
        if ( !v7 )
          return v9;
        goto LABEL_17;
      }
    }
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v12 + 16LL))(v12);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v8);
  if ( v7 )
LABEL_17:
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
