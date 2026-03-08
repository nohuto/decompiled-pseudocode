/*
 * XREFs of ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x18024D08C
 * Callers:
 *     ?IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x18024CC90 (-IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x18024CF04 (-ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CScenePbrMaterial::IntializeSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2,
        bool *a3)
{
  __int64 v6; // rdx

  *a3 = 0;
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(struct ISpectreMaterial *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, *((unsigned int *)this + 23));
  CScenePbrMaterial::ApplyEmissiveFactorToSpectreResource(this, a2);
  LOBYTE(v6) = *((_BYTE *)this + 108);
  (*(void (__fastcall **)(struct ISpectreMaterial *, __int64))(*(_QWORD *)a2 + 56LL))(a2, v6);
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 72LL))(a2);
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 80LL))(a2);
  *a3 = 1;
}
