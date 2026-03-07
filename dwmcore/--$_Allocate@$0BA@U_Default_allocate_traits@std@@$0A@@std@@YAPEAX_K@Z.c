__int64 __fastcall std::_Allocate<16,std::_Default_allocate_traits,0>(SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rax
  __int64 result; // rax
  SIZE_T v4; // rcx
  LPVOID v5; // rax
  LPVOID v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( dwBytes >= 0x1000 )
  {
    v4 = dwBytes + 39;
    if ( v4 <= dwBytes )
      std::_Throw_bad_array_new_length();
    v5 = operator new(v4);
    v6 = v5;
    if ( !v5 )
      _invalid_parameter_noinfo_noreturn();
    result = ((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(result - 8) = v6;
  }
  else if ( dwBytes )
  {
    ProcessHeap = GetProcessHeap();
    result = (__int64)HeapAlloc(ProcessHeap, 0, dwBytes);
    if ( !result )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  else
  {
    return 0LL;
  }
  return result;
}
