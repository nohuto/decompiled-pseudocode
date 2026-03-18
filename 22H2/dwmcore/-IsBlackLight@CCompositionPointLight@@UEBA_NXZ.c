/*
 * XREFs of ?IsBlackLight@CCompositionPointLight@@UEBA_NXZ @ 0x180224E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionPointLight::IsBlackLight(CCompositionPointLight *this)
{
  return CCompositionLight::IsBlackColor(
           this,
           (const struct _D3DCOLORVALUE *)((char *)this + 264),
           *((float *)this + 78));
}
