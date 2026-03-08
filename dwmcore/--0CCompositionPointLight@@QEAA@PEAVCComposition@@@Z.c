/*
 * XREFs of ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x180221490
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x180023E14 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionPointLight *__fastcall CCompositionPointLight::CCompositionPointLight(
        CCompositionPointLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CCompositionLight::CCompositionLight(this, a2, 0);
  *(_DWORD *)(v2 + 300) = 1120403456;
  *(_QWORD *)(v2 + 80) = &CCompositionEnvironmentLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionPointLight::`vftable'{for `CPropertyChangeResource'};
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_DWORD *)(v2 + 280) = 1065353216;
  *(_DWORD *)(v2 + 276) = 1065353216;
  *(_DWORD *)(v2 + 272) = 1065353216;
  *(_DWORD *)(v2 + 268) = 1065353216;
  *(_DWORD *)(v2 + 264) = 1065353216;
  *(_DWORD *)(v2 + 312) = 1065353216;
  return (CCompositionPointLight *)v2;
}
