__int64 __fastcall std::vector<EffectInput>::_Reallocate_exactly(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  SIZE_T size_of; // rax
  __int64 v6; // rbx

  v3 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  size_of = std::_Get_size_of_n<104>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_copy<EffectInput *>(*(struct EffectInput **)a1);
  return std::vector<EffectInput>::_Change_array(a1, v6, v3, a2);
}
