void __fastcall CProjectedShadowScene::NotifyOnChanged(CProjectedShadowScene *a1)
{
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    *((_QWORD *)a1 + 13) = 0LL;
    CProjectedShadowScene::RequestRedrawAll(a1);
  }
}
