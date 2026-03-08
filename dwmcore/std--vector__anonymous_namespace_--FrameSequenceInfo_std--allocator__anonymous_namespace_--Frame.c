/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800F5240
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180035F64 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 * Callees:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180036504 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800374D0 (std--_Destroy_range_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x1800F5390 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_1800F5390.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     std::_Uninitialized_move__anonymous_namespace_::FrameSequenceInfo___std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1801CA408 (std--_Uninitialized_move__anonymous_namespace_--FrameSequenceInfo___std--allocator__anonymous_na.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const___(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi

  v6 = (a2 - *a1) / 480;
  v7 = 0xEEEEEEEEEEEEEEEFuLL * ((a1[1] - *a1) >> 5);
  if ( v7 == 0x88888888888888LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xEEEEEEEEEEEEEEEFuLL * ((a1[2] - *a1) >> 5);
  v10 = v9 >> 1;
  if ( v9 > 0x88888888888888LL - (v9 >> 1) )
  {
    v11 = 0x88888888888888LL;
  }
  else
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x88888888888888LL )
      std::_Throw_bad_array_new_length();
  }
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(480 * v11);
  v13 = v12 + 480 * v6;
  anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v13, a3);
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v16 = v12;
    while ( v15 != v14 )
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v16, v15);
      v16 += 480LL;
      v15 += 480LL;
    }
    std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v16, v16);
  }
  else
  {
    std::_Uninitialized_move__anonymous_namespace_::FrameSequenceInfo___std::allocator__anonymous_namespace_::FrameSequenceInfo___(
      *a1,
      a2,
      v12);
    std::_Uninitialized_move__anonymous_namespace_::FrameSequenceInfo___std::allocator__anonymous_namespace_::FrameSequenceInfo___(
      a2,
      a1[1],
      v13 + 480);
  }
  std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
    a1,
    v12,
    v8,
    v11);
  return v13;
}
