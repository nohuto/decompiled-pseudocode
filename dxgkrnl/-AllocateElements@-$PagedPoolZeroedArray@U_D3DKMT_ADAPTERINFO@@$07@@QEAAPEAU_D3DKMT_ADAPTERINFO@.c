__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 8 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 20LL * a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 0x14 )
  {
    *a1 = ExAllocatePool2(256LL, 20LL * a2, 1265072196LL);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 42) = a2;
    return result;
  }
  return 0LL;
}
