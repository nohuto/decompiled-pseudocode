/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x18013B9E0
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E440 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@AEBU01@@Z @ 0x180135510 (--0-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@XZ @ 0x180135E18 (--1-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x180137620 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 */

bool __fastcall anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 i; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD **v8; // r8
  char v9; // bl
  std::_Ref_count_base *v10; // rcx
  bool v11; // bl
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  for ( i = *(_QWORD *)(a1 + 24); i != v2; i += 24LL )
  {
    v6 = (_QWORD *)std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(
                     (__int64)v15,
                     i);
    std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(&v13, v6);
    v7 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(&v14, a2);
    v9 = AreEquivalentPinOperations((_QWORD **)v7, v8);
    std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::~pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>((__int64)v6);
    if ( v9 )
      break;
  }
  v10 = (std::_Ref_count_base *)a2[1];
  v11 = i != *(_QWORD *)(a1 + 32);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return v11;
}
