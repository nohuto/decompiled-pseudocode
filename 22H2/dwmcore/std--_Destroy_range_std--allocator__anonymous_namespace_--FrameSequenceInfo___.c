/*
 * XREFs of std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800375C0
 * Callers:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800F5E80 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x1800F5FD0 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_1800F5FD0.c)
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18010B7C4 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     std::_Uninitialized_move__anonymous_namespace_::FrameSequenceInfo___std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1801CD638 (std--_Uninitialized_move__anonymous_namespace_--FrameSequenceInfo___std--allocator__anonymous_na.c)
 * Callees:
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180037600 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 */

__int64 __fastcall std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v3);
      v3 += 480LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
