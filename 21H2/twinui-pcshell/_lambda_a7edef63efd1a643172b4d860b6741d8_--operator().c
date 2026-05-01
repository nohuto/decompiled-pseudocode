/*
 * XREFs of _lambda_a7edef63efd1a643172b4d860b6741d8_::operator() @ 0x18009ABF4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_a7edef63efd1a643172b4d860b6741d8___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke @ 0x18009AE40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18009AE40.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800867B8 (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_a7edef63efd1a643172b4d860b6741d8_::operator()(
        CToastCenterExperienceManager **a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // ebx
  CToastCenterExperienceManager *v8; // rcx
  bool v9; // al
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  v3 = *a2;
  LOBYTE(v12) = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 48))(a2, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = *a1;
    v9 = (_BYTE)v12 != 0;
    *((_BYTE *)*a1 + 442) = (_BYTE)v12 != 0;
    if ( v9 )
    {
      v10 = CToastCenterExperienceManager::Hide(v8);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x19E,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x233,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
