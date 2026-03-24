/*
 * XREFs of ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CE908
 * Callers:
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801CC180 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1801CF790 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1801CFE14 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CC018 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801CC53C (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801CD68C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801CDF9C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801CF4B8 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(
        int a1,
        __int64 a2,
        int a3,
        char a4)
{
  float v8; // xmm6_4
  _QWORD *v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rax
  __int64 *v15; // rbx
  int v16; // xmm6_4
  __int64 *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rax
  __int64 *v21; // rbx
  int v22; // xmm6_4
  __int64 *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 *v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v27; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h]
  __int64 *v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-28h] BYREF
  int v32; // [rsp+60h] [rbp-20h]

  if ( (a4 & 4) != 0 )
  {
    v8 = *(float *)(a2 + 128);
    v30 = 0LL;
    v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v9 = v9;
    v9[1] = v9;
    v9[2] = v9;
    *((_WORD *)v9 + 12) = 257;
    v29 = v9;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 4, (unsigned int)&v29, 0);
    v10 = v29;
    v11 = (__int64 *)*v29;
    v26 = (__int64 *)*v29;
    while ( v11 != v10 )
    {
      v12 = v11[4];
      if ( v12 != a2 )
        CInteractionTracker::SetScale(v12, v8, 1);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v26);
      v11 = v26;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v29,
      (__int64)&v29,
      v29[1]);
    std::_Deallocate<16,0>(v29, 0x28uLL);
  }
  v13 = *(_DWORD *)(a2 + 80);
  v29 = *(__int64 **)(a2 + 72);
  LODWORD(v30) = v13;
  if ( (a4 & 1) != 0 )
  {
    v28 = 0LL;
    v14 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v14 = v14;
    v14[1] = v14;
    v14[2] = v14;
    *((_WORD *)v14 + 12) = 257;
    v27 = v14;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 1, (unsigned int)&v27, 0);
    v15 = v27;
    v16 = (int)v29;
    v17 = (__int64 *)*v27;
    v26 = (__int64 *)*v27;
    while ( v17 != v15 )
    {
      v18 = v17[4];
      if ( v18 != a2 )
      {
        v31 = *(_QWORD *)(v18 + 72);
        v19 = *(_DWORD *)(v18 + 80);
        LODWORD(v31) = v16;
        v32 = v19;
        CInteractionTracker::SetPosition(v18, (__int64)&v31, 1);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v26);
      v17 = v26;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v27,
      (__int64)&v27,
      v27[1]);
    std::_Deallocate<16,0>(v27, 0x28uLL);
  }
  if ( (a4 & 2) != 0 )
  {
    v28 = 0LL;
    v20 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v20 = v20;
    v20[1] = v20;
    v20[2] = v20;
    *((_WORD *)v20 + 12) = 257;
    v27 = v20;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 2, (unsigned int)&v27, 0);
    v21 = v27;
    v22 = HIDWORD(v29);
    v23 = (__int64 *)*v27;
    v26 = (__int64 *)*v27;
    while ( v23 != v21 )
    {
      v24 = v23[4];
      if ( v24 != a2 )
      {
        v29 = *(__int64 **)(v24 + 72);
        v25 = *(_DWORD *)(v24 + 80);
        HIDWORD(v29) = v22;
        LODWORD(v30) = v25;
        CInteractionTracker::SetPosition(v24, (__int64)&v29, 1);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v26);
      v23 = v26;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v27,
      (__int64)&v27,
      v27[1]);
    std::_Deallocate<16,0>(v27, 0x28uLL);
  }
}
