/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x180051A8C
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180051A0C (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x1800551B4 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_RtlSubscribeWnfStateChangeNotification @ 0x1800554F8 (wil_details_RtlSubscribeWnfStateChangeNotification.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x18007FB7C (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details **a1,
        __int64 a2,
        __int64 a3)
{
  wil::details *v5; // rsi
  DWORD LastError; // ebx
  struct __WIL__WNF_USER_SUBSCRIPTION *v8; // rdx
  int v9; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+44h] [rbp-34h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h] BYREF

  v11 = a2;
  if ( *a1 )
    return 0LL;
  v9 = 0;
  v10 = 0;
  wil_details_NtQueryWnfStateData((unsigned int)&v11, a2, a3, (unsigned int)&v9, 0LL, (__int64)&v10);
  v5 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::UnsubscribeWilWnf(v5, v8);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return wil_details_RtlSubscribeWnfStateChangeNotification(
           (_DWORD)a1,
           v11,
           v9,
           (unsigned int)&_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
           a3);
}
