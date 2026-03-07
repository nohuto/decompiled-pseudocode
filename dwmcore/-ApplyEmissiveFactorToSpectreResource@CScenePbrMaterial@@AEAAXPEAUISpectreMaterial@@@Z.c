void __fastcall CScenePbrMaterial::ApplyEmissiveFactorToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  v2 = *((_QWORD *)this + 12);
  v5 = *((_DWORD *)this + 26);
  v3 = *(_QWORD *)a2;
  v4 = v2;
  (*(void (__fastcall **)(struct ISpectreMaterial *, __int64 *))(v3 + 48))(a2, &v4);
}
