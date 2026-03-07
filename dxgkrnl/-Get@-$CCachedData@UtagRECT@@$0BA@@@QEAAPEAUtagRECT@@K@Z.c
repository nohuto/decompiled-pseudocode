void *__fastcall CCachedData<tagRECT,16>::Get(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  void *v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v2 = a2;
  if ( a2 <= 0x10 )
    return (void *)a1;
  v5 = *(void **)(a1 + 256);
  if ( a2 <= *(_DWORD *)(a1 + 264) )
    return v5;
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = 16 * v2;
  if ( !is_mul_ok(v2, 0x10uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, 256LL);
  *(_QWORD *)(a1 + 256) = v7;
  *(_DWORD *)(a1 + 264) = v7 != 0 ? v2 : 0;
  return *(void **)(a1 + 256);
}
