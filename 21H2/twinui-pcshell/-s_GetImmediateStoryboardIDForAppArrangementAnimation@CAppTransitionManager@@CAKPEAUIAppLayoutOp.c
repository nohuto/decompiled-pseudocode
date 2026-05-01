/*
 * XREFs of ?s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOperation@@@Z @ 0x180436B7C
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180434520 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::s_GetImmediateStoryboardIDForAppArrangementAnimation(
        struct IAppLayoutOperation *a1)
{
  unsigned int v2; // ebx

  v2 = 67;
  if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a1 + 80LL))(a1) & 0x20000) != 0 )
  {
    return 69;
  }
  else if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a1 + 80LL))(a1) & 0x1000000) != 0 )
  {
    return 34;
  }
  return v2;
}
