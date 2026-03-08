/*
 * XREFs of ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x1801B4CB8
 * Callers:
 *     ??1CDataSourceReader@@UEAA@XZ @ 0x180225A8C (--1CDataSourceReader@@UEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1801B496C (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801E082C (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall DataProviderManager::UnregisterReaderForDataSource(
        DataProviderManager *this,
        __int64 a2,
        unsigned __int64 a3,
        struct CDataSourceReader *a4)
{
  struct BamoDataSourceProxy *DataSourceProxy; // rax
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  DataSourceProxy = DataProviderManager::GetDataSourceProxy(this, a2, a3);
  if ( !DataSourceProxy )
  {
    v6 = -2147467259;
    v7 = 398LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = DataSourceProxy::UnregisterReader(DataSourceProxy, a4);
  if ( v6 < 0 )
  {
    v7 = 402LL;
    goto LABEL_3;
  }
  return 0LL;
}
