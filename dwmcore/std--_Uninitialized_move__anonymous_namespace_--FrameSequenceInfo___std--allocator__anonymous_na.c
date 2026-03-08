/*
 * XREFs of std::_Uninitialized_move__anonymous_namespace_::FrameSequenceInfo___std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1801CA408
 * Callers:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800F5240 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 * Callees:
 *     std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800374D0 (std--_Destroy_range_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x1801CA468 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 */

__int64 __fastcall std::_Uninitialized_move__anonymous_namespace_::FrameSequenceInfo___std::allocator__anonymous_namespace_::FrameSequenceInfo___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 480LL )
  {
    anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(a3, i);
    a3 += 480LL;
  }
  std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(a3, a3);
  return a3;
}
