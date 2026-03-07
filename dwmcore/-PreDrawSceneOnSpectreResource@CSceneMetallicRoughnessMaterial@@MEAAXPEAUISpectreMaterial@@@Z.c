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
