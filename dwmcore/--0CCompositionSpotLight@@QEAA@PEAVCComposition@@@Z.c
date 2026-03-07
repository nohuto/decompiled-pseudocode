CCompositionSpotLight *__fastcall CCompositionSpotLight::CCompositionSpotLight(
        CCompositionSpotLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CCompositionSpotLight *result; // rax

  CCompositionLight::CCompositionLight(this, a2, 0);
  *(_QWORD *)(v2 + 80) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionSpotLight::`vftable'{for `CPropertyChangeResource'};
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_DWORD *)(v2 + 288) = 0;
  *(_QWORD *)(v2 + 264) = v2 + 296;
  *(_QWORD *)(v2 + 272) = v2 + 296;
  *(_DWORD *)(v2 + 280) = 2;
  *(_DWORD *)(v2 + 284) = 2;
  *(_DWORD *)(v2 + 344) = 1065353216;
  *(_DWORD *)(v2 + 324) = 1065353216;
  *(_DWORD *)(v2 + 320) = 1065353216;
  *(_DWORD *)(v2 + 316) = 1065353216;
  *(_DWORD *)(v2 + 312) = 1065353216;
  *(_DWORD *)(v2 + 340) = 1065353216;
  *(_DWORD *)(v2 + 336) = 1065353216;
  *(_DWORD *)(v2 + 332) = 1065353216;
  *(_DWORD *)(v2 + 328) = 1065353216;
  *(_DWORD *)(v2 + 396) = 1065353216;
  *(_DWORD *)(v2 + 400) = 1065353216;
  result = (CCompositionSpotLight *)v2;
  *(_DWORD *)(v2 + 380) = 1057360530;
  *(_DWORD *)(v2 + 384) = 1070141403;
  *(_DWORD *)(v2 + 376) = -1082130432;
  *(_DWORD *)(v2 + 364) = 1120403456;
  return result;
}
