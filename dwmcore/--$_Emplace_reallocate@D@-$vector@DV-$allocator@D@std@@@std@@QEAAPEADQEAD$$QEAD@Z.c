char *__fastcall std::vector<char>::_Emplace_reallocate<char>(_QWORD *a1, char *a2, char *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  SIZE_T v9; // r12
  char *v10; // rdi
  char *v11; // r14
  void *v12; // rcx
  char *v13; // r8
  _BYTE *v14; // rdx
  size_t v15; // r8

  v3 = (_BYTE *)*a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<char>::_Calculate_growth(a1, v6 + 1);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  v11 = &a2[v10 - v3];
  *v11 = *a3;
  v12 = v10;
  v13 = (char *)a1[1];
  v14 = (_BYTE *)*a1;
  if ( a2 == v13 )
  {
    v15 = v13 - v14;
  }
  else
  {
    memmove_0(v10, v14, (size_t)&a2[-*a1]);
    v12 = v11 + 1;
    v15 = a1[1] - (_QWORD)a2;
    v14 = a2;
  }
  memmove_0(v12, v14, v15);
  std::vector<char>::_Change_array(a1, v10, v8, v9);
  return &a2[v10 - v3];
}
