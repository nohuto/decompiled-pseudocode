/*
 * XREFs of ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180261E20
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18026152C (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180130A3E (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x18022D608 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026191C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

void __fastcall CScrollAnimation::StartInertia(CScrollAnimation *this, float a2, char a3)
{
  struct CInteractionTracker *InteractionTracker; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rdx
  struct CInteractionTracker *v10; // rax
  struct CChainingHelper *ActiveChainingHelper; // rax
  struct CChainingHelper *v12; // r8
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  __int64 v15; // rax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v7 = *(_DWORD *)(v6 + 340);
  *(_QWORD *)(v6 + 360) = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 608LL);
  *(_DWORD *)(v6 + 336) = 2;
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange((__int64)InteractionTracker, v7, a2, 0);
  LOBYTE(v8) = a3;
  (*(void (__fastcall **)(CScrollAnimation *, __int64, __int64))(*(_QWORD *)this + 344LL))(this, v9, v8);
  v10 = CScrollAnimation::GetInteractionTracker(this);
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((struct CInteractionTracker *)((char *)v10 + 200));
  v12 = ActiveChainingHelper;
  if ( !a3 && ActiveChainingHelper )
  {
    v13 = 3LL * *((int *)this + 85);
    *((_BYTE *)ActiveChainingHelper + 4 * v13) &= 0xFCu;
    v14 = (char *)ActiveChainingHelper + 36;
    *((_DWORD *)ActiveChainingHelper + v13 + 1) = 0;
    *((_BYTE *)ActiveChainingHelper + 36) |= 1u;
    *((_BYTE *)ActiveChainingHelper + 4 * v13) &= 0xFAu;
    *((_DWORD *)ActiveChainingHelper + v13 + 2) = 0;
    v15 = 3LL;
    *v14 |= 2u;
    do
    {
      *(_BYTE *)v12 |= 4u;
      *((_DWORD *)v12 + 2) = -805306369;
      v12 = (struct CChainingHelper *)((char *)v12 + 12);
      *v14 |= 2u;
      --v15;
    }
    while ( v15 );
  }
  *((_BYTE *)this + 368) &= ~4u;
  *((_OWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
}
