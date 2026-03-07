__int64 __fastcall std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r11
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find_lower_bound<CVisualTree const *>(
    a1,
    v4,
    a2);
  if ( *(_BYTE *)(v5 + 25) || *v2 < *(_QWORD *)(v5 + 32) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800058B7LL);
  }
  return v5 + 40;
}
