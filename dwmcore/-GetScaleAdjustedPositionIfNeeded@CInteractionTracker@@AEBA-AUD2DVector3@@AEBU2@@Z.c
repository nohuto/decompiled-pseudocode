/*
 * XREFs of ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x18022F6D0
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18022F410 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180262F98 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTracker::GetScaleAdjustedPositionIfNeeded(__int64 a1, __int64 a2, __int64 a3)
{
  CScrollScaleKeyframeAnimation *v4; // rcx
  int v6; // eax
  float LastKeyframeValueForScale; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm1_4

  v4 = *(CScrollScaleKeyframeAnimation **)(a1 + 472);
  v6 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)a2 = *(_QWORD *)a3;
  *(_DWORD *)(a2 + 8) = v6;
  if ( v4 )
  {
    LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(v4);
    v9 = *(float *)(a1 + 136);
    if ( LastKeyframeValueForScale != v9 )
    {
      v10 = *(float *)(a1 + 152);
      v11 = LastKeyframeValueForScale / v9;
      v12 = *(float *)(a3 + 4);
      *(float *)a2 = (float)((float)(*(float *)a3 - *(float *)(a1 + 148)) * v11) + *(float *)(a1 + 148);
      *(float *)(a2 + 4) = (float)((float)(v12 - v10) * v11) + v10;
    }
  }
  return a2;
}
