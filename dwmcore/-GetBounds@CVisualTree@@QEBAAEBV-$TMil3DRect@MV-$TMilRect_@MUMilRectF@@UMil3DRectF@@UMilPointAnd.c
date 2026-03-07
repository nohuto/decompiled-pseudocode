__int128 *__fastcall CVisualTree::GetBounds(__int64 a1)
{
  __int128 *result; // rax

  result = (__int128 *)(a1 + 72);
  if ( !*(_QWORD *)(a1 + 64) )
    return &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  return result;
}
