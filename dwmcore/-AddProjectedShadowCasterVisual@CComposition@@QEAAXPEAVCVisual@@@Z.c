void __fastcall CComposition::AddProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v3; // rdx
  char *v4; // rcx
  struct CVisual **i; // rax
  _QWORD *v6; // rdx
  struct CVisual *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = (struct CVisual **)*((_QWORD *)this + 136);
  v4 = (char *)this + 1080;
  for ( i = *(struct CVisual ***)v4; i != v3; ++i )
  {
    if ( *i == a2 )
      return;
  }
  v6 = (_QWORD *)*((_QWORD *)v4 + 1);
  if ( v6 == *((_QWORD **)v4 + 2) )
  {
    std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>(v4, v6, &v7);
  }
  else
  {
    *v6 = a2;
    *((_QWORD *)v4 + 1) += 8LL;
  }
}
