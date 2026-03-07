__int64 __fastcall CDrawingContext::CalcClippedNodeWorldSpaceBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v5; // r10
  __int128 *Bounds; // rax
  CMILMatrix *v7; // r9
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+30h] [rbp-20h]
  int v11; // [rsp+34h] [rbp-1Ch]
  __int128 v12; // [rsp+38h] [rbp-18h] BYREF

  v10 = 0;
  v11 = 0;
  v9 = 0LL;
  CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 400));
  Bounds = CVisual::GetBounds(v5, *(_QWORD *)(a1 + 8056));
  CMILMatrix::Transform3DBoundsHelper<1>(v7, (float *)Bounds, (float *)&v9);
  v12 = 0LL;
  CDrawingContext::GetClipBoundsWorld(a1, (float *)&v12);
  result = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
             (__int64)&v9,
             &v12);
  *a3 = v9;
  return result;
}
