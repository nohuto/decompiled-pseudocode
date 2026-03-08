/*
 * XREFs of ??0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z @ 0x180023C84
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x180023E14 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionAmbientLight *__fastcall CCompositionAmbientLight::CCompositionAmbientLight(
        CCompositionAmbientLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx

  CCompositionLight::CCompositionLight(this, a2, 1);
  *(_QWORD *)(v2 + 80) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionAmbientLight::`vftable'{for `CPropertyChangeResource'};
  *(_DWORD *)(v2 + 268) = 1065353216;
  *(_DWORD *)(v2 + 264) = 1065353216;
  *(_DWORD *)(v2 + 260) = 1065353216;
  *(_DWORD *)(v2 + 256) = 1065353216;
  *(_DWORD *)(v2 + 272) = 1065353216;
  return (CCompositionAmbientLight *)v2;
}
