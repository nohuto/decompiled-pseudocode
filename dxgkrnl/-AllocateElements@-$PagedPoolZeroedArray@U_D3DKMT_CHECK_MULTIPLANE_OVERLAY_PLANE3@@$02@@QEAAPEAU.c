__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 3 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 32LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x20 )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, 32LL * a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 26) = a2;
  return result;
}
