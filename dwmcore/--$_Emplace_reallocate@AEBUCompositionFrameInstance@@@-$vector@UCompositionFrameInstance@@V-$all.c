char *__fastcall std::vector<CompositionFrameInstance>::_Emplace_reallocate<CompositionFrameInstance const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rsi
  char *v13; // rdi
  void *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v6 = (a2 - (_BYTE *)*a1) / 60;
  v7 = 0xEEEEEEEEEEEEEEEFuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v7 == 0x444444444444444LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xEEEEEEEEEEEEEEEFuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v10 = v9 >> 1;
  if ( v9 <= 0x444444444444444LL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x444444444444444LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x444444444444444LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(60 * v11);
  v13 = &v12[60 * v6];
  *(_OWORD *)v13 = *(_OWORD *)a3;
  *((_OWORD *)v13 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v13 + 2) = *(_OWORD *)(a3 + 32);
  *((_QWORD *)v13 + 6) = *(_QWORD *)(a3 + 48);
  *((_DWORD *)v13 + 14) = *(_DWORD *)(a3 + 56);
  v14 = v12;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v12, v16, a2 - (_BYTE *)*a1);
    v14 = v13 + 60;
    v17 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<CompositionFrameInstance>::_Change_array(a1, v12, v8, v11);
  return v13;
}
