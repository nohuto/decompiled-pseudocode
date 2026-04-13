/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18000B98C
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000BB34 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     wil_details_NtQueryWnfStateData @ 0x18000820C (wil_details_NtQueryWnfStateData.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180009810 (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details **a1,
        __int64 a2,
        __int64 a3)
{
  wil::details *v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rbx
  DWORD LastError; // edi
  struct __WIL__WNF_USER_SUBSCRIPTION *v9; // rdx
  FARPROC ProcAddress; // rax
  HMODULE ModuleHandleW; // rax
  unsigned int v13; // [rsp+50h] [rbp-48h] BYREF
  int v14; // [rsp+54h] [rbp-44h] BYREF
  __int64 v15; // [rsp+58h] [rbp-40h] BYREF

  v15 = a2;
  if ( *a1 )
    return 0LL;
  v13 = 0;
  v14 = 0;
  wil_details_NtQueryWnfStateData((__int64)&v15, a2, a3, (__int64)&v13, 0LL, (__int64)&v14);
  v5 = *a1;
  v6 = v13;
  v7 = v15;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::UnsubscribeWilWnf(v5, v9);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  ProcAddress = (FARPROC)g_wil_details_pfnRtlSubscribeWnfStateChangeNotification;
  if ( g_wil_details_pfnRtlSubscribeWnfStateChangeNotification )
    return ((__int64 (__fastcall *)(wil::details **, __int64, _QWORD, void *, __int64, _QWORD, _DWORD, _DWORD))ProcAddress)(
             a1,
             v7,
             v6,
             &_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
             a3,
             0LL,
             0,
             0);
  ModuleHandleW = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = ModuleHandleW;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "RtlSubscribeWnfStateChangeNotification");
  g_wil_details_pfnRtlSubscribeWnfStateChangeNotification = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(wil::details **, __int64, _QWORD, void *, __int64, _QWORD, _DWORD, _DWORD))ProcAddress)(
             a1,
             v7,
             v6,
             &_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
             a3,
             0LL,
             0,
             0);
  else
    return 3221225785LL;
}
