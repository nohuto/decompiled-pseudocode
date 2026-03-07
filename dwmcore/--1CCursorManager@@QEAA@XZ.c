void __fastcall CCursorManager::~CCursorManager(struct _RTL_CRITICAL_SECTION *this)
{
  void **p_DebugInfo; // rbx

  p_DebugInfo = (void **)&this[1].DebugInfo;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (__int64)&this[1],
    (__int64)&this[1],
    (__int64)this[1].DebugInfo->CriticalSection);
  std::_Deallocate<16,0>(*p_DebugInfo, 0x30uLL);
  DeleteCriticalSection(this);
}
