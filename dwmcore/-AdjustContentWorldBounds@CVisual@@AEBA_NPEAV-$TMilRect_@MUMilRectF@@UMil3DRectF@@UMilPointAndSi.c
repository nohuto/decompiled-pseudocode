char __fastcall CVisual::AdjustContentWorldBounds(CVisual *this, __int64 a2)
{
  char v4; // bl
  float v5; // xmm6_4

  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
    return 0;
  v4 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 336LL))(this) )
    v5 = FLOAT_0_5;
  else
    v5 = 0.0;
  if ( CVisual::HasPixelSnappedContent(this) )
    v5 = v5 + 0.5;
  if ( v5 != 0.0 )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(a2);
  return v4;
}
