/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation @ 0x18013DFE8
 * Callers:
 *     _lambda_3365270d15408528c67f40078b37390e_::operator() @ 0x1801368B8 (_lambda_3365270d15408528c67f40078b37390e_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?4U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@$0A@@?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x180129A48 (--$-4U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Found.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@0AEAV?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x180132BF4 (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperat.c)
 */

void __fastcall anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rbx
  __int64 *i; // rsi
  __int64 v7; // rsi
  std::_Ref_count_base *v8; // rcx

  v2 = *(__int64 **)(a1 + 32);
  v4 = *(__int64 **)(a1 + 24);
  if ( v4 != v2 )
  {
    do
    {
      if ( *v4 == *a2 )
        break;
      v4 += 3;
    }
    while ( v4 != v2 );
    if ( v4 != v2 )
    {
      for ( i = v4 + 3; i != v2; i += 3 )
      {
        if ( *i != *a2 )
        {
          std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::operator=<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>,0>(
            v4,
            i);
          v4 += 3;
        }
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 32);
  if ( v2 != (__int64 *)v7 )
  {
    do
    {
      std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::operator=<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>,0>(
        v4,
        v2);
      v4 += 3;
      v2 += 3;
    }
    while ( v2 != (__int64 *)v7 );
    v7 = *(_QWORD *)(a1 + 32);
  }
  std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
    (__int64)v4,
    v7);
  *(_QWORD *)(a1 + 32) = v4;
  v8 = (std::_Ref_count_base *)a2[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
