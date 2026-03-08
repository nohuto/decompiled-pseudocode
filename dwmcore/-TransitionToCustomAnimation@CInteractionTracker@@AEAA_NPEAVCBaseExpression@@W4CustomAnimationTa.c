/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180232410
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180231420 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009995C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1765183806@@@details@wil@@QEAA_NXZ @ 0x1801118A4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1765183806@@@details@wil@@QEAA_NX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18022DD1C (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18022EAB4 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18022EBE0 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x180230A50 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@I.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x180231D6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x180232290 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(CInteractionTracker *a1, struct CResource *a2, int a3)
{
  __int64 v3; // r14
  char v4; // bp
  int v7; // ecx
  int v8; // ecx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // esi
  struct CWeakResourceReference *v13; // rcx
  int v14; // eax
  int v15; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CWeakResourceReference *v17; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v4 = 0;
  if ( (unsigned __int64)a3 >= 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  if ( !a2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v7 = *((_DWORD *)a1 + 44);
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        *((_BYTE *)a2 + 216) &= ~1u;
        return v4;
      }
      CInteractionTracker::StopCustomAnimation(a1, a3, 0);
    }
    else
    {
      CInteractionTracker::DestroyInteractionAnimations(a1);
      CInteractionTracker::DestroyDefaultAnimations(a1, 0);
    }
  }
  v4 = 1;
  CInteractionTracker::BoostCompositorClock(a1, 1);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_1765183806>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_1765183806>::GetImpl'::`2'::impl) )
    CInteractionTracker::StopCustomAnimation(a1, v3, 1);
  v17 = 0LL;
  v10 = CWeakResourceReference::Get(a2, &v17);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x94u, 0LL);
    v13 = v17;
  }
  else
  {
    v13 = 0LL;
    *((_QWORD *)a1 + v3 + 44) = v17;
  }
  if ( v13 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v13 + 8LL))(v13);
  if ( v12 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
  v14 = CResource::RegisterNotifier(a1, a2);
  if ( v14 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v14, retaddr);
  CInteractionTracker::SetState((__int64)a1, 3, 0);
  v15 = CInteractionTracker::RegisterIndirectTargetsForBoundTrackers(
          (__int64)a1,
          (__int64)a2,
          (unsigned int)((_DWORD)v3 != 0) + 1);
  if ( v15 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
  return v4;
}
