/*
 * XREFs of ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180087FD0
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180032E64 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x180076C00 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_314337f5254192d0037cf896f753630c___::_ScopeExitFn__lambda_314337f5254192d0037cf896f753630c___ @ 0x18014EE3C (wil--details--ScopeExitFn__lambda_314337f5254192d0037cf896f753630c___--_ScopeExitFn__lambda_3143.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1804E3B30 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1804E3C70 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x1804E4914 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewCreatedBase(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // esi
  int v10; // ebp
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  int v18[2]; // [rsp+20h] [rbp-28h] BYREF
  char v19; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 24) )
  {
    v9 = *(_DWORD *)(a1 + 64);
    v10 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    v11 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)a1);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AE,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v11);
    *(_DWORD *)(a1 + 64) = v9;
    *(_DWORD *)(a1 + 68) = v10;
  }
  v4 = 0LL;
  if ( &v21 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
  }
  v21 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v21);
  *(_QWORD *)v18 = a1;
  v19 = 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 32LL))(*(_QWORD *)(a1 + 80));
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = (unsigned int)v5;
    v13 = 441LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v12);
    goto LABEL_12;
  }
  v19 = 0;
  if ( *(_DWORD *)(a1 + 64) == 2 )
  {
    v6 = -2147023673;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(a1 + 60) )
  {
    v15 = CSingleViewShellExperience::SetWindowBand(a1);
    v6 = v15;
    if ( v15 < 0 )
    {
      v12 = (unsigned int)v15;
      v13 = 456LL;
      goto LABEL_27;
    }
  }
  if ( *(_BYTE *)(a1 + 53) )
  {
    ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride(a1 + 72, *(_QWORD *)(a1 + 24));
    LOBYTE(v16) = *(_BYTE *)(a1 + 53);
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 88) + 96LL))(
            *(_QWORD *)(a1 + 88),
            a1,
            v16);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D3,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v17);
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v6 = -2147023673;
    v13 = 478LL;
LABEL_26:
    v12 = (unsigned int)v6;
    goto LABEL_27;
  }
  v7 = (***(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 88))(*(_QWORD *)(a1 + 88), a1);
  v6 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DA,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  if ( v6 < 0 )
  {
LABEL_18:
    v14 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)a1);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1E4,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v14);
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    CSingleViewShellExperience::ResetViews((CSingleViewShellExperience *)a1);
    v13 = 489LL;
    goto LABEL_26;
  }
LABEL_12:
  wil::details::ScopeExitFn__lambda_314337f5254192d0037cf896f753630c___::_ScopeExitFn__lambda_314337f5254192d0037cf896f753630c___(v18);
  return (unsigned int)v6;
}
