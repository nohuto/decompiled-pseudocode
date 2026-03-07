void __fastcall CProjectedShadowCaster::SetCastingVisual(CProjectedShadowScene ***this, CComposition **a2)
{
  CProjectedShadowScene **v4; // rbp
  CProjectedShadowScene **i; // rdi
  CProjectedShadowScene **v6; // rdi
  __int64 ProjectedShadowCasters; // r14
  _BYTE *v8; // r8
  CProjectedShadowCaster **v9; // rcx
  _BYTE *v10; // rdx

  if ( a2 != this[8] )
  {
    if ( this[8] )
    {
      CProjectedShadowCaster::InvalidateMaskContent((CProjectedShadowCaster *)this);
      v4 = this[13];
      for ( i = this[12]; i != v4; ++i )
        CProjectedShadowScene::DiscardCachesForCaster(*i, (struct CProjectedShadowCaster *)this);
      std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(this + 10);
      v6 = this[8];
      if ( (*(_DWORD *)v6[29] & 0x40000) != 0 )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this[8]);
        v8 = *(_BYTE **)(ProjectedShadowCasters + 8);
        v9 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
        if ( *(_BYTE **)ProjectedShadowCasters != v8 )
        {
          while ( 1 )
          {
            v10 = v9 + 1;
            if ( *v9 == (CProjectedShadowCaster *)this )
              break;
            ++v9;
            if ( v10 == v8 )
              goto LABEL_3;
          }
          memmove_0(v9, v10, v8 - v10);
          *(_QWORD *)(ProjectedShadowCasters + 8) -= 8LL;
          if ( ((*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
            CComposition::RemoveProjectedShadowCasterVisual(v6[2], (struct CVisual *)v6);
        }
      }
    }
LABEL_3:
    this[8] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowCaster(a2, (struct CProjectedShadowCaster *)this);
      CProjectedShadowCaster::InvalidateMaskContent((CProjectedShadowCaster *)this);
    }
  }
}
