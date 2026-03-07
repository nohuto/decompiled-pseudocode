__int64 __fastcall std::vector<unsigned char>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, a1[2] - v6);
  *a1 = a2;
  a1[1] = a2 + a3;
  result = a2 + a4;
  a1[2] = a2 + a4;
  return result;
}
