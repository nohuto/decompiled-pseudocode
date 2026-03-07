char *__fastcall std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(
        struct EffectInput **a1,
        struct EffectInput *a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  SIZE_T size_of; // rax
  EffectInput *v11; // rsi
  char *v12; // r14
  const struct EffectInput *v13; // rdx
  struct EffectInput *v14; // rcx

  v3 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - *a1) >> 3);
  v4 = 0x276276276276276LL;
  v6 = (a2 - *a1) / 104;
  if ( v3 == 0x276276276276276LL )
    std::_Xlength_error("vector too long");
  v7 = v3 + 1;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((a1[2] - *a1) >> 3);
  v9 = v8 >> 1;
  if ( v8 <= 0x276276276276276LL - (v8 >> 1) )
  {
    v4 = v9 + v8;
    if ( v9 + v8 < v7 )
      v4 = v7;
  }
  size_of = std::_Get_size_of_n<104>(v4);
  v11 = (EffectInput *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (char *)v11 + 104 * v6;
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 1) = 0LL;
  v12[16] = 0;
  *((_OWORD *)v12 + 3) = 0LL;
  v13 = a1[1];
  v14 = *a1;
  if ( a2 == v13 )
  {
    std::_Uninitialized_copy<EffectInput *>(v14, v13, v11);
  }
  else
  {
    std::_Uninitialized_move<EffectInput *>(v14);
    std::_Uninitialized_move<EffectInput *>(a2);
  }
  std::vector<EffectInput>::_Change_array(a1, (__int64)v11, v7, v4);
  return v12;
}
