__int64 __fastcall CoordMap::GetRampValues(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi

  result = detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear(a4);
  v7 = *a2;
  v8 = a2[1];
  while ( v7 != v8 )
  {
    if ( !*(_DWORD *)(v7 + 12) )
    {
      result = detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::reserve_region(
                 a4,
                 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4[1] - *a4) >> 2));
      *(_QWORD *)result = *(_QWORD *)v7;
      *(_DWORD *)(result + 8) = *(_DWORD *)(v7 + 8);
    }
    v7 += 16LL;
  }
  return result;
}
