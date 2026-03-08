/*
 * XREFs of ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801DF6F4
 * Callers:
 *     ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x1801B4C20 (-TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z.c)
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801DFC50 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801E03AC (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801DF3E8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801DF5E0 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 */

char __fastcall DataSourceProxy::DoesResourceHaveAccess(DataSourceProxy *this, struct CResource *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  struct Microsoft::Bamo::BaseBamoConnection *v7; // rdx
  const char *v8; // r9
  __int64 v9; // rdx
  int v10; // ebx
  Microsoft::BamoImpl::BamoImplObject *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  v4 = (_QWORD *)v3;
  if ( v3 && (unsigned int)((__int64)(*(_QWORD *)(v3 + 56) - *(_QWORD *)(v3 + 48)) >> 2) )
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v4[4] + 24LL) + 32LL);
      v7 = *(int *)(v6 + 8) <= 0 ? 0LL : *(struct Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
      Microsoft::Bamo::Lock::Lock(v12, v7);
      v9 = v4[6];
      if ( (unsigned int)v5 >= (unsigned __int64)((v4[7] - v9) >> 2) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          54LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          v8);
      v10 = *(_DWORD *)(v9 + 4 * v5);
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v12, v9, (unsigned int)v5, v8);
      if ( (*(unsigned int (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 144LL))(a2) == v10 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= (unsigned int)((__int64)(v4[7] - v4[6]) >> 2) )
        return 0;
    }
  }
  return 1;
}
