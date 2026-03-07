CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this, const struct tagRECT *a2)
{
  __int64 v2; // rbx
  float v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  DynArrayIA<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,1,0>::DynArrayIA<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,1,0>((char *)this + 16);
  *((_QWORD *)this + 8) = 0LL;
  do
  {
    v6[v2] = (float)*(&a2->left + v2);
    ++v2;
  }
  while ( v2 < 4 );
  CRectanglesShape::SetSingleRect(this, (const struct MilRectF *)v6);
  return this;
}
