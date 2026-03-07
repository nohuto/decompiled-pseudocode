void __fastcall std::vector<Windows::Foundation::Numerics::float4>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 > (__int64)(a1[2] - *a1) >> 4 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<Windows::Foundation::Numerics::float4>::_Reallocate_exactly((__int64)a1, a2);
  }
}
