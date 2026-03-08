/*
 * XREFs of ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180271598
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x180231D6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18012E95E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x180209688 (-ReportInertiaStop@CInteraction@@QEAAJXZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x18020B03C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ??$_Find@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@1@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180270404 (--$_Find@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Umap_traits.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180270DAC (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToIdle(InteractionSourceManager *a1)
{
  __int64 v2; // rcx
  int v3; // r10d
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  CManipulation **v6; // rbx
  __int64 v7; // rcx
  __int64 appended; // rax
  __int64 v9; // rax
  CManipulation *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    if ( v3 == 2 )
    {
      v4 = *(_QWORD *)(v2 + 104);
      v5 = v4 + *(_QWORD *)(v2 + 112);
      while ( v4 != v5 )
      {
        v6 = (CManipulation **)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 8 * ((*((_QWORD *)a1 + 12) - 1LL) & (v4 >> 1)))
                              + 8 * (v4 & 1));
        CManipulation::SetCaptureState_RenderThread(*v6);
        v10 = *v6;
        appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)&v10, 8uLL);
        v9 = std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Find<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
               (_QWORD *)a1 + 2,
               v6,
               appended);
        CInteraction::ReportInertiaStop(*(CInteraction **)(*(_QWORD *)(v9 + 24) + 40LL));
        ++v4;
      }
    }
    InteractionSourceManager::ClearActiveManipulations(a1);
  }
  InteractionSourceManager::ReconfigureAllManipulations(a1);
}
