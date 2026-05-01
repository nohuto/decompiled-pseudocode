/*
 * XREFs of ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x1803A5040
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1804E6194 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall XamlLauncherState::OnIdleStateChanged(XamlLauncherState *this, int a2, __int64 a3, __int64 a4)
{
  struct IUnknown *v4; // rax
  ExperienceManagerUtils *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct IUnknown *)((char *)this - 48);
  v5 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  if ( a2 )
  {
    v6 = ExperienceManagerUtils::PostToUIThread(v5, v4, (void *)1, a4);
    if ( v6 < 0 )
    {
      v7 = 363LL;
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  else
  {
    v6 = ExperienceManagerUtils::PostToUIThread(v5, v4, (void *)6, a4);
    if ( v6 < 0 )
    {
      v7 = 367LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
