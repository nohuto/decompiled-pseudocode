__int64 __fastcall std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<unsigned char>::_Tidy();
  return result;
}
