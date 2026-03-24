/*
 * XREFs of ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x18021307C
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180205410 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180205B50 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801C9B34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180213E24 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__m128 __fastcall InteractionSourceManager::GetActiveManipulationVelocity(InteractionSourceManager *a1)
{
  __m128 v2; // xmm2
  int v3; // r10d
  __int128 v5; // [rsp+A0h] [rbp-48h]

  v2 = 0LL;
  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    v5 = *((_OWORD *)InteractionSourceManager::TryGetActiveManipulation(a1) + 24);
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v2 = (__m128)DWORD1(v5);
      }
      else if ( v3 == 2 )
      {
        v2 = (__m128)HIDWORD(v5);
      }
    }
    else
    {
      v2 = (__m128)(unsigned int)v5;
    }
    v2.m128_f32[0] = v2.m128_f32[0] * 1000.0;
    if ( v3 != 2 )
      return _mm_xor_ps(v2, (__m128)_xmm);
  }
  return v2;
}
