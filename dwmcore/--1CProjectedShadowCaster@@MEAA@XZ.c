void __fastcall CProjectedShadowCaster::~CProjectedShadowCaster(struct CResource **this)
{
  struct CResource *v2; // rcx

  *this = (struct CResource *)&CProjectedShadowCaster::`vftable';
  CProjectedShadowCaster::SetCastingVisual((CProjectedShadowCaster *)this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
  v2 = this[12];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[14] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[12] = 0LL;
    this[13] = 0LL;
    this[14] = 0LL;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>(
    this + 10,
    this + 10,
    *((_QWORD *)this[10] + 1));
  std::_Deallocate<16,0>(this[10], 88LL);
  CResource::~CResource((CResource *)this);
}
