/*
 * XREFs of ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180271664
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x180231D6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180130A1A (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?CreateDCompStats@CInteraction@@QEAAPEAVIDCompositionInteractionStats@@XZ @ 0x180270E24 (-CreateDCompStats@CInteraction@@QEAAPEAVIDCompositionInteractionStats@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180271E58 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

CInteraction *__fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInContact(
        InteractionSourceManager *a1,
        int a2)
{
  CInteraction *result; // rax
  __int64 v5; // r9
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  result = InteractionSourceManager::GetActiveInteraction(a1);
  if ( !a2 && result )
  {
    result = CInteraction::CreateDCompStats(result);
    if ( result )
    {
      v9 = 0LL;
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      *(_QWORD *)&v6 = InteractionSourceManager::TryGetActiveManipulation(a1);
      HIDWORD(v6) = 2;
      LODWORD(v7) = 2;
      return (CInteraction *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v5 + 200LL))(
                               v5,
                               *((_QWORD *)g_pComposition + 62),
                               &v6);
    }
  }
  return result;
}
