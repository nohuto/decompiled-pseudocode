/*
 * XREFs of ?IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x18024CC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x18024CC24 (-ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMateria.c)
 *     ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x18024D08C (-IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 */

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
