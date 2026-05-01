/*
 * XREFs of wil::details::lambda_call__lambda_1f69795906b5936bca47035c0fa434a6___::_lambda_call__lambda_1f69795906b5936bca47035c0fa434a6___ @ 0x1802F55CC
 * Callers:
 *     __lambda_1f4f68820907753b977dd0769491499a_::operator()_::_1_::dtor$5 @ 0x1802F5E80 (__lambda_1f4f68820907753b977dd0769491499a_--operator()_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802F7C18 (-RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 */

void __fastcall wil::details::lambda_call__lambda_1f69795906b5936bca47035c0fa434a6___::_lambda_call__lambda_1f69795906b5936bca47035c0fa434a6___(
        __int64 a1,
        __int64 a2,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v3 = TitleBarController::RemoveWin32View(
           *(TitleBarController **)a1,
           **(struct IWin32ApplicationView ***)(a1 + 8),
           a3);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x270,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v3);
  }
}
