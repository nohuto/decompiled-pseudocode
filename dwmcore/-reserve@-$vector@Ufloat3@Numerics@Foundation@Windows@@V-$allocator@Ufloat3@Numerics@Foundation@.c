unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float3>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 2);
  if ( a2 > result )
  {
    if ( a2 > 0x1555555555555555LL )
      std::_Xlength_error("vector too long");
    return std::vector<Windows::Foundation::Numerics::float3>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
