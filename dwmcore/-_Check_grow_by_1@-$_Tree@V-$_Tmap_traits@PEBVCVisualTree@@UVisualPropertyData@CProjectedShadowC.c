__int64 __fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Check_grow_by_1(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x2E8BA2E8BA2E8BALL;
  if ( *(_QWORD *)(a1 + 8) == 0x2E8BA2E8BA2E8BALL )
    std::_Throw_tree_length_error();
  return result;
}
