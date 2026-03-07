__int64 __fastcall std::vector<_D3D11_PARAMETER_DESC>::_Reallocate_exactly(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  SIZE_T size_of; // rax
  void *v6; // rbx

  v3 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  size_of = std::_Get_size_of_n<56>(a2);
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<_D3D11_PARAMETER_DESC>::_Change_array(a1, v6, v3, a2);
}
