float __fastcall CProjectedShadowCaster::GetEffectiveAlpha(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2,
        bool *a3)
{
  const struct CVisualTree *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  return *(float *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(
                     (char *)this + 80,
                     &v4,
                     a3);
}
