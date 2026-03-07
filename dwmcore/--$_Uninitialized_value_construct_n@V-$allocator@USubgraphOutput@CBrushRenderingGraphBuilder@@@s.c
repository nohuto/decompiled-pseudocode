__int64 __fastcall std::_Uninitialized_value_construct_n<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(
        __int64 a1,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_DWORD *)a1 = -1;
    *(_QWORD *)(a1 + 8) = 0LL;
    a1 += 16LL;
  }
  std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(a1, a1);
  return a1;
}
