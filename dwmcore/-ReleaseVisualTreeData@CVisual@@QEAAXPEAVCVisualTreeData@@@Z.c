void __fastcall CVisual::ReleaseVisualTreeData(CVisual *this, struct CVisualTreeData *a2)
{
  _DWORD *v4; // r8
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned int j; // eax
  _QWORD *v8; // rax
  __int64 ProjectedShadowCasters; // rax
  __int64 *v10; // rbp
  __int64 *i; // rdi
  __int64 v12; // r14
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( (**((_DWORD **)this + 29) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
    v10 = *(__int64 **)(ProjectedShadowCasters + 8);
    for ( i = *(__int64 **)ProjectedShadowCasters; i != v10; ++i )
    {
      v12 = *i;
      v13 = *((_QWORD *)a2 + 49);
      if ( std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
             v12 + 80,
             (__int64)&v13) != *(_QWORD *)(v12 + 80) )
        std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
          v12 + 80,
          &v13);
    }
  }
  CTreeData::Clear(a2);
  *((_QWORD *)a2 + 49) = 0LL;
  v4 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v4 & 0x8000000) == 0 )
    goto LABEL_3;
  v5 = (unsigned int)v4[1];
  v6 = v4 + 2;
  for ( j = 0; j < (unsigned int)v5; ++v6 )
  {
    if ( *v6 == 5 )
      break;
    ++j;
  }
  v8 = j >= (unsigned int)v5 ? 0LL : (_QWORD *)((char *)v4 + 8LL * j - (((_BYTE)v5 + 15) & 7) + v5 + 15);
  if ( *v8 )
  {
    *(_QWORD *)a2 = &CVisualTreeData::`vftable';
    CTreeData::~CTreeData(a2);
    operator delete(a2, 0x190uLL);
  }
  else
  {
LABEL_3:
    CVisual::SetUnusedTreeData(this, a2);
  }
}
