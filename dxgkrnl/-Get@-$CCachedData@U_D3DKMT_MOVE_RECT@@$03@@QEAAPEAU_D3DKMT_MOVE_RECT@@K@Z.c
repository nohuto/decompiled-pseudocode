void *__fastcall CCachedData<_D3DKMT_MOVE_RECT,4>::Get(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  void *v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v2 = a2;
  if ( a2 <= 4 )
    return (void *)a1;
  v5 = *(void **)(a1 + 96);
  if ( a2 <= *(_DWORD *)(a1 + 104) )
    return v5;
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = 24 * v2;
  if ( !is_mul_ok(v2, 0x18uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, 256LL);
  *(_QWORD *)(a1 + 96) = v7;
  *(_DWORD *)(a1 + 104) = v7 != 0 ? v2 : 0;
  return *(void **)(a1 + 96);
}
