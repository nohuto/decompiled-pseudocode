/*
 * XREFs of std::_Uninitialized_move_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn______std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______ @ 0x1800F6C50
 * Callers:
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x1800F6B50 (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_de.c)
 * Callees:
 *     std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______ @ 0x1800F6D04 (std--_Destroy_range_std--allocator_std--unique_ptr__anonymous_namespace_--FramesReport--Resource.c)
 */

_QWORD *__fastcall std::_Uninitialized_move_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn______std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______(
    a3,
    a3);
  return a3;
}
