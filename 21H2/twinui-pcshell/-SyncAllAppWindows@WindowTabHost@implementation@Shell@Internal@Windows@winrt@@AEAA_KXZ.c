/*
 * XREFs of ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x1800EC694
 * Callers:
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800EA9F8 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x1800EB910 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800EBB00 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800EBC30 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800ECC44 (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::for_each_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64_________lambda_8fbe8e0abb0a778915de0e91094d34a1___ @ 0x1800E68C4 (std--for_each_std--_List_iterator_std--_List_val_std--_List_simple_types_std--pair__ea_1800E68C4.c)
 *     ?GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@XZ @ 0x1800EABCC (-GetAllAppTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$unord.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE5CC (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  __int64 v2; // rdi
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  unsigned int *v7[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v9[8]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD **v10; // [rsp+48h] [rbp-38h]
  _BYTE v11[40]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+10h] BYREF

  v12 = 0LL;
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment((__int64)this, (__int64)v9);
  v7[0] = (unsigned int *)this;
  v7[1] = (unsigned int *)&v12;
  std::for_each_std::_List_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64_________lambda_8fbe8e0abb0a778915de0e91094d34a1___(
    &v8,
    *v10,
    v10,
    v7);
  v2 = v12;
  std::vector<void *>::_Tidy(v11);
  v3 = v10;
  *v10[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x20);
      v4 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)0x20);
  return v2;
}
