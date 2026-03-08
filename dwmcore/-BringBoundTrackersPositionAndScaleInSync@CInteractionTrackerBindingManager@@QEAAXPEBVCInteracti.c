/*
 * XREFs of ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x18023434C
 * Callers:
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180231950 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x180235070 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1802355DC (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180036984 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18012F062 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x18012F110 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x180233024 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180233A58 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x180234E80 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(
        int a1,
        __int64 a2,
        int a3,
        char a4)
{
  float v8; // xmm6_4
  SIZE_T size_of; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  SIZE_T v14; // rax
  _QWORD *v15; // rax
  int v16; // xmm6_4
  __int64 *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  SIZE_T v20; // rax
  _QWORD *v21; // rax
  int v22; // xmm6_4
  __int64 *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 *v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 **v27; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h]
  __int64 **v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-28h] BYREF
  int v32; // [rsp+60h] [rbp-20h]

  if ( (a4 & 4) != 0 )
  {
    v8 = *(float *)(a2 + 136);
    v30 = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v10 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *v10 = v10;
    v10[1] = v10;
    v10[2] = v10;
    *((_WORD *)v10 + 12) = 257;
    v29 = (__int64 **)v10;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 4, (unsigned int)&v29, 0LL);
    v11 = *v29;
    v26 = *v29;
    while ( !*((_BYTE *)v11 + 25) )
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
      (__int64)v29[1]);
    std::_Deallocate<16,0>(v29, 0x28uLL);
  }
  v13 = *(_DWORD *)(a2 + 88);
  v29 = *(__int64 ***)(a2 + 80);
  LODWORD(v30) = v13;
  if ( (a4 & 1) != 0 )
  {
    v28 = 0LL;
    v14 = std::_Get_size_of_n<40>(1uLL);
    v15 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
    *v15 = v15;
    v15[1] = v15;
    v15[2] = v15;
    *((_WORD *)v15 + 12) = 257;
    v27 = (__int64 **)v15;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 1, (unsigned int)&v27, 0LL);
    v16 = (int)v29;
    v17 = *v27;
    v26 = *v27;
    while ( !*((_BYTE *)v17 + 25) )
    {
      v18 = v17[4];
      if ( v18 != a2 )
      {
        v31 = *(_QWORD *)(v18 + 80);
        v19 = *(_DWORD *)(v18 + 88);
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
      (__int64)v27[1]);
    std::_Deallocate<16,0>(v27, 0x28uLL);
  }
  if ( (a4 & 2) != 0 )
  {
    v28 = 0LL;
    v20 = std::_Get_size_of_n<40>(1uLL);
    v21 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v20);
    *v21 = v21;
    v21[1] = v21;
    v21[2] = v21;
    *((_WORD *)v21 + 12) = 257;
    v27 = (__int64 **)v21;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a3, 2, (unsigned int)&v27, 0LL);
    v22 = HIDWORD(v29);
    v23 = *v27;
    v26 = *v27;
    while ( !*((_BYTE *)v23 + 25) )
    {
      v24 = v23[4];
      if ( v24 != a2 )
      {
        v29 = *(__int64 ***)(v24 + 80);
        v25 = *(_DWORD *)(v24 + 88);
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
      (__int64)v27[1]);
    std::_Deallocate<16,0>(v27, 0x28uLL);
  }
}
