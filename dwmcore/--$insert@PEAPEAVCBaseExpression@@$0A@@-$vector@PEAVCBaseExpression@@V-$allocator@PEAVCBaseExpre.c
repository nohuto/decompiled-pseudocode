_QWORD *__fastcall std::vector<CBaseExpression *>::insert<CBaseExpression * *,0>(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        const void *a4,
        size_t Size)
{
  _BYTE *v5; // r13
  size_t v6; // r12
  _BYTE *v7; // rdi
  unsigned __int64 v9; // rsi
  _QWORD *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  SIZE_T size_of; // rax
  char *v19; // r14
  size_t v20; // r8
  const void *v21; // rdx
  char *v22; // rcx
  __int64 v23; // r14
  size_t v24; // r8
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+80h] [rbp+8h]
  __int64 v29; // [rsp+90h] [rbp+18h]
  size_t Sizea; // [rsp+A0h] [rbp+28h]

  v5 = *(_BYTE **)a1;
  v6 = Size - (_QWORD)a4;
  v7 = *(_BYTE **)(a1 + 8);
  v29 = (__int64)&a3[-*(_QWORD *)a1];
  v9 = (__int64)(Size - (_QWORD)a4) >> 3;
  v27 = v29 >> 3;
  Sizea = Size - (_QWORD)a4;
  if ( v9 )
  {
    v12 = *(_QWORD *)(a1 + 16);
    if ( v9 <= (v12 - (__int64)v7) >> 3 )
    {
      v23 = 8 * v9;
      v24 = v7 - a3;
      v25 = (v7 - a3) >> 3;
      if ( v9 >= v25 )
      {
        memmove_0(&a3[v23], a3, v24);
        *(_QWORD *)(a1 + 8) = &a3[8 * v25 + v23];
      }
      else
      {
        memmove_0(v7, &v7[-v23], 8 * v9);
        *(_QWORD *)(a1 + 8) = &v7[v23];
        memmove_0(&a3[8 * v9], a3, (size_t)&v7[-8LL * v9 - (_QWORD)a3]);
      }
      memmove_0(a3, a4, v6);
    }
    else
    {
      v13 = 0x1FFFFFFFFFFFFFFFLL;
      v14 = (v7 - v5) >> 3;
      if ( v9 > 0x1FFFFFFFFFFFFFFFLL - v14 )
        std::_Xlength_error("vector too long");
      v15 = v14 + v9;
      v16 = (v12 - (__int64)v5) >> 3;
      v26 = v14 + v9;
      v17 = v16 >> 1;
      if ( v16 <= 0x1FFFFFFFFFFFFFFFLL - (v16 >> 1) )
      {
        v13 = v17 + v16;
        if ( v17 + v16 < v15 )
          v13 = v15;
      }
      size_of = std::_Get_size_of_n<8>(v13);
      v19 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v19[8 * v27], a4, Sizea);
      if ( v9 == 1 && a3 == v7 )
      {
        v20 = v7 - v5;
        v21 = v5;
        v22 = v19;
      }
      else
      {
        memmove_0(v19, v5, v29);
        v20 = v7 - a3;
        v21 = a3;
        v22 = &v19[8 * v9 + 8 * v27];
      }
      memmove_0(v22, v21, v20);
      std::vector<CBaseExpression *>::_Change_array(a1, v19, v26, v13);
    }
  }
  result = a2;
  *a2 = *(_QWORD *)a1 + 8 * v27;
  return result;
}
