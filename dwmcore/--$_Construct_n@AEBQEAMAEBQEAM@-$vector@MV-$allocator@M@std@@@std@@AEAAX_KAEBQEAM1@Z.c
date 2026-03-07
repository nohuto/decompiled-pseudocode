void __fastcall std::vector<float>::_Construct_n<float * const &,float * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  SIZE_T size_of; // rax
  char *v9; // rax
  char *v10; // rdi
  signed __int64 v11; // rbx

  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
    size_of = std::_Get_size_of_n<4>(a2);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    v10 = v9;
    a1[1] = v9;
    a1[2] = &v9[4 * a2];
    v11 = *a4 - (_QWORD)*a3;
    memmove_0(v9, *a3, v11);
    a1[1] = &v10[4 * (v11 >> 2)];
  }
}
