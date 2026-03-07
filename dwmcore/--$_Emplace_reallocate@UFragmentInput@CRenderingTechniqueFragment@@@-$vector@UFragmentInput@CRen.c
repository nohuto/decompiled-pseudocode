char *__fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // rbp
  char *v16; // r8
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 *v19; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v15 = (__int64)v13;
  v16 = v13;
  *(_QWORD *)v14 = *a3;
  v17 = a3[1];
  a3[1] = 0LL;
  *((_QWORD *)v14 + 1) = v17;
  v18 = (__int64 *)a1[1];
  v19 = (__int64 *)*a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CRenderingTechniqueFragment::FragmentInput *>(v19, a2, v13);
    v18 = (__int64 *)a1[1];
    v16 = v14 + 16;
    v19 = a2;
  }
  std::_Uninitialized_move<CRenderingTechniqueFragment::FragmentInput *>(v19, v18, v16);
  std::vector<CRenderingTechniqueFragment::FragmentInput>::_Change_array(a1, v15, v9, v3);
  return v14;
}
