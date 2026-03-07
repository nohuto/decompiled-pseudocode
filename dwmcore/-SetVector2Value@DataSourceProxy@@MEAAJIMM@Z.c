__int64 __fastcall DataSourceProxy::SetVector2Value(DataSourceProxy *this, int a2, float a3, float a4)
{
  int v6; // eax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = __PAIR64__(LODWORD(a4), LODWORD(a3));
  v6 = DataSourcePropertySet::SetProperty<D2DVector2>((__int64)this + 64, a2, (__int64 *)&v8);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v6) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
