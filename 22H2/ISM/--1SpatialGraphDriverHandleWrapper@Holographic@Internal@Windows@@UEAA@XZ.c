/*
 * XREFs of ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180158048
 * Callers:
 *     ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x180159050 (--_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AB64 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x180151CAC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@Spat.c)
 *     ??1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x180157A7C (--1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ.c)
 *     ?WaitForCompletion@ChainedThreadpoolWorker@ThreadHelpers@@QEAAXXZ @ 0x180166CF0 (-WaitForCompletion@ChainedThreadpoolWorker@ThreadHelpers@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::~SpatialGraphDriverHandleWrapper(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this)
{
  RTL_SRWLOCK *v2; // rbx
  void *v3; // rbx

  v2 = (RTL_SRWLOCK *)((char *)this + 264);
  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`vftable';
  ThreadHelpers::ChainedThreadpoolWorker::WaitForCompletion((Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)((char *)this + 264));
  ThreadHelpers::ChainedThreadpoolWorker::~ChainedThreadpoolWorker(v2);
  v3 = (void *)*((_QWORD *)this + 30);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
      *((__int64 **)this + 30),
      *((__int64 **)this + 31));
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 32) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>,void *>>>(
    (__int64)this + 216,
    (__int64)this + 216,
    *(_QWORD *)(*((_QWORD *)this + 27) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 27), (const struct std::nothrow_t *)0x38);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(this);
}
