void __fastcall CDepthSortingLayer::AddVisual(CDepthSortingLayer *this, const struct CVisualDepthGeometry *a2)
{
  int v2; // eax
  _BYTE *v4; // rdx
  float v6; // xmm1_4
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a2 + 8);
  v4 = (_BYTE *)*((_QWORD *)this + 1);
  v7 = v2;
  if ( v4 == *((_BYTE **)this + 2) )
  {
    std::vector<unsigned int>::_Emplace_reallocate<unsigned int>(this, v4, &v7);
  }
  else
  {
    *(_DWORD *)v4 = v2;
    *((_QWORD *)this + 1) += 4LL;
  }
  v6 = *((float *)this + 7);
  *((float *)this + 6) = fminf(*((float *)this + 6), *((float *)a2 + 4));
  *((float *)this + 7) = fmaxf(v6, *((float *)a2 + 7));
}
