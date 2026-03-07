void __fastcall std::vector<char>::_Insert_range<char *>(__int64 a1, char *a2, _BYTE *a3, _BYTE *a4)
{
  _BYTE *v4; // rbp
  char *v5; // rdi
  size_t v9; // rsi
  __int64 v10; // r14
  char *v11; // r12
  char *v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  size_t v15; // r14
  char *v16; // rdi
  char *v17; // [rsp+78h] [rbp+10h]
  SIZE_T v18; // [rsp+80h] [rbp+18h]

  v4 = *(_BYTE **)a1;
  v5 = *(char **)(a1 + 8);
  v9 = a4 - a3;
  if ( a4 != a3 )
  {
    if ( v9 <= *(_QWORD *)(a1 + 16) - (_QWORD)v5 )
    {
      v15 = v5 - a2;
      if ( v9 < v5 - a2 )
      {
        memmove_0(*(void **)(a1 + 8), &v5[-v9], a4 - a3);
        *(_QWORD *)(a1 + 8) = &v5[v9];
        memmove_0(&v5[-(v15 - v9)], a2, v15 - v9);
      }
      else
      {
        v16 = &a2[v9];
        memmove_0(&a2[v9], a2, v15);
        *(_QWORD *)(a1 + 8) = &v16[v15];
      }
      memmove_0(a2, a3, v9);
    }
    else
    {
      v10 = v5 - v4;
      if ( v9 > 0x7FFFFFFFFFFFFFFFLL - (v5 - v4) )
        std::_Xlength_error("vector too long");
      v18 = std::vector<char>::_Calculate_growth(a1, v10 + v9);
      v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v18);
      v17 = &v11[a2 - v4];
      memmove_0(v17, a3, v9);
      if ( v9 == 1 && a2 == v5 )
      {
        v13 = v5 - v4;
        v14 = v4;
        v12 = v11;
      }
      else
      {
        memmove_0(v11, v4, a2 - v4);
        v12 = &v17[v9];
        v13 = v5 - a2;
        v14 = a2;
      }
      memmove_0(v12, v14, v13);
      std::vector<char>::_Change_array(a1, v11, v10 + v9, v18);
    }
  }
}
