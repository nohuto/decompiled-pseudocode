SIZE_T __fastcall std::vector<unsigned char>::_Clear_and_reserve_geometric(__int64 *a1, unsigned __int64 a2)
{
  SIZE_T v3; // rdi

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
  v3 = std::vector<char>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>((void *)*a1, a1[2] - *a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return std::vector<unsigned char>::_Buy_raw(a1, v3);
}
