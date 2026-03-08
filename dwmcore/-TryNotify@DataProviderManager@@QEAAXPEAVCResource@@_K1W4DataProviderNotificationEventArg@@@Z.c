/*
 * XREFs of ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x1801B4C20
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x18001F3EC (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001F4C0 (-OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801B46D8 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_comp.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1801B496C (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801DF6F4 (-DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z.c)
 */

char __fastcall DataProviderManager::TryNotify(
        DataProviderManager *a1,
        struct CResource *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  struct BamoDataSourceProxy *DataSourceProxy; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(a1, a3, a4);
  if ( DataSourceProxy )
  {
    LOBYTE(DataSourceProxy) = DataSourceProxy::DoesResourceHaveAccess(DataSourceProxy, a2);
    if ( (_BYTE)DataSourceProxy )
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::find<void>(
        (_QWORD *)a1 + 5,
        v10,
        (const unsigned __int8 *)&v11);
      LOBYTE(DataSourceProxy) = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10[0] + 24LL) + 8LL)
                                                                                             + 64LL))(
                                  *(_QWORD *)(v10[0] + 24LL) + 8LL,
                                  a4,
                                  a5);
    }
  }
  return (char)DataSourceProxy;
}
