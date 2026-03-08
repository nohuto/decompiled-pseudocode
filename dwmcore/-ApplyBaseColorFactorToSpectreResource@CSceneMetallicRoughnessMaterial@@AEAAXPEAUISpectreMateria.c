/*
 * XREFs of ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x18024CC24
 * Callers:
 *     ?IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x18024CC90 (-IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 *     ?OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x18024CCFC (-OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)a2;
  v3 = *((_OWORD *)this + 9);
  (*(void (__fastcall **)(struct ISpectreMaterial *, __int128 *))(v2 + 40))(a2, &v3);
}
