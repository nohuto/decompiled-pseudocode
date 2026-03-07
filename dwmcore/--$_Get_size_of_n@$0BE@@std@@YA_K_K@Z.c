__int64 __fastcall std::_Get_size_of_n<20>(unsigned __int64 a1)
{
  if ( a1 > 0xCCCCCCCCCCCCCCCLL )
    std::_Throw_bad_array_new_length();
  return 20 * a1;
}
