__int64 __fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::resize(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 result; // rax
  _DWORD *v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[1] - *a1) >> 2);
  if ( a2 <= v5 )
  {
    v9 = a1[1];
    v10 = *a1 + 52 * a2;
    return detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::erase(
             a1,
             &v11,
             &v10,
             &v9);
  }
  else
  {
    v6 = a2 - v5;
    result = detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               v5,
               v6);
    if ( v6 )
    {
      v8 = (_DWORD *)(result + 8);
      do
      {
        *(v8 - 2) = *(_DWORD *)a3;
        *(v8 - 1) = *(_DWORD *)(a3 + 4);
        *v8 = *(_DWORD *)(a3 + 8);
        v8 += 13;
        *(v8 - 12) = *(_DWORD *)(a3 + 12);
        *(v8 - 11) = *(_DWORD *)(a3 + 16);
        *(v8 - 10) = *(_DWORD *)(a3 + 20);
        *(v8 - 9) = *(_DWORD *)(a3 + 24);
        *(v8 - 8) = *(_DWORD *)(a3 + 28);
        result = *(unsigned int *)(a3 + 32);
        *(v8 - 7) = result;
        *(_OWORD *)(v8 - 6) = *(_OWORD *)(a3 + 36);
        --v6;
      }
      while ( v6 );
    }
  }
  return result;
}
