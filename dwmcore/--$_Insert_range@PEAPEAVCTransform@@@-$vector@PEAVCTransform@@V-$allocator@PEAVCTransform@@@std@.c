void __fastcall std::vector<CTransform *>::_Insert_range<CTransform * *>(
        _QWORD *a1,
        _BYTE *a2,
        const void *a3,
        __int64 a4)
{
  _BYTE *v4; // r13
  _BYTE *v5; // rdi
  size_t v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  SIZE_T size_of; // rax
  char *v17; // r14
  size_t v18; // r8
  const void *v19; // rdx
  char *v20; // rcx
  __int64 v21; // r15
  size_t v22; // r8
  unsigned __int64 v23; // r14
  char *v24; // rdi
  unsigned __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+88h] [rbp+10h]
  size_t Size; // [rsp+98h] [rbp+20h]

  v4 = (_BYTE *)*a1;
  v5 = (_BYTE *)a1[1];
  v6 = a4 - (_QWORD)a3;
  Size = a4 - (_QWORD)a3;
  v7 = (a4 - (__int64)a3) >> 3;
  if ( v7 )
  {
    v10 = a1[2];
    if ( v7 <= (v10 - (__int64)v5) >> 3 )
    {
      v21 = 8 * v7;
      v22 = v5 - a2;
      v23 = (v5 - a2) >> 3;
      if ( v7 >= v23 )
      {
        v24 = &a2[v21];
        memmove_0(&a2[v21], a2, v22);
        a1[1] = &v24[8 * v23];
      }
      else
      {
        memmove_0(v5, &v5[-v21], 8 * v7);
        a1[1] = &v5[v21];
        memmove_0(&a2[8 * v7], a2, (size_t)&v5[-8LL * v7 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v6);
    }
    else
    {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
      v12 = (v5 - v4) >> 3;
      if ( v7 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v13 = v12 + v7;
      v14 = (v10 - (__int64)v4) >> 3;
      v25 = v12 + v7;
      v15 = v14 >> 1;
      if ( v14 <= 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<8>(v11);
      v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v26 = (a2 - v4) >> 3;
      memmove_0(&v17[8 * v26], a3, Size);
      if ( v7 == 1 && a2 == v5 )
      {
        v18 = v5 - v4;
        v19 = v4;
        v20 = v17;
      }
      else
      {
        memmove_0(v17, v4, a2 - v4);
        v18 = v5 - a2;
        v19 = a2;
        v20 = &v17[8 * v7 + 8 * v26];
      }
      memmove_0(v20, v19, v18);
      if ( *a1 )
        std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
      *a1 = v17;
      a1[1] = &v17[8 * v25];
      a1[2] = &v17[8 * v11];
    }
  }
}
