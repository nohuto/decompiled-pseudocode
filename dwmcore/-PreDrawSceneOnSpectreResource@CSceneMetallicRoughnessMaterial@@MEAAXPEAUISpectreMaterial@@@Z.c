/*
 * XREFs of ?PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x18024CE80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1801D5F40 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x18024CF64 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 *     ?PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x18024D4B0 (-PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::PreDrawSceneOnSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  CScenePbrMaterial::PreDrawSceneOnSpectreResource(this, a2);
  v4 = *((_QWORD *)this + 21);
  v6 = std::string::string(v10, "Material/DiffuseTexture", v5);
  CScenePbrMaterial::ApplyInputToSpectreResource(this, a2, v6, v4);
  v7 = *((_QWORD *)this + 22);
  v9 = std::string::string(v10, "Material/SpecularTexture", v8);
  CScenePbrMaterial::ApplyInputToSpectreResource(this, a2, v9, v7);
}
