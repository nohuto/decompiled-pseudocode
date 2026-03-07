__int64 __fastcall CProjectedShadowScene::ProcessSetOpacityFalloff(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF *a3)
{
  CProjectedShadowScene::SetOpacityFalloff(this, *((float *)a3 + 2));
  return 0LL;
}
