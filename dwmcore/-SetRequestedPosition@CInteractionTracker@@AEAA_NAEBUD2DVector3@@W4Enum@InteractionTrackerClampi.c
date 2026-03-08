/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180231B08
 * Callers:
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x1802306BC (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IN.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x18023073C (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18012F062 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18022E784 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18022E7B4 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x18022EA40 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ClampPositionAfterExpressionProcessing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180230A9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ClampPositionAfterExpressionProcessing@@@.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1802325C4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x180235A70 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180271C7C (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  char v5; // di
  int v6; // ecx
  int v7; // ebp
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct CResource *v12; // rdx
  int v13; // eax
  unsigned __int32 v14; // xmm0_4
  double v15; // xmm2_8
  __int64 v16; // rcx
  CInteractionTrackerBindingManager *v17; // rcx
  char v18; // cl
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  int v21; // [rsp+28h] [rbp-30h]

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 176);
  v7 = a3;
  if ( v6 )
  {
    v9 = v6 - 2;
    if ( !v9 )
      goto LABEL_12;
    if ( v9 != 1 )
      return v5;
    v10 = *(_QWORD *)(a1 + 352);
    v11 = *(_QWORD *)(a1 + 360);
    *(_BYTE *)(a1 + 541) &= ~2u;
    if ( (_DWORD)a4 && v11 )
    {
      if ( (_DWORD)a4 == 1 )
      {
        if ( v10 )
        {
          v12 = *(struct CResource **)(v10 + 16);
          if ( v12 )
          {
            *((_BYTE *)v12 + 216) &= ~1u;
            CResource::UnRegisterNotifierInternal((CResource *)a1, v12);
          }
          CInteractionTracker::ClearCustomAnimation((CInteractionTracker *)a1, 0);
        }
        *(_BYTE *)(a1 + 541) |= 2u;
      }
    }
    else
    {
LABEL_12:
      CInteractionTracker::TransitionToIdle((CInteractionTracker *)a1);
    }
  }
  v5 = 1;
  v13 = *((_DWORD *)a2 + 2);
  v20 = *a2;
  v21 = v13;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClampPositionAfterExpressionProcessing>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_ClampPositionAfterExpressionProcessing>::GetImpl'::`2'::impl,
        1u,
        a3,
        a4);
      *(_BYTE *)(a1 + 541) |= 8u;
    }
  }
  else
  {
    v14 = CInteractionTracker::ClampValueToBoundary(a1, 0LL, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a2)).m128_u32[0];
    *(_QWORD *)&v15 = *((unsigned int *)a2 + 1);
    LODWORD(v20) = v14;
    HIDWORD(v20) = CInteractionTracker::ClampValueToBoundary(v16, 1LL, v15).m128_u32[0];
    v21 = 0;
  }
  CInteractionTracker::SetPosition(a1, (__int64)&v20, 0);
  v17 = *(CInteractionTrackerBindingManager **)(a1 + 640);
  if ( v17 )
  {
    *(_BYTE *)(a1 + 541) |= 1u;
    CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
      v17,
      (struct CInteractionTracker *)a1,
      (const struct D2DVector3 *)&v20,
      1);
    CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)a1, 0);
  }
  InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)(a1 + 200));
  v18 = *(_BYTE *)(a1 + 541);
  if ( (v18 & 2) != 0 )
    *(_BYTE *)(a1 + 541) = v18 | 1;
  return v5;
}
