/*
 * XREFs of ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0158220
 * Callers:
 *     ?InverseTransformRect@@YA?AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C015831C (-InverseTransformRect@@YA-AUtagRECT@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C01585A4 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C0158A04 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 *     ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C0206B68 (-TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFON.c)
 *     IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x1C0222C8C (IVForegroundSync--_anonymous_namespace_--ivSyncForegroundToContainer.c)
 *     _lambda_d5bddfc2fe24e4274cd124852b066150_::operator() @ 0x1C0223D88 (_lambda_d5bddfc2fe24e4274cd124852b066150_--operator().c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C0231448 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InverseTransformPoint(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  __int64 result; // rax

  v3 = a2[1];
  v4 = a3[7];
  *(_QWORD *)a1 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v5 = a3[3];
  v6 = (float)(v3 * v4) - a3[5];
  v7 = (float)(*a2 * v5) - *a3;
  v8 = (float)(*a2 * v4) - a3[4];
  v9 = (float)(v5 * v3) - a3[1];
  if ( (float)(v7 * v6) == (float)(v8 * v9) )
  {
    v10 = FLOAT_3_4028235e38;
    v11 = FLOAT_3_4028235e38;
  }
  else
  {
    v12 = (float)(v7 * v6) - (float)(v8 * v9);
    v13 = a3[15];
    v14 = (float)(v13 * *a2) - a3[12];
    v15 = (float)(v13 * v3) - a3[13];
    v16 = v14 * v9;
    v17 = v15 * v7;
    v11 = (float)((float)(v15 * v8) - (float)(v14 * v6)) / v12;
    v10 = (float)(v16 - v17) / v12;
  }
  *(float *)a1 = v11;
  result = a1;
  *(float *)(a1 + 4) = v10;
  return result;
}
