/*
 * XREFs of ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802488B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x180004550 (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x180004598 (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x1800045E4 (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x180004624 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x180004688 (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x180248854 (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::SetProperty(CProjectedShadowScene *a1, int a2, int a3, float *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  unsigned int v8; // edi

  if ( a3 != 18 )
    goto LABEL_15;
  if ( !a2 )
  {
    CProjectedShadowScene::SetBlurRadiusMultiplier(a1, *a4);
    return 0;
  }
  v4 = a2 - 3;
  if ( !v4 )
  {
    CProjectedShadowScene::SetMaxBlurRadius(a1, *a4);
    return 0;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    CProjectedShadowScene::SetMaxOpacity(a1, *a4);
    return 0;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    CProjectedShadowScene::SetMinBlurRadius(a1, *a4);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    CProjectedShadowScene::SetMinOpacity(a1, *a4);
    return 0;
  }
  if ( v7 != 1 )
  {
LABEL_15:
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0xDAu, 0LL);
    return v8;
  }
  CProjectedShadowScene::SetOpacityFalloff(a1, *a4);
  return 0;
}
