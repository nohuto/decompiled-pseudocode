/*
 * XREFs of ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x180004990
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180084280 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180085300 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x1800049D8 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 */

__int64 __fastcall CVisual::GetLightAtNoRef(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int LightsCount; // eax
  int v4; // r8d
  __int64 v5; // r9
  unsigned int v6; // r10d
  __int64 v7; // rax

  LightsCount = CVisual::GetLightsCount(a1, (unsigned int)a3, a3, a1);
  if ( v6 >= LightsCount )
    return 0LL;
  if ( v4 )
    v7 = *(_QWORD *)(v5 + 296);
  else
    v7 = *(_QWORD *)(v5 + 272);
  return *(_QWORD *)(v7 + 16LL * v6);
}
