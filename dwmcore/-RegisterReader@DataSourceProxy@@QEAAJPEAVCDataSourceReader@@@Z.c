/*
 * XREFs of ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801E03AC
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800FF72C (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801B489C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x180225BC0 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_S.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009990C (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x1801DE4C8 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAV?$CWeakReference@VCResource@@@@@?$vector@PEAV?$CWeakReference@VCResource@@@@V?$allocator@PEAV?$CWeakReference@VCResource@@@@@std@@@std@@QEAAPEAPEAV?$CWeakReference@VCResource@@@@QEAPEAV2@AEBQEAV2@@Z @ 0x1801DF06C (--$_Emplace_reallocate@AEBQEAV-$CWeakReference@VCResource@@@@@-$vector@PEAV-$CWeakReference@VCRe.c)
 *     ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801DF6F4 (-DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z.c)
 *     ?ReaderRegistered@DataProviderProxy@@QEAAX_K@Z @ 0x1801E1CD8 (-ReaderRegistered@DataProviderProxy@@QEAAX_K@Z.c)
 */

__int64 __fastcall DataSourceProxy::RegisterReader(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  _BYTE *v5; // rdx
  DataProviderProxy *v6; // rbx
  unsigned __int64 Unique; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWeakResourceReference *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( DataSourceProxy::DoesResourceHaveAccess(this, a2) )
  {
    v9 = 0LL;
    CWeakReference<CResource>::Create(a2, &v9);
    v5 = (_BYTE *)*((_QWORD *)this + 26);
    if ( v5 == *((_BYTE **)this + 27) )
    {
      std::vector<CWeakReference<CResource> *,std::allocator<CWeakReference<CResource> *>>::_Emplace_reallocate<CWeakReference<CResource> * const &>(
        (const void **)this + 25,
        v5,
        &v9);
    }
    else
    {
      *(_QWORD *)v5 = v9;
      *((_QWORD *)this + 26) += 8LL;
    }
    *((_BYTE *)a2 + 80) |= 1u;
    v6 = (DataProviderProxy *)*((_QWORD *)this + 24);
    Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)this);
    DataProviderProxy::ReaderRegistered(v6, Unique);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x197,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
}
