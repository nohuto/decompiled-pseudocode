/*
 * XREFs of ?_Check_max_size@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x180235F6C
 * Callers:
 *     ??$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1802331A8 (--$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Uma.c)
 *     ??$emplace@AEAPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@$$QEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x180233430 (--$emplace@AEAPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Umap_t.c)
 *     ??$emplace@AEBU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@1@@Z @ 0x180233528 (--$emplace@AEBU-$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@-$_H.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Check_max_size(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x7FFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
