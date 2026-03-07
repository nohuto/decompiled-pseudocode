char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  SIZE_T v5; // rbp
  char *v6; // r14
  char *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v4 = a1[1] - *a1;
  v5 = std::vector<char>::_Calculate_growth(a1, a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memset_0(&v6[v4], 0, a2 - v4);
  memmove_0(v6, (const void *)*a1, a1[1] - *a1);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, a1[2] - *a1);
  *a1 = v6;
  a1[1] = &v6[a2];
  result = &v6[v5];
  a1[2] = &v6[v5];
  return result;
}
