/*
 * XREFs of ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800DFBC8
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B524 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B7F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800DF63C (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x18026826C (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHitTestContext::GetPointInLocalSpace(
        const struct D2D_POINT_2F *a1,
        const struct CMILMatrix *a2,
        struct D2D_POINT_2F *a3)
{
  float v3; // xmm5_4
  bool result; // al
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4

  v3 = *((float *)a2 + 3);
  result = 0;
  v5 = (float)(a1->x * *((float *)a2 + 7)) - *((float *)a2 + 4);
  v6 = (float)(a1->y * *((float *)a2 + 7)) - *((float *)a2 + 5);
  v7 = (float)(a1->x * v3) - *(float *)a2;
  v8 = (float)(v3 * a1->y) - *((float *)a2 + 1);
  if ( (float)(v7 * v6) != (float)(v5 * v8) )
  {
    v9 = (float)(v7 * v6) - (float)(v5 * v8);
    result = 1;
    v10 = (float)(*((float *)a2 + 15) * a1->x) - *((float *)a2 + 12);
    v11 = (float)(*((float *)a2 + 15) * a1->y) - *((float *)a2 + 13);
    a3->y = (float)((float)(v10 * v8) - (float)(v11 * v7)) / v9;
    a3->x = (float)((float)(v11 * v5) - (float)(v10 * v6)) / v9;
  }
  return result;
}
