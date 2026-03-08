/*
 * XREFs of ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x180234E80
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180233AFC (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180233C0C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z @ 0x180234280 (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x18023434C (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802345E8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x180234B60 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x180235210 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1802356F0 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x180235A70 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x180235C7C (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x180235DA0 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_back_internal@AEBQEAVCInteractionTracker@@@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAXAEBQEAVCInteractionTracker@@@Z @ 0x180232E5C (--$_Emplace_back_internal@AEBQEAVCInteractionTracker@@@-$deque@PEAVCInteractionTracker@@V-$alloc.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x18023360C (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@std@@_N@1@AEBQEAVCInteractionTracker@@@Z @ 0x180233668 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTrac.c)
 *     ??1?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAA@XZ @ 0x18023392C (--1-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAA@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180233A58 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 */

void __fastcall CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5)
{
  _QWORD *v5; // rdi
  _QWORD *v8; // r12
  int v9; // eax
  _QWORD *v10; // rax
  __int64 **v11; // r15
  __int64 **i; // rbx
  __int64 v13; // r10
  __int64 *v14; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+48h] [rbp-28h]
  unsigned __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  __int64 *v21; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF

  v22 = a2;
  v5 = (_QWORD *)a5;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v8 = (_QWORD *)(a1 + 72);
  if ( *std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
          (_QWORD *)(a1 + 72),
          &a5,
          (const unsigned __int8 *)&v22) == *(_QWORD *)(a1 + 80) )
  {
    std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::insert<0,0>(
      a4,
      (__int64)v15);
    if ( v5 )
      *v5 = v22;
  }
  else if ( a3 <= 7 )
  {
    v9 = 150;
    if ( _bittest(&v9, a3) )
    {
      v19 = 0LL;
      v20 = 0LL;
      v18 = 0LL;
      v10 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v10[1] = 0LL;
      v17 = v10;
      *v10 = &v17;
      std::deque<CInteractionTracker *>::_Emplace_back_internal<CInteractionTracker * const &>((__int64)&v17, &v22);
      while ( v20 )
      {
        a5 = *(_QWORD *)(*(_QWORD *)(v18 + 8 * ((*((_QWORD *)&v18 + 1) - 1LL) & (v19 >> 1))) + 8 * (v19 & 1));
        if ( --v20 )
          ++v19;
        else
          v19 = 0LL;
        std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
          v8,
          v15,
          (const unsigned __int8 *)&a5);
        v11 = *(__int64 ***)(v15[0] + 32LL);
        for ( i = (__int64 **)*v11; i != v11; i = (__int64 **)*i )
        {
          v13 = *a4;
          v14 = *(__int64 **)*a4;
          v21 = v14;
          while ( v14 != (__int64 *)v13 )
          {
            if ( (__int64 *)v14[4] == i[2] )
            {
              if ( v14 != (__int64 *)v13 )
                goto LABEL_23;
              break;
            }
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v21);
            v14 = v21;
          }
          if ( (a3 & (_DWORD)i[3]) == a3 || a3 == 7 )
            std::deque<CInteractionTracker *>::_Emplace_back_internal<CInteractionTracker * const &>(
              (__int64)&v17,
              (__int64 *)i + 2);
LABEL_23:
          ;
        }
        std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::insert<0,0>(
          a4,
          (__int64)v16);
        if ( v5 && (*(_BYTE *)(a5 + 541) & 1) != 0 )
          *v5 = a5;
      }
      std::deque<CInteractionTracker *>::~deque<CInteractionTracker *>((__int64)&v17);
    }
  }
}
