void __fastcall CSceneMetallicRoughnessMaterial::IntializeSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2,
        bool *a3)
{
  CScenePbrMaterial::IntializeSpectreResource(this, a2, a3);
  CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(this, a2);
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 64LL))(a2);
  *a3 = 1;
}
