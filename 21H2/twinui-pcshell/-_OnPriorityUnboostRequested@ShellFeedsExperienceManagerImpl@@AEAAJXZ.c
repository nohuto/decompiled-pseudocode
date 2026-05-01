/*
 * XREFs of ?_OnPriorityUnboostRequested@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8D88
 * Callers:
 *     ?_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800B8F70 (-_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyPriorityUnboostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B80FC (-_ApplyPriorityUnboostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnPriorityUnboostRequested(ShellFeedsExperienceManagerImpl *this)
{
  int v1; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 53);
  if ( v1 > 0 )
  {
    *((_DWORD *)this + 53) = v1 - 1;
    return 0LL;
  }
  v3 = *((_DWORD *)this + 56);
  if ( v3 )
    *((_DWORD *)this + 56) = v3 - 1;
  v4 = ShellFeedsExperienceManagerImpl::_ApplyPriorityUnboostIfNeeded(this);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
