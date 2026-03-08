/*
 * XREFs of ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801DF3E8
 * Callers:
 *     ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801DF6F4 (-DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z.c)
 *     ?RemoteClear@?$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Microsoft@@MEAAJXZ @ 0x1801F4C00 (-RemoteClear@-$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x1801F4CB0 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJI@Z @ 0x1801F4E20 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x1801F4F80 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micr.c)
 * Callees:
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800ACAFC (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800ACB28 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800ACB5C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PauseNewDispatch@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAA_NXZ @ 0x1801E01F0 (-PauseNewDispatch@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAA_NXZ.c)
 */

Microsoft::BamoImpl::BamoImplObject **__fastcall Microsoft::Bamo::Lock::Lock(
        Microsoft::BamoImpl::BamoImplObject **this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  __int64 v3; // rbx
  bool HasLock; // al

  *this = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)a2 + 56LL))(a2);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
    this,
    *(volatile signed __int32 **)(v3 + 96));
  HasLock = Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3);
  *((_BYTE *)this + 8) = HasLock;
  *((_BYTE *)this + 9) = 0;
  if ( !HasLock )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3);
    *((_BYTE *)this + 9) = Microsoft::BamoImpl::BaseBamoConnectionImpl::PauseNewDispatch((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v3);
  }
  ++*(_DWORD *)(v3 + 188);
  return this;
}
