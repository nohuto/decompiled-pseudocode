__int64 __fastcall std::vector<CCursorVisual *>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  SIZE_T size_of; // rax
  char *v7; // rdi

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  v5 = std::vector<CMilPoint2F>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<8>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memset_0(&v7[8 * v4], 0, 8 * (a2 - v4));
  memmove_0(v7, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  return std::vector<CCursorVisual *>::_Change_array(a1, v7, a2, v5);
}
