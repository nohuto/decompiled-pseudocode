CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this, const struct MilRectF *a2)
{
  char *v2; // rdi
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF

  *((_QWORD *)this + 1) = 0LL;
  v2 = (char *)this + 16;
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  DynArrayIA<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,1,0>::DynArrayIA<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,1,0>((char *)this + 16);
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)v2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v2, 16LL);
  ReleaseInterface<ID2D1Geometry>((char *)this + 64);
  v6 = *(_OWORD *)a2;
  DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    v2,
    &v6,
    1LL);
  return this;
}
