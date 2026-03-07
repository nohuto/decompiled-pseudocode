bool __fastcall CCompositionDistantLight::IsValid(
        CCompositionDistantLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  struct CVisual *v4; // rax
  CCompositionLight *v5; // rcx
  const struct CVisual *v6; // r8

  v4 = (struct CVisual *)(*(__int64 (__fastcall **)(CCompositionDistantLight *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)this + 200LL))(
                           this,
                           a2,
                           a3);
  return CCompositionLight::IsValidCoordinateSpace(v5, a2, v6, v4);
}
