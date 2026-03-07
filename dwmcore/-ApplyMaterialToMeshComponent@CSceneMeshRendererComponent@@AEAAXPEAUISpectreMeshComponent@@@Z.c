void __fastcall CSceneMeshRendererComponent::ApplyMaterialToMeshComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(struct ISpectreMeshComponent *, _QWORD); // rdi
  unsigned __int64 v4; // r10
  struct ISpectreMeshComponent *v5; // r11
  __int64 v6; // rdx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  CSceneMeshRendererComponent *v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 10);
  v3 = *(void (__fastcall **)(struct ISpectreMeshComponent *, _QWORD))(*(_QWORD *)a2 + 8LL);
  if ( v2 )
  {
    v9 = this;
    std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<CSceneMeshRendererComponent *>(
      (__int64 *)(v2 + 72),
      (__int64)v7,
      (unsigned __int64 *)&v9);
    v6 = v8;
    if ( *(_BYTE *)(v8 + 25) || v4 < *(_QWORD *)(v8 + 32) )
      v6 = *(_QWORD *)(v2 + 72);
    v3(v5, *(_QWORD *)(v6 + 40));
  }
  else
  {
    v3(a2, 0LL);
  }
}
