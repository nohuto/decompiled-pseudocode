void __fastcall CDepthSortingPreComputeHelper::PreComputePreSubgraph(
        CDepthSortingPreComputeHelper *this,
        struct CVisual *a2)
{
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  __int64 v3; // [rsp+30h] [rbp-38h]
  int v4; // [rsp+38h] [rbp-30h]
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)a2 + 27) == 3 )
  {
    v3 = 0LL;
    v4 = -1;
    v6 = 0LL;
    v2 = 0LL;
    v5 = 0LL;
    std::vector<CDepthSortedVisualCollection>::emplace_back<CDepthSortedVisualCollection>((__int64 *)this, (__int64)&v2);
    if ( (_QWORD)v5 )
      std::_Deallocate<16,0>((void *)v5, 16 * ((v6 - (__int64)v5) >> 4));
    if ( (_QWORD)v2 )
    {
      std::_Destroy_range<std::allocator<CDepthSortingLayer>>(v2, *((__int64 *)&v2 + 1));
      std::_Deallocate<16,0>((void *)v2, 8 * ((v3 - (__int64)v2) >> 3));
    }
  }
}
