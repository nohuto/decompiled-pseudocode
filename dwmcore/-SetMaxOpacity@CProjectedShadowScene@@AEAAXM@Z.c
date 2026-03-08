/*
 * XREFs of ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x180004624
 * Callers:
 *     ?ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMAXOPACITY@@@Z @ 0x1802487D4 (-ProcessSetMaxOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHA.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802488B0 (-SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180005B3C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CProjectedShadowScene::SetMaxOpacity(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm1_4
  float v4; // xmm0_4

  v3 = fmaxf(0.0, a2);
  v4 = fminf(1.0, v3);
  if ( *((float *)this + 31) != v4 )
  {
    *((float *)this + 31) = v4;
    CResource::InvalidateAnimationSources(this, 4u);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
