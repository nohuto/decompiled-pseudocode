__int64 __fastcall std::vector<CMilPoint2F>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  SIZE_T size_of; // rax
  __int64 v6; // rax
  __int64 *v7; // r8
  _QWORD *v8; // rdx
  __int64 *i; // rcx
  __int64 v11; // xmm0_8

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v4 = std::vector<CMilPoint2F>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<8>(v4);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = a1[1];
  v8 = (_QWORD *)v6;
  for ( i = *a1; i != v7; ++i )
  {
    v11 = *i;
    *v8++ = v11;
  }
  return std::vector<CMilPoint2F>::_Change_array(a1, v6, a2, v4);
}
