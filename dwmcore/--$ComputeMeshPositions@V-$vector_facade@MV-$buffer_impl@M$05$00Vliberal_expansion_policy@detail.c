__int64 __fastcall CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5)
{
  int v8; // ecx
  int v9; // r9d

  CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    a1,
    a1,
    a2,
    a4,
    *(_DWORD *)(a4 + 8),
    a5);
  return CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
           v8,
           a1 + 184,
           a3,
           v9,
           *(_DWORD *)(a4 + 12),
           a5);
}
