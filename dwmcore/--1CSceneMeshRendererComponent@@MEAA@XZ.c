void __fastcall CSceneMeshRendererComponent::~CSceneMeshRendererComponent(CSceneMeshRendererComponent *this)
{
  __int64 v2; // rcx
  CSceneMeshRendererComponent *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSceneMeshRendererComponent::`vftable';
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v3 = this;
    std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
      v2 + 72,
      &v3);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)this + 96,
    (__int64)this + 96,
    *(_QWORD *)(*((_QWORD *)this + 12) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 12), 0x28uLL);
  CSceneComponent::~CSceneComponent(this);
}
