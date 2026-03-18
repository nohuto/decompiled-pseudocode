/*
 * XREFs of ??1?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@QEAA@XZ @ 0x18023709C
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180237CC8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1802388F0 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x180238DD0 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x180236704 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 */

void __fastcall std::set<CInteractionTracker *>::~set<CInteractionTracker *>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
