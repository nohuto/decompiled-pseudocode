/*
 * XREFs of ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x180019C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionAmbientLight::IsBlackLight(struct _D3DCOLORVALUE *this)
{
  return CCompositionLight::IsBlackColor((CCompositionLight *)this, this + 16, this[17].r);
}
