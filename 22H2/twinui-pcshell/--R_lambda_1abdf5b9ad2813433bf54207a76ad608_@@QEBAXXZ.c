/*
 * XREFs of ??R_lambda_1abdf5b9ad2813433bf54207a76ad608_@@QEBAXXZ @ 0x180136730
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_1abdf5b9ad2813433bf54207a76ad608_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18013FFE0 (-Run@-$CTaskWrapper@V_lambda_1abdf5b9ad2813433bf54207a76ad608_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0D8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x18013774C (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180142FF0 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_1abdf5b9ad2813433bf54207a76ad608_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rdx
  __int64 v6; // rax
  bool *v7; // r8
  const char *v8; // r9
  __int64 result; // rax
  int CanPinToTaskbar; // eax
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  TaskbarPinHelper *v15; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = (_QWORD *)(**(_QWORD **)(a1 + 8) + 24LL);
  v6 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 40LL);
  if ( *(_QWORD *)(**(_QWORD **)(a1 + 8) + 48LL) >= 8uLL )
    v5 = (_QWORD *)*v5;
  *(_QWORD *)v11 = v5;
  v12 = v6;
  try
  {
    TryGetAppsFolderItem(&v15, v11, &v13, a4);
    result = (__int64)v15;
    if ( v15 )
    {
      CanPinToTaskbar = TaskbarPinHelper::CanPinToTaskbar(v15, *(struct IShellItem **)(a1 + 16), v7);
      if ( CanPinToTaskbar < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          673LL,
          (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)(unsigned int)CanPinToTaskbar);
        JUMPOUT(0x1801367C9LL);
      }
      result = (__int64)v15;
    }
    if ( result )
      result = winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v15);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x2A4,
             (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
             v8);
  }
  return result;
}
