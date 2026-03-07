CVisualTree *__fastcall CVisualTree::CVisualTree(CVisualTree *this, struct CComposition *a2, struct CVisual *a3)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisualTree::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  CDirtyRegion::CDirtyRegion((CVisualTree *)((char *)this + 104), this);
  *((_QWORD *)this + 574) = 0LL;
  *((_QWORD *)this + 567) = (char *)this + 4560;
  *((_QWORD *)this + 568) = (char *)this + 4560;
  *((_QWORD *)this + 569) = (char *)this + 4592;
  *((_QWORD *)this + 576) = (char *)this + 4616;
  *((_QWORD *)this + 575) = 0LL;
  *((_DWORD *)this + 1154) = 0;
  *((_DWORD *)this + 1174) = 0;
  *((_QWORD *)this + 588) = 0LL;
  *((_WORD *)this + 2356) = 1;
  *((_BYTE *)this + 4714) = 0;
  *((_OWORD *)this + 287) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *((_QWORD *)this + 586) = (char *)this + 4680;
  *((_QWORD *)this + 585) = (char *)this + 4680;
  return this;
}
