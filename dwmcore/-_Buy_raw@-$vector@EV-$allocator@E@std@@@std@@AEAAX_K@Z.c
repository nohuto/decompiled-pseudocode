SIZE_T __fastcall std::vector<unsigned char>::_Buy_raw(__int64 *a1, SIZE_T a2)
{
  __int64 v4; // rax
  SIZE_T result; // rax

  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(a2);
  *a1 = v4;
  a1[1] = v4;
  result = a2 + v4;
  a1[2] = result;
  return result;
}
