/*
 * XREFs of ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x180029AB4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x180029BD4 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::CCompositionSpotLight(
        CCompositionSpotLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CCompositionSpotLight *result; // rax

  CCompositionLight::CCompositionLight(this, a2, 0);
  *(_QWORD *)(v2 + 72) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)v2 = &CCompositionSpotLight::`vftable'{for `CPropertyChangeResource'};
  *(_DWORD *)(v2 + 280) = 0;
  *(_QWORD *)(v2 + 256) = v2 + 288;
  *(_QWORD *)(v2 + 264) = v2 + 288;
  *(_DWORD *)(v2 + 272) = 2;
  *(_DWORD *)(v2 + 276) = 2;
  *(_DWORD *)(v2 + 336) = 1065353216;
  *(_DWORD *)(v2 + 316) = 1065353216;
  *(_DWORD *)(v2 + 312) = 1065353216;
  *(_DWORD *)(v2 + 308) = 1065353216;
  *(_DWORD *)(v2 + 304) = 1065353216;
  *(_DWORD *)(v2 + 332) = 1065353216;
  *(_DWORD *)(v2 + 328) = 1065353216;
  *(_DWORD *)(v2 + 324) = 1065353216;
  *(_DWORD *)(v2 + 320) = 1065353216;
  *(_DWORD *)(v2 + 388) = 1065353216;
  *(_DWORD *)(v2 + 392) = 1065353216;
  result = (CCompositionSpotLight *)v2;
  *(_DWORD *)(v2 + 372) = 1057360530;
  *(_DWORD *)(v2 + 376) = 1070141403;
  *(_DWORD *)(v2 + 368) = -1082130432;
  *(_DWORD *)(v2 + 356) = 1120403456;
  return result;
}
