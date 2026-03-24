/*
 * XREFs of ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801D05CC
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CC6FC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801C8E24 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CC6FC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801CD68C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801CDF9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801CF4B8 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerState(__int64 a1, CInteractionTracker *a2, int a3)
{
  char v3; // al
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_BYTE *)a2 + 533);
  if ( (v3 & 1) == 0 )
    *((_BYTE *)a2 + 533) = v3 | 1;
  v12[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  v12[0] = (__int64 *)v7;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, (__int64)a2, 7u, v12, 0LL);
  v9 = v12[0];
  v10 = (__int64 *)*v12[0];
  v13 = (__int64 *)*v12[0];
  while ( v10 != v9 )
  {
    v11 = v10[4];
    if ( (CInteractionTracker *)v11 != a2 )
    {
      if ( (*(_BYTE *)(v11 + 533) & 1) != 0 )
        CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)v10[4], a3 == 3);
      CInteractionTracker::SetState(v11, a3, 1LL, v8);
      if ( *(_DWORD *)(v11 + 496) )
        *(_BYTE *)(*(_QWORD *)(v11 + 472) + 24LL * (unsigned int)(*(_DWORD *)(v11 + 496) - 1) + 20) = 1;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v13);
    v10 = v13;
  }
  if ( !a3 )
    CInteractionTracker::DemoteToBoundTracker(a2, 0);
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v12,
    (__int64)v12,
    v12[0][1]);
  std::_Deallocate<16,0>(v12[0], 0x28uLL);
}
