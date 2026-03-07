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
