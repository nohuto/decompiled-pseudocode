/*
 * XREFs of ?TransformRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C0216DDC
 * Callers:
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1C02159E0 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::TransformRect(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float v4; // xmm4_4
  float v5; // xmm5_4
  float left; // xmm1_4
  float v7; // xmm6_4
  float top; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float bottom; // xmm0_4
  LONG v15; // r10d
  float right; // xmm1_4
  struct tagRECT *result; // rax

  v4 = *((float *)a4 + 1);
  v5 = *(float *)a4;
  left = (float)a3->left;
  v7 = *((float *)a4 + 3);
  top = (float)a3->top;
  v9 = *((float *)a4 + 5);
  v10 = *((float *)a4 + 2);
  v11 = *((float *)a4 + 4);
  v12 = (float)(left * v4) + (float)(top * v7);
  v13 = (float)(left * *(float *)a4) + (float)(top * v10);
  bottom = (float)a3->bottom;
  retstr->top = (int)(float)(v12 + v9);
  v15 = (int)(float)(v13 + v11);
  right = (float)a3->right;
  retstr->left = v15;
  retstr->bottom = (int)(float)((float)((float)(right * v4) + (float)(bottom * v7)) + v9);
  result = retstr;
  retstr->right = (int)(float)((float)((float)(right * v5) + (float)(bottom * v10)) + v11);
  return result;
}
