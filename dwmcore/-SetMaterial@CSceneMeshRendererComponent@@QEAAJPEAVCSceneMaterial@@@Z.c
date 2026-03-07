__int64 __fastcall CSceneMeshRendererComponent::SetMaterial(
        CSceneMeshRendererComponent *this,
        struct CSceneMaterial *a2)
{
  struct CSceneMaterial *v4; // rcx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CSceneComponent *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct CSceneMaterial *)*((_QWORD *)this + 10);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      v11 = this;
      std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
        (char *)v4 + 72,
        &v11);
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
      *((_QWORD *)this + 10) = 0LL;
    }
    if ( a2 )
    {
      v5 = CResource::RegisterNotifier(this, a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
      v11 = this;
      v8 = std::map<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>::_Try_emplace<CSceneMeshRendererComponent * const &,>(
             (char *)a2 + 72,
             v9,
             &v11);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)v8 + 40LL));
      CSceneComponent::AddDirtySceneObject(v11, a2);
      *((_QWORD *)this + 10) = a2;
    }
    CSceneMeshRendererComponent::ApplyMaterialToSpectreResources(this);
  }
  return 0LL;
}
