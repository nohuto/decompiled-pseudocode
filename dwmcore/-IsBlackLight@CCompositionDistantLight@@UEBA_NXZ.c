/*
 * XREFs of ?IsBlackLight@CCompositionDistantLight@@UEBA_NXZ @ 0x1800E3D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionDistantLight::IsBlackLight(CCompositionDistantLight *this)
{
  return CCompositionLight::IsBlackColor(
           this,
           (const struct _D3DCOLORVALUE *)((char *)this + 264),
           *((float *)this + 73));
}
