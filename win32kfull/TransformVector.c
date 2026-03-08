/*
 * XREFs of TransformVector @ 0x1C01E7DD8
 * Callers:
 *     GetNewMonitor @ 0x1C00AB0FC (GetNewMonitor.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C01442D8 (TransformVectorWithInputTargetPrecedence.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01BAF3C (PhysicalToLogicalPointForWindow.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01E4BA8 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C01E58E0 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     FixedPointSubPixel @ 0x1C014511E (FixedPointSubPixel.c)
 */

__int64 __fastcall TransformVector(float *a1, int *a2, int *a3, int *a4, int a5)
{
  float *v5; // r10
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  __int64 result; // rax

  v5 = a1;
  if ( a5 )
  {
    v6 = 0.0;
    if ( a4 )
      v7 = FixedPointSubPixel(*a4);
    else
      v7 = 0.0;
    *a2 = (int)(float)((float)((float)((float)*a2 + v7) - v5[12]) / *v5);
    if ( a4 )
      v6 = FixedPointSubPixel(a4[1]);
    v8 = (float)((float)((float)*a3 + v6) - v5[13]) / v5[5];
  }
  else
  {
    *a2 = (int)(float)((float)((float)*a2 * *a1) + a1[12]);
    v8 = (float)((float)*a3 * a1[5]) + a1[13];
  }
  result = (unsigned int)(int)v8;
  *a3 = result;
  return result;
}
