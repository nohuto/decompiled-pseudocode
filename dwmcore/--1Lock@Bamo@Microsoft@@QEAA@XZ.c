/*
 * XREFs of ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801DF5E0
 * Callers:
 *     ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801DF6F4 (-DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z.c)
 *     ?RemoteClear@?$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Microsoft@@MEAAJXZ @ 0x1801F4C00 (-RemoteClear@-$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x1801F4CB0 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJI@Z @ 0x1801F4E20 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x1801F4F80 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micr.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800ACAB8 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD490 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Microsoft::Bamo::Lock::~Lock(Microsoft::Bamo::Lock *this, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v5; // rdi
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  --*(_DWORD *)(v5 + 188);
  if ( !*((_BYTE *)this + 8) )
  {
    if ( *((_BYTE *)this + 9) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 56) + 104LL))(*(_QWORD *)(v5 + 56));
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2482LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v6,
          v7);
    }
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v5);
  }
  if ( *(_QWORD *)this )
    Microsoft::BamoImpl::BamoImplObject::Release(*(Microsoft::BamoImpl::BamoImplObject **)this, a2, a3, a4);
}
