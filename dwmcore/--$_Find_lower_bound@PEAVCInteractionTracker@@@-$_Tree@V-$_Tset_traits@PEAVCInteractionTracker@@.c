/*
 * XREFs of ??$_Find_lower_bound@PEAVCInteractionTracker@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1802330D8
 * Callers:
 *     ??$_Emplace@AEBQEAVCInteractionTracker@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@_N@1@AEBQEAVCInteractionTracker@@@Z @ 0x180232D84 (--$_Emplace@AEBQEAVCInteractionTracker@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$les.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180233C0C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Find_lower_bound<CInteractionTracker *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
