/*
 * XREFs of ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@std@@_N@1@AEBQEAVCInteractionTracker@@@Z @ 0x180233668
 * Callers:
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x180234E80 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 * Callees:
 *     ??$_Emplace@AEBQEAVCInteractionTracker@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@_N@1@AEBQEAVCInteractionTracker@@@Z @ 0x180232D84 (--$_Emplace@AEBQEAVCInteractionTracker@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$les.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::insert<0,0>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Emplace<CInteractionTracker * const &>(
    a1,
    (__int64)&v4);
  *(_QWORD *)a2 = v4;
  *(_BYTE *)(a2 + 8) = v5;
  return a2;
}
