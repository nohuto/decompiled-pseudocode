/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180233AFC
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x18022D608 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180036984 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x18022D608 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18022F17C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x180233024 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180233A58 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x180234E80 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::AddOrUpdatePendingInertiaStateChangeForBoundTrackers(
        int a1,
        __int64 a2,
        unsigned int a3)
{
  SIZE_T size_of; // rax
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  float CurrentValue; // xmm0_4
  void *v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a2 + 541) & 1) != 0 )
  {
    v11[1] = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *v7 = v7;
    v7[1] = v7;
    v7[2] = v7;
    *((_WORD *)v7 + 12) = 257;
    v11[0] = v7;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7, (unsigned int)v11, 0LL);
    v8 = *(__int64 **)v11[0];
    v12 = *(__int64 **)v11[0];
    while ( !*((_BYTE *)v8 + 25) )
    {
      v9 = v8[4];
      if ( v9 != a2 )
      {
        CurrentValue = CInteractionTracker::GetCurrentValue(v8[4], a3);
        CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v9, a3, CurrentValue, 1);
        *(_BYTE *)(*(_QWORD *)(v9 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v9 + 504) - 1) + 20) = 1;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v12);
      v8 = v12;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)v11,
      (__int64)v11,
      *((_QWORD *)v11[0] + 1));
    std::_Deallocate<16,0>(v11[0], 0x28uLL);
  }
}
