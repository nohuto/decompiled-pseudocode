/*
 * XREFs of ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x18020A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x18020BE3C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x18020C3E4 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::CompleteManipulation(__int64 a1)
{
  BOOL v1; // edx
  CManipulation *v2; // rcx
  __int64 v3; // r8
  const struct D2DVector3 *v4; // r9
  int v5; // r10d
  int v7; // [rsp+28h] [rbp-10h]

  CManipulation::_UpdateCaptureState((CManipulation *)(a1 - 72), 0);
  if ( *(_DWORD *)(v3 + 164) != v5 )
  {
    *(_QWORD *)(v3 + 20) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v3 + 28) = v1 & v7;
    *(_QWORD *)(v3 + 44) = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
    *(_DWORD *)(v3 + 164) = v5;
    *(_DWORD *)(v3 + 52) = 1065353216;
    LODWORD(v4) = CManipulation::_SendUpdateToRenderThread(v2, v1, 0LL, v4);
  }
  return (unsigned int)v4;
}
