__int64 __fastcall std::vector<unsigned short>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  void *v5; // rbx

  v3 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 1;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v5 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * a2);
  memmove_0(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned short>::_Change_array(a1, v5, v3, a2);
}
