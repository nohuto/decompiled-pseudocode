_OWORD *__fastcall CTreeData::GetSuperWetInkClip(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rax

  v2 = *(_OWORD **)(a1 + 280);
  if ( v2 )
    *a2 = *v2;
  else
    *a2 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  return a2;
}
