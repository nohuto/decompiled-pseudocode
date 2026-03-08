/*
 * XREFs of ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1802710DC
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180263350 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180263A80 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18012E95E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180271E58 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__m128 __fastcall InteractionSourceManager::GetActiveManipulationVelocity(InteractionSourceManager *a1)
{
  __m128 v1; // xmm2
  InteractionSourceManager *v2; // rcx
  int v3; // r10d
  __int128 v5; // [rsp+A0h] [rbp-48h]

  v1 = 0LL;
  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    v5 = *(_OWORD *)((char *)InteractionSourceManager::TryGetActiveManipulation(v2) + 392);
    if ( v3 )
    {
      if ( v3 != 1 )
      {
        if ( v3 == 2 )
        {
          v1 = (__m128)HIDWORD(v5);
          v1.m128_f32[0] = *((float *)&v5 + 3) * 1000.0;
          return v1;
        }
        return _mm_xor_ps(v1, (__m128)_xmm);
      }
      v1 = (__m128)DWORD1(v5);
    }
    else
    {
      v1 = (__m128)(unsigned int)v5;
    }
    v1.m128_f32[0] = v1.m128_f32[0] * 1000.0;
    return _mm_xor_ps(v1, (__m128)_xmm);
  }
  return v1;
}
