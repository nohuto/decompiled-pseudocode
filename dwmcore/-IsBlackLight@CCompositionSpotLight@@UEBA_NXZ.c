/*
 * XREFs of ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x1800E3DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z @ 0x1800E3DEC (-IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z.c)
 */

char __fastcall CCompositionSpotLight::IsBlackLight(CCompositionSpotLight *this)
{
  bool IsBlackColor; // al
  __int64 v2; // rcx
  char v3; // r8

  IsBlackColor = CCompositionLight::IsBlackColor(
                   this,
                   (const struct _D3DCOLORVALUE *)((char *)this + 312),
                   *((float *)this + 99));
  v3 = 0;
  if ( IsBlackColor )
    return CCompositionLight::IsBlackColor(
             (CCompositionLight *)v2,
             (const struct _D3DCOLORVALUE *)(v2 + 328),
             *(float *)(v2 + 400));
  return v3;
}
