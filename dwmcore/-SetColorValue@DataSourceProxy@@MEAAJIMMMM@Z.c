__int64 __fastcall DataSourceProxy::SetColorValue(
        DataSourceProxy *this,
        int a2,
        float a3,
        float a4,
        unsigned int a5,
        float a6)
{
  int v8; // eax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  *((float *)&v10 + 3) = a6;
  *(float *)&v10 = a3;
  *(_QWORD *)((char *)&v10 + 4) = __PAIR64__(a5, LODWORD(a4));
  v8 = DataSourcePropertySet::SetProperty<_D3DCOLORVALUE>((__int64)this + 64, a2, &v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v8) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
