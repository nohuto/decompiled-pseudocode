char *__fastcall std::vector<CPreComputeContext::CPreWalkVisual>::_Emplace_reallocate<CVisual * &,bool &,bool &>(
        __int128 **a1,
        char *a2,
        _QWORD *a3,
        char *a4,
        char *a5)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v8; // rax
  __int128 *v10; // rbx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  SIZE_T size_of; // rax
  _OWORD *v16; // rax
  char v17; // dl
  char *v18; // r14
  _OWORD *v19; // r10
  char v20; // r8
  __int128 *v21; // rdx
  __int128 *v22; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 *v26; // rdx
  _OWORD *v27; // rcx
  __int128 v28; // xmm0

  v5 = 0xFFFFFFFFFFFFFFFLL;
  v6 = a2 - (char *)*a1;
  v8 = a1[1] - *a1;
  v10 = (__int128 *)a2;
  if ( v8 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v12 = v8 + 1;
  v13 = a1[2] - *a1;
  v14 = v13 >> 1;
  if ( v13 <= 0xFFFFFFFFFFFFFFFLL - (v13 >> 1) )
  {
    v5 = v14 + v13;
    if ( v14 + v13 < v12 )
      v5 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v5);
  v16 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v17 = *a4;
  v18 = (char *)v16 + (v6 & 0xFFFFFFFFFFFFFFF0uLL);
  v19 = v16;
  v20 = *a5;
  *(_QWORD *)v18 = *a3;
  v18[8] = v17;
  v18[9] = v20;
  v21 = a1[1];
  v22 = *a1;
  if ( v10 == v21 )
  {
    while ( v22 != v21 )
    {
      v24 = *v22++;
      *v16++ = v24;
    }
  }
  else
  {
    while ( v22 != v10 )
    {
      v25 = *v22++;
      *v16++ = v25;
    }
    v26 = a1[1];
    if ( v10 != v26 )
    {
      v27 = v18 + 16;
      do
      {
        v28 = *v10++;
        *v27++ = v28;
      }
      while ( v10 != v26 );
    }
  }
  std::vector<CPreComputeContext::CPreWalkVisual>::_Change_array(a1, v19, v12, v5);
  return v18;
}
