/*
 * XREFs of ?PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x18024D4B0
 * Callers:
 *     ?PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x18024CE80 (-PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1801D5F40 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x18024CF64 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 */

void __fastcall CScenePbrMaterial::PreDrawSceneOnSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  _QWORD *v12; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 15);
  v6 = std::string::string(v13, "Material/EmissiveTexture", a3);
  CScenePbrMaterial::ApplyInputToSpectreResource((__int64)this, (__int64 *)a2, (__int64)v6, v3);
  v7 = *((_QWORD *)this + 16);
  v9 = std::string::string(v13, "Material/NormalTexture", v8);
  CScenePbrMaterial::ApplyInputToSpectreResource((__int64)this, (__int64 *)a2, (__int64)v9, v7);
  v10 = *((_QWORD *)this + 17);
  v12 = std::string::string(v13, "Material/OcclusionTexture", v11);
  CScenePbrMaterial::ApplyInputToSpectreResource((__int64)this, (__int64 *)a2, (__int64)v12, v10);
}
