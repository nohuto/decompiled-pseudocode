bool __fastcall CCompositionSurfaceInfo::ConsumeDxFlipRect(CCompositionSurfaceInfo *this, struct MilRectU *a2)
{
  _OWORD *v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)this + 12) )
    return 0;
  result = 1;
  *v2 = *(_OWORD *)v3;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)v3 = 0LL;
  return result;
}
