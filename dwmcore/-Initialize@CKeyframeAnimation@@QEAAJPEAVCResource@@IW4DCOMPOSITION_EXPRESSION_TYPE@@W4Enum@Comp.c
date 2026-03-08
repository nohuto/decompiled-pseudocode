/*
 * XREFs of ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x180236828
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18020D3F0 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18022E820 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x180240978 (-AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180055BE4 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800972E4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x180097DFC (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18009B084 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18009B288 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18009B43C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800FD5BC (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ??$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z @ 0x1802363E4 (--$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Initialize(
        __int64 a1,
        struct CResource *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        float a10,
        __int64 a11,
        float a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 **v15; // r14
  int updated; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi
  SIZE_T CacheSizeForType; // rdi
  void *v21; // rax
  int v22; // r9d
  int v23; // eax
  __int64 v24; // rcx
  void **v25; // rsi
  __int64 *v26; // rbx
  unsigned int v28; // [rsp+20h] [rbp-28h]

  v15 = (__int64 **)(a1 + 392);
  updated = CBaseExpression::SetTarget(a1, 0, a2, a3, a4, 0, 0, 0LL);
  v19 = updated;
  if ( updated < 0 )
  {
    v28 = 79;
LABEL_13:
    v22 = updated;
    goto LABEL_14;
  }
  CacheSizeForType = (unsigned int)GetCacheSizeForType(*(_DWORD *)(a1 + 152));
  v21 = DefaultHeap::Alloc(CacheSizeForType);
  *(_QWORD *)(a1 + 384) = v21;
  if ( !v21 )
  {
    v19 = -2147024882;
    v22 = -2147024882;
    v28 = 83;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v22, v28, 0LL);
    goto LABEL_15;
  }
  memset_0(v21, 0, CacheSizeForType);
  *(_DWORD *)(a1 + 368) = 2;
  v23 = CKeyframeAnimation::SetIterationInfo(a1, a10, 0, a12, 0);
  v19 = v23;
  if ( v23 >= 0 )
  {
    updated = CKeyframeAnimation::SetKeyFrameData(a1, 0, 0, a15);
    v19 = updated;
    if ( updated < 0 )
    {
      v28 = 97;
    }
    else
    {
      updated = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
      v19 = updated;
      if ( updated < 0 )
      {
        v28 = 99;
      }
      else
      {
        updated = CKeyframeAnimation::UpdatePlaybackState(a1, 1u, 1, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL));
        v19 = updated;
        if ( updated >= 0 )
          return v19;
        v28 = 104;
      }
    }
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x5Cu, 0LL);
LABEL_15:
  v25 = (void **)(a1 + 384);
  v26 = *v15;
  *v15 = 0LL;
  if ( v26 )
  {
    KeyframeSequence::RemoveAllKeyFrames((KeyframeSequence *)v26);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v26 + 8);
    operator delete(v26);
  }
  SAFE_DELETE_ARRAY<unsigned char>(v25);
  return v19;
}
