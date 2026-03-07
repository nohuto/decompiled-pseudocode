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
