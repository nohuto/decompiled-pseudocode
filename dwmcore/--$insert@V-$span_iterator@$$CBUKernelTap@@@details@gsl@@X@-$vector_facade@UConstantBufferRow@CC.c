_QWORD *__fastcall detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<KernelTap const>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        gsl::details **a5)
{
  __int64 v7; // rbx
  gsl::details *i; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned int v14; // eax
  _QWORD *result; // rax
  __int128 v16; // [rsp+40h] [rbp-20h]
  gsl::details *v17; // [rsp+50h] [rbp-10h]

  v7 = *a3 - *a1;
  i = *a5;
  v10 = v7 >> 4;
  if ( *(_OWORD *)a5 != *(_OWORD *)a4 )
  {
LABEL_11:
    gsl::details::terminate(i);
    JUMPOUT(0x1800D2596LL);
  }
  v11 = (_QWORD *)detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::reserve_region(
                    a1,
                    v10,
                    0xAAAAAAAAAAAAAAABuLL * (((__int64)a5[2] - *(_QWORD *)(a4 + 16)) >> 2));
  v16 = *(_OWORD *)a5;
  v12 = *(_QWORD *)(a4 + 8);
  v13 = *(_QWORD *)a4;
  v17 = a5[2];
  for ( i = *(gsl::details **)(a4 + 16); ; i = (gsl::details *)((char *)i + 12) )
  {
    if ( __PAIR128__(v12, v13) != v16 )
      goto LABEL_11;
    if ( i == v17 )
      break;
    if ( !v13 || !v12 || v13 > (unsigned __int64)i || (unsigned __int64)i >= v12 )
      goto LABEL_11;
    *v11 = *(_QWORD *)i;
    v14 = *((_DWORD *)i + 2);
    v11[1] = v14;
    v11 += 2;
  }
  result = a2;
  *a2 = *a1 + 16 * v10;
  return result;
}
