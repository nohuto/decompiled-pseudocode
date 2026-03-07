__int64 __fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
        __int64 **a1,
        unsigned __int64 *a2)
{
  __int64 *v2; // r11
  __int64 *v4; // r10
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 *v12; // r10
  __int64 *v13; // rbx
  __int64 *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *a1;
  v6 = (*a1)[1];
  v7 = v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *(_QWORD *)(v7 + 32) >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < *(_QWORD *)(v7 + 32) )
          v5 = (__int64 *)v7;
        v4 = (__int64 *)v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = *v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *a2 >= *(_QWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v5 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
  }
  v9 = v4;
  v10 = 0LL;
  v14 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>,std::_Iterator_base0>::operator++(&v14);
    v9 = v14;
  }
  v14 = v4;
  if ( v4 == (__int64 *)*v2 && *((_BYTE *)v5 + 25) )
  {
    std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(a1);
  }
  else
  {
    while ( v4 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>,std::_Iterator_base0>::operator++(&v14);
      v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Extract(
              a1,
              v12);
      Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v13 + 10);
      std::_Deallocate<16,0>(v13, 0x58uLL);
      v4 = v14;
    }
  }
  return v10;
}
