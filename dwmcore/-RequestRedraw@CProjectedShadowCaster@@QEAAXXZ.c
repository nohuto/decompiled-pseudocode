void __fastcall CProjectedShadowCaster::RequestRedraw(CProjectedShadowCaster *this)
{
  CProjectedShadowScene **v1; // rdi
  CProjectedShadowScene **i; // rbx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = (CProjectedShadowScene **)*((_QWORD *)this + 13);
    for ( i = (CProjectedShadowScene **)*((_QWORD *)this + 12); i != v1; ++i )
      CProjectedShadowScene::RequestRedrawAll(*i);
  }
}
