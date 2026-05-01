/*
 * XREFs of ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x18021E430
 * Callers:
 *     wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___ @ 0x18021D794 (wil--details--ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___--_ScopeExitFn__lambda_d721.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18021FD50 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Close(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 47);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, *((unsigned int *)this + 96));
    if ( v3 >= 0 )
      *((_DWORD *)this + 96) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x126,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = *((_QWORD *)this + 53);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 103));
    if ( v5 >= 0 )
      *((_DWORD *)this + 103) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 53) + 32LL))(
           *((_QWORD *)this + 53),
           *((unsigned int *)this + 104));
    if ( v6 >= 0 )
      *((_DWORD *)this + 103) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x133,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 54);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *((unsigned int *)this + 105));
    if ( v8 >= 0 )
      *((_DWORD *)this + 105) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 60);
  return 0LL;
}
