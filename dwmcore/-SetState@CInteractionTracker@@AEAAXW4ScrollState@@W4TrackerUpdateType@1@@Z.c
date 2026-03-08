/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x180231D6C
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180232410 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1802325C4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18023265C (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802345E8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1802356F0 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x180235DA0 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18012E802 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180208614 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18022D7B0 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x180232A6C (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x180235DA0 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x180271578 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180271598 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180271664 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180271720 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 *v10; // r14
  unsigned int v11; // esi
  __int64 v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  int v16; // edi
  int v17; // edx
  float v18; // xmm3_4
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h]

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        InteractionSourceManager::OnInteractionTrackerTransitionToInContact(a1 + 200, *(unsigned int *)(a1 + 176));
        break;
      case 2:
        InteractionSourceManager::OnInteractionTrackerTransitionToInertia((InteractionSourceManager *)(a1 + 200));
        break;
      case 3:
        InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation((InteractionSourceManager *)(a1 + 200));
        break;
    }
  }
  else
  {
    InteractionSourceManager::OnInteractionTrackerTransitionToIdle(a1 + 200, *(unsigned int *)(a1 + 176));
  }
  if ( *(_DWORD *)(a1 + 176) != a2 )
  {
    if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v23 = a2;
      v22 = v8;
      v24 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_18037DA08,
        v7,
        v8,
        (__int64)&v24,
        (__int64)&v22,
        (__int64)&v23);
    }
    *(_DWORD *)(a1 + 176) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v10 = &v24;
      v24 = *(_QWORD *)(a1 + 336);
      v11 = 0;
      v25 = *(_QWORD *)(a1 + 344);
      v26 = *(_QWORD *)(a1 + 328);
      do
      {
        v12 = *v10;
        v22 = a2;
        v13 = *(_DWORD *)(v12 + 424);
        v14 = v13 + 1;
        if ( v13 + 1 >= v13 )
        {
          if ( v14 > *(_DWORD *)(v12 + 420) )
          {
            v15 = DynArrayImpl<0>::AddMultipleAndSet(v12 + 400, 4, 1, &v22);
            if ( v15 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v15, 0xC0u, 0LL);
          }
          else
          {
            v9 = *(unsigned int *)(v12 + 424);
            *(_DWORD *)(*(_QWORD *)(v12 + 400) + 4 * v9) = a2;
            *(_DWORD *)(v12 + 424) = v14;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        ++v11;
        ++v10;
      }
      while ( v11 < 3 );
    }
    if ( a2 )
    {
      v16 = a2 - 1;
      if ( !v16 )
      {
        v18 = *(float *)(a1 + 136);
        v17 = 1;
        *(_DWORD *)(a1 + 188) = 0;
        *(float *)(a1 + 528) = v18;
LABEL_34:
        v20 = *(_DWORD *)(a1 + 88);
        v24 = *(_QWORD *)(a1 + 80);
        LODWORD(v25) = v20;
        CInteractionTracker::AddPendingStateChange(a1, v17, &v24, v18);
LABEL_35:
        CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
        goto LABEL_36;
      }
      if ( v16 != 2 || (*(_BYTE *)(a1 + 540) & 0x40) != 0 )
        goto LABEL_35;
      v17 = 3;
    }
    else
    {
      if ( *(char *)(a1 + 540) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 656LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 656LL));
        if ( (*(int (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v19 + 152LL))(
               v19,
               CInteractionTracker::s_OnIdleAtFrameBegin,
               a1,
               4LL) < 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        else
          *(_BYTE *)(a1 + 540) |= 0x80u;
      }
      v17 = 0;
    }
    v18 = *(float *)(a1 + 136);
    goto LABEL_34;
  }
LABEL_36:
  v21 = *(_QWORD *)(a1 + 640);
  if ( v21 )
  {
    if ( !a3 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v21, a1, *(unsigned int *)(a1 + 176));
  }
}
