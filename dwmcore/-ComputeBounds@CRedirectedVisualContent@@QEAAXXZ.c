void __fastcall CRedirectedVisualContent::ComputeBounds(CRedirectedVisualContent *this)
{
  __int64 v2; // rax
  __int128 *v3; // rax
  __int64 v4; // xmm1_8

  if ( (int)CVisualTree::Clean(*((CVisualTree **)this + 10), 0LL) < 0 )
  {
    *(_OWORD *)((char *)this + 88) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v4 = qword_1803E1FC8;
  }
  else
  {
    v2 = *((_QWORD *)this + 10);
    if ( *(_QWORD *)(v2 + 64) )
      v3 = (__int128 *)(v2 + 72);
    else
      v3 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    *(_OWORD *)((char *)this + 88) = *v3;
    v4 = *((_QWORD *)v3 + 2);
  }
  *((_QWORD *)this + 13) = v4;
}
