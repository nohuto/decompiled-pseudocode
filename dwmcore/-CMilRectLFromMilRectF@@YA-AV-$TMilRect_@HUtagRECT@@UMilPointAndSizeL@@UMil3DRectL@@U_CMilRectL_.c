/*
 * XREFs of ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800E45D8
 * Callers:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014ECC (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080580 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801AE5EC (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180256F38 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     <none>
 */

int *__fastcall CMilRectLFromMilRectF(int *a1, __int64 a2)
{
  float v2; // xmm0_4
  float v3; // eax
  double v4; // xmm0_8
  int v5; // eax
  double v6; // xmm0_8
  int v7; // eax
  float v9; // [rsp+8h] [rbp+8h]

  v2 = *(float *)a2 + 6291456.25;
  v3 = v2;
  v4 = *(float *)(a2 + 4);
  *a1 = (int)(LODWORD(v3) << 10) >> 11;
  *(float *)&v4 = v4 + 6291456.25;
  v5 = LODWORD(v4);
  v6 = *(float *)(a2 + 8);
  a1[1] = v5 << 10 >> 11;
  *(float *)&v6 = v6 + 6291456.25;
  v7 = LODWORD(v6);
  LODWORD(v6) = *(_DWORD *)(a2 + 12);
  a1[2] = v7 << 10 >> 11;
  v9 = *(float *)&v6 + 6291456.25;
  a1[3] = (int)(LODWORD(v9) << 10) >> 11;
  return a1;
}
