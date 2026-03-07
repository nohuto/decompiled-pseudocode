__int64 __fastcall std::vector<unsigned char>::_Reallocate_exactly(__int64 a1, SIZE_T a2)
{
  __int64 v3; // rdi
  void *v5; // rbx

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
  memmove_0(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned char>::_Change_array(a1, v5, v3, a2);
}
