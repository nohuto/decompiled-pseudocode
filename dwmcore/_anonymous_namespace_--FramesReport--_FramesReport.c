void __fastcall anonymous_namespace_::FramesReport::_FramesReport(__int64 a1)
{
  void **v1; // rbx
  void **v3; // rcx
  __int64 v4; // rcx

  v1 = (void **)(a1 + 160);
  std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Erase_tree<std::allocator<std::_Tree_node<std::wstring,void *>>>(
    a1 + 160,
    a1 + 160,
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x40uLL);
  std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______(
    a1 + 144,
    a1 + 144,
    *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL));
  std::_Deallocate<16,0>(*(void **)(a1 + 144), 0x38uLL);
  v3 = *(void ***)(a1 + 112);
  if ( v3 )
  {
    std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______(
      v3,
      *(void ***)(a1 + 120));
    std::_Deallocate<16,0>(
      *(void **)(a1 + 112),
      (*(_QWORD *)(a1 + 128) - *(_QWORD *)(a1 + 112)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v4, *(_QWORD *)(a1 + 24));
    std::_Deallocate<16,0>(*(void **)(a1 + 16), 32 * ((__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) >> 5));
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
