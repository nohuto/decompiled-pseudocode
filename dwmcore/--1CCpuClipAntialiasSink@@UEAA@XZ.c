void __fastcall CCpuClipAntialiasSink::~CCpuClipAntialiasSink(CCpuClipAntialiasSink *this)
{
  `vector destructor iterator'(
    (char *)this + 40,
    8uLL,
    2uLL,
    (void (*)(void *))std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 4);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (char *)this + 16,
    (char *)this + 16,
    *(_QWORD *)(*((_QWORD *)this + 2) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 2), 0x30uLL);
}
