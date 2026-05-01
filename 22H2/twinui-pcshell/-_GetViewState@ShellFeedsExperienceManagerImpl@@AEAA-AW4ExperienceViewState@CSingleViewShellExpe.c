/*
 * XREFs of ?_GetViewState@ShellFeedsExperienceManagerImpl@@AEAA?AW4ExperienceViewState@CSingleViewShellExperience@@XZ @ 0x1800B85AC
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x1800B5D00 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 *     ?_OnDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8BE4 (-_OnDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_GetViewState(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 64LL))(v1, &v4) >= 0 )
    return v4;
  return v2;
}
