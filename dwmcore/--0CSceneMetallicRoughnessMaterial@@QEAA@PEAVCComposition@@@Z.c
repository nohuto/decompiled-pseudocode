/*
 * XREFs of ??0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z @ 0x1801BE12C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18024C65C (--0CSceneMaterial@@QEAA@PEAVCComposition@@@Z.c)
 */

CSceneMetallicRoughnessMaterial *__fastcall CSceneMetallicRoughnessMaterial::CSceneMetallicRoughnessMaterial(
        CSceneMetallicRoughnessMaterial *this,
        struct CComposition *a2)
{
  CSceneMaterial::CSceneMaterial(this, a2);
  *((_QWORD *)this + 11) = 1056964608LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 108) = 0;
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  *((_DWORD *)this + 36) = 1065353216;
  *((_DWORD *)this + 37) = 1065353216;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 40) = 1065353216;
  *((_DWORD *)this + 41) = 1065353216;
  *(_QWORD *)this = &CSceneMetallicRoughnessMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 8) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  return this;
}
