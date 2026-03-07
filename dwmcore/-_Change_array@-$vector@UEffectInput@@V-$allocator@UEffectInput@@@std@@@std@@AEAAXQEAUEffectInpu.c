__int64 __fastcall std::vector<EffectInput>::_Change_array(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<EffectInput>>(v6, a1[1]);
    std::_Deallocate<16,0>(*a1, 8 * ((__int64)(a1[2] - *a1) >> 3));
  }
  *a1 = a2;
  a1[1] = a2 + 104 * a3;
  result = a2 + 104 * a4;
  a1[2] = result;
  return result;
}
