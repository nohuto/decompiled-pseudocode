/*
 * XREFs of ?_OnPriorityBoostRequested@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8D10
 * Callers:
 *     ?_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800B8F50 (-_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyPriorityBoostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B7FB0 (-_ApplyPriorityBoostIfNeeded@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnPriorityBoostRequested(ShellFeedsExperienceManagerImpl *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 52);
  if ( v1 > 0 )
  {
    *((_DWORD *)this + 52) = v1 - 1;
    return 0LL;
  }
  ++*((_DWORD *)this + 56);
  v3 = ShellFeedsExperienceManagerImpl::_ApplyPriorityBoostIfNeeded(this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
