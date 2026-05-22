/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18003DB30
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003DAB0 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x18003E220 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_RtlSubscribeWnfStateChangeNotification @ 0x18003E534 (wil_details_RtlSubscribeWnfStateChangeNotification.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180064C6C (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x180067FDC (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details **a1,
        __int64 a2,
        __int64 a3)
{
  bool v3; // zf
  wil::details *v6; // rsi
  int v7; // r14d
  int v8; // ebx
  struct __WIL__WNF_USER_SUBSCRIPTION *v9; // rdx
  int v11; // [rsp+40h] [rbp-20h] BYREF
  int v12; // [rsp+44h] [rbp-1Ch] BYREF
  _BYTE v13[4]; // [rsp+48h] [rbp-18h] BYREF
  DWORD LastError; // [rsp+4Ch] [rbp-14h]
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF

  v3 = *a1 == 0LL;
  v15 = a2;
  if ( !v3 )
    return 0LL;
  v11 = 0;
  v12 = 0;
  wil_details_NtQueryWnfStateData((unsigned int)&v15, a2, a3, (unsigned int)&v11, 0LL, (__int64)&v12);
  v6 = *a1;
  v7 = v11;
  v8 = v15;
  if ( *a1 )
  {
    v13[0] = 0;
    LastError = GetLastError();
    wil::details::UnsubscribeWilWnf(v6, v9);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v13);
  }
  *a1 = 0LL;
  return wil_details_RtlSubscribeWnfStateChangeNotification(
           (_DWORD)a1,
           v8,
           v7,
           (unsigned int)_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
           a3);
}
