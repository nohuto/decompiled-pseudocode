CCompositionDistantLight *__fastcall CCompositionDistantLight::CCompositionDistantLight(
        CCompositionDistantLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CCompositionLight::CCompositionLight(this, a2, 0);
  *(_DWORD *)(v2 + 288) = -1082130432;
  *(_QWORD *)(v2 + 80) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionDistantLight::`vftable'{for `CPropertyChangeResource'};
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_DWORD *)(v2 + 276) = 1065353216;
  *(_DWORD *)(v2 + 272) = 1065353216;
  *(_DWORD *)(v2 + 268) = 1065353216;
  *(_DWORD *)(v2 + 264) = 1065353216;
  *(_DWORD *)(v2 + 292) = 1065353216;
  return (CCompositionDistantLight *)v2;
}
