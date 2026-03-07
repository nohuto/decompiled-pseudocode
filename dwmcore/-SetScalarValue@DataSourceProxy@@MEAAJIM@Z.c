__int64 __fastcall DataSourceProxy::SetScalarValue(DataSourceProxy *this, int a2, float a3)
{
  int v5; // eax
  float v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v5 = DataSourcePropertySet::SetProperty<float>((__int64)this + 64, a2, (int *)&v7);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
