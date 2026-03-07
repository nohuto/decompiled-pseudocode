__int128 *__fastcall CVisual::GetBounds(__int64 a1, __int64 a2)
{
  __int128 *result; // rax

  if ( a1 != *(_QWORD *)(a2 + 64) )
    return (__int128 *)(a1 + 148);
  result = (__int128 *)(a2 + 72);
  if ( !*(_QWORD *)(a2 + 64) )
    return &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  return result;
}
