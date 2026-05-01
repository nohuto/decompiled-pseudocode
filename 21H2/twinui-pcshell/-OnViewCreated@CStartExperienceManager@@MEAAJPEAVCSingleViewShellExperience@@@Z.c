/*
 * XREFs of ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180243950
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004BD28 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x180076C30 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18008B3C0 (-KeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1802691A0 (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCreated(
        PriorityBoostHelper **this,
        struct CSingleViewShellExperience *a2)
{
  CSingleViewShellExperience *v2; // rdi
  int v4; // eax
  int v5; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  ExperienceManagerUtils *v7; // rcx
  HWND v8; // rax
  HWND v9; // rbx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CSingleViewShellExperience *)(this + 28);
  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)(this + 28), 3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = PriorityBoostHelper::OnViewCreated(this[27]);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  if ( this[31] )
  {
    CSingleViewShellExperience::KeepAlive(v2);
    v7 = this[31];
  }
  else
  {
    v7 = 0LL;
  }
  v8 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v7, v6);
  v9 = v8;
  if ( v8 )
  {
    if ( !SetPropW(v8, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      v10 = 451LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    if ( !SetPropW(v9, L"WindowShouldReportLayoutCompletedTelemetryProp", HANDLE_FLAG_INHERIT) )
    {
      v10 = 455LL;
      goto LABEL_11;
    }
  }
  return 0LL;
}
