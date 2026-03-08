/*
 * XREFs of ?SetCachedTotalCpuClip@CCpuClippingData@@QEAAX$$QEAVCShapePtr@@@Z @ 0x1800F3B20
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18005CF00 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CCpuClippingData::SetCachedTotalCpuClip(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  char v4; // di
  __int64 v5; // rbx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *((_BYTE *)a2 + 8);
  v5 = *a2;
  CShapePtr::Release((CShapePtr *)(v2 + 96));
  *(_QWORD *)(v2 + 96) = v5;
  *(_BYTE *)(v2 + 104) = v4;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
}
