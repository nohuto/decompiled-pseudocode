__int64 __fastcall CRemoteAppRenderTarget::CalcVailAlphaMode(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // edx
  __int64 v2; // rax
  float *v3; // rcx
  unsigned int v4; // r8d

  v1 = 1;
  if ( *((_DWORD *)this + 29) != 1 )
  {
    v2 = *((_QWORD *)this + 12);
    v3 = (float *)(v2 + 72);
    if ( !*(_QWORD *)(v2 + 64) )
      v3 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v3) )
      return v4;
  }
  return v1;
}
