void __fastcall std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy(
        __int64 a1)
{
  if ( *(char *)(a1 + 24) != -1 && (unsigned int)*(char *)(a1 + 24) >= 2 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
      a1,
      a1,
      *(_QWORD *)(*(_QWORD *)a1 + 8LL));
    std::_Deallocate<16,0>(*(void **)a1, 0x30uLL);
  }
}
