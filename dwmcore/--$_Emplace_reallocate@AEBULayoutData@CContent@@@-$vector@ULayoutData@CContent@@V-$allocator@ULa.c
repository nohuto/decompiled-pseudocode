char *__fastcall std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
        _QWORD *a1,
        _BYTE *a2,
        __int64 a3)
{
  _BYTE *v3; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  SIZE_T size_of; // rax
  char *v11; // rsi
  char *v12; // rbp
  void *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8

  v3 = (_BYTE *)*a1;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v7 == 0x666666666666666LL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<40>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[40 * ((a2 - v3) / 40)];
  v13 = v11;
  *(_OWORD *)v12 = *(_OWORD *)a3;
  *((_OWORD *)v12 + 1) = *(_OWORD *)(a3 + 16);
  *((_QWORD *)v12 + 4) = *(_QWORD *)(a3 + 32);
  v14 = (_BYTE *)a1[1];
  v15 = (_BYTE *)*a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v11, v15, (size_t)&a2[-*a1]);
    v13 = v12 + 40;
    v16 = a1[1] - (_QWORD)a2;
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<CContent::LayoutData>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  return v12;
}
