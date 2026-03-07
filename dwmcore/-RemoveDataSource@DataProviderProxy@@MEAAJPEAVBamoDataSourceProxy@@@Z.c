__int64 __fastcall DataProviderProxy::RemoveDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  int v3; // r8d

  v3 = DataProviderProxy::RemoveSourceEntry(this, a2);
  if ( v3 < 0 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, (unsigned int)v3);
  return 0LL;
}
