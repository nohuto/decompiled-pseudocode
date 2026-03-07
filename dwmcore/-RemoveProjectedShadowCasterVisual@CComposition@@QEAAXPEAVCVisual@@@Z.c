void __fastcall CComposition::RemoveProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v2; // r8
  struct CVisual **v4; // rcx
  struct CVisual **v6; // rdx

  v2 = (struct CVisual **)*((_QWORD *)this + 136);
  v4 = (struct CVisual **)*((_QWORD *)this + 135);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v2 )
        return;
    }
    memmove_0(v4, v6, (char *)v2 - (char *)v6);
    *((_QWORD *)this + 136) -= 8LL;
  }
}
