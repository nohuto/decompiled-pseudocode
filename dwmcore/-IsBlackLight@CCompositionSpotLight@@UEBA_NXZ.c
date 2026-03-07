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
