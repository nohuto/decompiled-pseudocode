/*
 * XREFs of ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180227780
 * Callers:
 *     ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180229590 (-OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18022B24C (-_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::EnsureForegroundRights(CortanaSharedExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CortanaSharedExperienceManager::_AllowForegroundRights(this);
  if ( v2 < 0 )
  {
    v3 = 372LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 112LL))(*((_QWORD *)this + 63));
  if ( v2 < 0 )
  {
    v3 = 373LL;
    goto LABEL_3;
  }
  return 0LL;
}
