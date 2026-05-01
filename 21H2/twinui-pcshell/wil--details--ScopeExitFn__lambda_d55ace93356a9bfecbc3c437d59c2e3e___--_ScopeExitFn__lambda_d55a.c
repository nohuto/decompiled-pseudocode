/*
 * XREFs of wil::details::ScopeExitFn__lambda_d55ace93356a9bfecbc3c437d59c2e3e___::_ScopeExitFn__lambda_d55ace93356a9bfecbc3c437d59c2e3e___ @ 0x1800CEABC
 * Callers:
 *     ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1803BCBF8 (-OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged_::_1_::dtor$0 @ 0x1803BCC85 (_TouchKeyboardExperienceManager--OnAutoInvokeInDesktopModePolicyChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_d55ace93356a9bfecbc3c437d59c2e3e___::_ScopeExitFn__lambda_d55ace93356a9bfecbc3c437d59c2e3e___(
        __int64 a1)
{
  int PolicyData; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    if ( **(_QWORD **)a1 )
    {
      PolicyData = PolicyManager_FreeGetPolicyData();
      if ( PolicyData < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA6C,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)PolicyData);
    }
  }
}
