void __fastcall DataSourceProxy::InvalidateReadersAnimationSources(DataSourceProxy *this, int a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  CResource *v5; // rcx

  v2 = *((_QWORD *)this + 26);
  for ( i = *((_QWORD *)this + 25); i != v2; i += 8LL )
  {
    v5 = *(CResource **)(*(_QWORD *)i + 16LL);
    if ( v5 )
      CResource::InvalidateAnimationSources(v5, a2);
  }
}
