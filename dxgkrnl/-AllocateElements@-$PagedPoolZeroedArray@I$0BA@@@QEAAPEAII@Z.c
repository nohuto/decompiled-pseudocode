__int64 __fastcall PagedPoolZeroedArray<unsigned int,16>::AllocateElements(__int64 *a1, unsigned int a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( a2 <= 0x10 )
  {
    v4 = a1 + 1;
    *a1 = (__int64)v4;
    if ( a2 )
      memset(v4, 0, 4LL * a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 4 )
  {
    *a1 = ExAllocatePool2(256LL, 4LL * a2, 1265072196LL);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 18) = a2;
    return result;
  }
  return 0LL;
}
