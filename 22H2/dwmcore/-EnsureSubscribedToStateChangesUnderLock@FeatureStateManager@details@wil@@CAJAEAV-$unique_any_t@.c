/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x1800B04A0
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1800B0420 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x1800E67E0 (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x1800E9524 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_RtlSubscribeWnfStateChangeNotification @ 0x1800E9838 (wil_details_RtlSubscribeWnfStateChangeNotification.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details **a1,
        __int64 a2,
        __int64 a3)
{
  wil::details *v5; // rbp
  int v6; // r14d
  int v7; // ebx
  DWORD LastError; // edi
  struct __WIL__WNF_USER_SUBSCRIPTION *v10; // rdx
  int v11; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+44h] [rbp-44h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h] BYREF

  v13 = a2;
  if ( *a1 )
    return 0LL;
  v11 = 0;
  v12 = 0;
  wil_details_NtQueryWnfStateData((unsigned int)&v13, a2, a3, (unsigned int)&v11, 0LL, (__int64)&v12);
  v5 = *a1;
  v6 = v11;
  v7 = v13;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::UnsubscribeWilWnf(v5, v10);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return wil_details_RtlSubscribeWnfStateChangeNotification(
           (_DWORD)a1,
           v7,
           v6,
           (unsigned int)&_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
           a3);
}
