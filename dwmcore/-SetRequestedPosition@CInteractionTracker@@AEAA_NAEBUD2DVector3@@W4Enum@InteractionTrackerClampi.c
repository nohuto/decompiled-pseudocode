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
