/*
 * XREFs of ?Initialize@CAccentBlurBehind@@EEAAJXZ @ 0x180009C20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180027E20 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800286E0 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CAccentBlurBehind::Initialize(struct CRenderDataVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x530u);
  }
  else
  {
    v4 = CRenderDataVisual::Create(this + 35);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x531u);
  }
  return v3;
}
