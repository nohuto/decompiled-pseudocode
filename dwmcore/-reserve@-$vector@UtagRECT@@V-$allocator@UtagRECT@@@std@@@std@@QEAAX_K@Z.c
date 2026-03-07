unsigned __int64 __fastcall std::vector<tagRECT>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  SIZE_T size_of; // rax
  char *v7; // rbp

  result = (__int64)(a1[2] - *a1) >> 4;
  if ( a2 > result )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
    v5 = a1[1] - *a1;
    size_of = std::_Get_size_of_n<16>(a2);
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    result = (unsigned __int64)memmove_0(v7, (const void *)*a1, a1[1] - *a1);
    if ( *a1 )
      result = std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = v7;
    a1[1] = &v7[v5 & 0xFFFFFFFFFFFFFFF0uLL];
    a1[2] = &v7[16 * a2];
  }
  return result;
}
