__int64 __fastcall NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 4 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 8LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *a1 = ExAllocatePool2(64LL, 8LL * a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 10) = a2;
  return result;
}
