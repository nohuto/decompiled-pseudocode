/*
 * XREFs of ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEBA_NXZ @ 0x180235FA0
 * Callers:
 *     ??$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1802331A8 (--$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Uma.c)
 *     ??$emplace@AEAPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@$$QEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x180233430 (--$emplace@AEAPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Umap_t.c)
 *     ??$emplace@AEBU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@1@@Z @ 0x180233528 (--$emplace@AEBU-$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@-$_H.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Check_rehash_required_1(
        __int64 a1)
{
  __int64 v2; // rdx
  float v3; // xmm0_4
  __int64 v4; // rcx
  float v5; // xmm1_4

  v2 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v2 < 0 )
    v3 = (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1))
       + (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1));
  else
    v3 = (float)(int)v2;
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 < 0 )
    v5 = (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1))
       + (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1));
  else
    v5 = (float)(int)v4;
  return (float)(v3 / v5) > *(float *)a1;
}
