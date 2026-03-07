char *__fastcall std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(
        char **a1,
        char *a2,
        _OWORD *a3)
{
  __int64 v3; // rdi
  signed __int64 v4; // r14
  __int64 v6; // rax
  char *v7; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // r10
  char *v15; // r14
  char *v16; // r8
  char *v17; // rcx
  _OWORD *v18; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  char *v22; // rdx
  signed __int64 v23; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  v7 = a2;
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
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = (char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_OWORD *)v15 = *a3;
  v16 = a1[1];
  v17 = *a1;
  if ( v7 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      v20 = *(_OWORD *)v17;
      v17 += 16;
      *v18++ = v20;
    }
  }
  else
  {
    while ( v17 != v7 )
    {
      v21 = *(_OWORD *)v17;
      v17 += 16;
      *v13++ = v21;
    }
    v22 = a1[1];
    if ( v7 != v22 )
    {
      v23 = v15 - v7;
      do
      {
        *(_OWORD *)&v7[v23 + 16] = *(_OWORD *)v7;
        v7 += 16;
      }
      while ( v7 != v22 );
    }
  }
  std::vector<CVisual::LightEntry>::_Change_array(a1, v14, v9, v3);
  return v15;
}
