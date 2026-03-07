void __fastcall CSceneComponent::~CSceneComponent(CSceneComponent *this)
{
  void **v1; // rbx

  v1 = (void **)((char *)this + 64);
  *(_QWORD *)this = &CSceneComponent::`vftable';
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (__int64)this + 64,
    (__int64)v1,
    *((_QWORD *)*v1 + 1));
  std::_Deallocate<16,0>(*v1, 0x30uLL);
  CResource::~CResource(this);
}
