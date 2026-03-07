CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this)
{
  char *v2; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  v2 = (char *)this + 48;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 2) = v2;
  *((_QWORD *)this + 3) = v2;
  *((_DWORD *)this + 8) = 1;
  *((_DWORD *)this + 9) = 1;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v2);
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
