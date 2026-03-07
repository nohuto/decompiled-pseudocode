__int64 __fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Construct_n<>(void **a1, __int64 a2)
{
  char *v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    std::vector<DISPLAYCONFIG_MODE_INFO>::_Buy_nonzero();
    v4 = (char *)*a1;
    memset_0(*a1, 0, a2 << 6);
    v6 = 0LL;
    a1[1] = &v4[64 * a2];
    return std::_Tidy_guard<std::vector<DISPLAYCONFIG_MODE_INFO>>::~_Tidy_guard<std::vector<DISPLAYCONFIG_MODE_INFO>>(&v6);
  }
  return result;
}
