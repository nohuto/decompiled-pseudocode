char __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  char v1; // dl

  if ( !*((_QWORD *)this + 62)
    || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)this + 27) )
  {
    return 1;
  }
  return v1;
}
